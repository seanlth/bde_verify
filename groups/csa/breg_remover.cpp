#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/Lex/Lexer.h>
#include <clang/AST/Stmt.h>
#include <clang/Sema/Sema.h>
#include <clang/Frontend/CompilerInstance.h>
#include <csabase_ppobserver.h>

#include <csabase_analyser.h>
#include <csabase_debug.h>
#include <csabase_diagnostic_builder.h>
#include <csabase_registercheck.h>
#include <csabase_report.h>
#include <csabase_util.h>
#include <csabase_visitor.h>

#include <set>
#include <iostream>
#include <fstream>

#include "breg_replacer.h"
#include "ExprTree.h"
//#include "breg_matchers.h"

#define log(s) (std::cout << s << std::endl )
#define maybe(check) if (check == nullptr) {return;} 

using namespace csabase;
using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;

static std::string const check_name("breg-remover");

namespace {

    /*
    //represents a condition in an if stmt
    struct ExprTree {
        std::unique_ptr<ExprTree> lhs;
        std::unique_ptr<ExprTree> rhs;

        Expr const * clangNode;
        std::string op;

        bool removable;
        bool evaluated;
        bool sideEffects;
        bool binary;

        ExprTree();
        ExprTree(std::unique_ptr<ExprTree> lhs, std::unique_ptr<ExprTree> rhs, bool removable, Expr const * clangNode);

    };

    ExprTree::ExprTree() : 
        lhs(nullptr),
        rhs(nullptr),
        clangNode(nullptr),
        op(),
        removable(false),
        evaluated(false),
        sideEffects(false),
        binary(false)
    {
    }

    
    ExprTree::ExprTree(std::unique_ptr<ExprTree> lhs, std::unique_ptr<ExprTree> rhs, bool removable, Expr const * clangNode) :
        lhs(std::move(lhs)),
        rhs(std::move(rhs)),
        clangNode(clangNode),
        op(),
        removable(removable),
        evaluated(false),
        sideEffects(false),
        binary(false)
    {
    }
*/

    
struct data {
};


struct report : Report<data>
{
    //INHERIT_REPORT_CTOR(report, Report, data);
   
    report(Analyser& analyser, PPObserver::CallbackType type = PPObserver::e_None);

    Stmt const * node;
    

    //used to store else stmts removed removed
    std::vector<Stmt const*> elsesRemoved;

    //stores location of breg if stmts
    std::vector<unsigned> bregLocations;
    std::vector<std::string> bregNames;

    std::string getExprString(Expr const * expr);
    std::string getStmtBodyReplacement(CompoundStmt const * stmt, unsigned column);

    //std::pair<bool, std::string> sideEffectAnalysis(FunctionDecl const * f);

    bool hasVarDecls(CompoundStmt const * stmt);

    void addChainedElses(Stmt const * stmt);
    //void expressionPruning(std::unique_ptr<ExprTree>& node);
    void rebuildCondition(std::unique_ptr<ExprTree>& node);
    void removeBranch(std::unique_ptr<ExprTree>& node, Expr const * expr);
    
    void matchIf(BoundNodes const & nodes);
    void operator()();
    void operator()(SourceLocation where, bool, std::string const& name); 
    

    //void matchDeclRefExpr(BoundNodes const & nodes);


    //DeclRefExpr const * getDeclRefExpr(Expr const * e);
    //template<typename T>
    //T const * getNodeInExpr(Stmt const * e, const internal::DynTypedMatcher &NodeMatch );
};





/*
void report::matchDeclRefExpr(BoundNodes const & nodes)
{
    DeclRefExpr const * declRef = nodes.getNodeAs<DeclRefExpr>("declRef");
            
    node = declRef;
}

DeclRefExpr const * report::getDeclRefExpr(Expr const * e)
{
    const internal::DynTypedMatcher& matcher = expr( hasDescendant( declRefExpr().bind("declRef") )) ;

    MatchFinder finder;

    OnMatch<> m([&](const BoundNodes &nodes) { 
                DeclRefExpr const * declRef = nodes.getNodeAs<DeclRefExpr>("declRef");
                node = declRef;
            });


    //csabase::OnMatch<report, &report::matchDeclRefExpr> m(this);
    finder.addDynamicMatcher(matcher, &m);
    finder.match(*e, *a.context());

    return llvm::dyn_cast<DeclRefExpr>( node );
}


template<typename T>
T const * report::getNodeInExpr(Stmt const * e, const internal::DynTypedMatcher &NodeMatch )
{
    const internal::DynTypedMatcher& matcher = NodeMatch;

    MatchFinder finder;

    OnMatch<> m([&](const BoundNodes &nodes) { 
                T const * n = nodes.getNodeAs<T>("node");
                node = n;
            });


    //csabase::OnMatch<report, &report::matchDeclRefExpr> m(this);
    finder.addDynamicMatcher(matcher, &m);
    finder.match(*e, *a.context());

    if ( node == nullptr ) {
        return nullptr;
    }

    return llvm::dyn_cast<T>( node );
}
*/
//matches string initialization as a variable or in an initialization list
static const internal::DynTypedMatcher dyn_matchIf()
{
    static const internal::DynTypedMatcher matcher = findAll( functionDecl( hasDescendant( stmt ( findAll (                                                                                                                    ifStmt( hasCondition( expr().bind("expr"))).bind("ifstmt")
                                                                   )))).bind("func"));
    return matcher; 
}

report::report(Analyser& analyser, PPObserver::CallbackType type)
    : Report<data>(analyser, type)
{
    std::string csvFile = a.config()->value("breg_file"); 
        
    auto arr = readCSV(csvFile);

    bregNames.resize(arr.size());

    for ( auto e : arr ) {
        bregNames.push_back(e.first);
    }
}

//remove includes
void report::operator()(SourceLocation where, bool, std::string const& name)
{
    for (std::string bregName : bregNames) {
        if ( name.find( bregName ) != std::string::npos ) {
            SourceRange range = SourceRange(where, where.getLocWithOffset(11 + name.length()));  //#include <> + name.length
            a.ReplaceText(a.get_full_range(range), "");
        }
    }
}


void report::operator()()
{
    std::ifstream bregFile;
    bregFile.open(".bregLocs");
    if ( bregFile.is_open() ) {
        std::string locStr;
        while (std::getline(bregFile, locStr)) {
            bregLocations.push_back( atoi(locStr.c_str()) );
        }
    }
    else {
        return; //nothing to be done, no bregs found
    }
    bregFile.close();

    MatchFinder finder;
    csabase::OnMatch<report, &report::matchIf> m(this);
    finder.addDynamicMatcher(dyn_matchIf(), &m);
    finder.match(*d_analyser.context()->getTranslationUnitDecl(), *d_analyser.context());
}

void report::addChainedElses(Stmt const * stmt) {
    if (stmt == nullptr) {
        return;
    }
    IfStmt const * ifStmt = llvm::dyn_cast<IfStmt>(stmt);

    if (ifStmt != nullptr) {
        elsesRemoved.push_back(ifStmt);
        addChainedElses(ifStmt->getElse());
    }
}

bool report::hasVarDecls(CompoundStmt const * stmt)
{
    typedef clang::CompoundStmt::body_iterator bdy_iter;
   
    for (bdy_iter iter = (bdy_iter)stmt->body_begin(); iter != (bdy_iter)stmt->body_end(); iter++) {
        Stmt const * s = *iter;
        clang::DeclStmt const * varDeclStmt = llvm::dyn_cast<clang::DeclStmt>(s);
        if (varDeclStmt != nullptr) {
            return true;
        }
    }
    
    return false;
}

std::string report::getStmtBodyReplacement(CompoundStmt const * stmt, unsigned column)
{
    if ( stmt->body_empty() ) {
        return "";
    }
    typedef clang::CompoundStmt::body_iterator bdy_iter;
    Stmt const * firstStmt = *( stmt->body_begin() );
    SourceLocation stmtEnd = m.getFileLoc(Lexer::getLocForEndOfToken( firstStmt->getLocEnd(), 0, m, a.context()->getLangOpts()));

    SourceRange range = SourceRange( firstStmt->getLocStart(), stmtEnd );
    
    std::string replacement = a.get_source(range, true).str() + ";\n";
    if ( replacement == ";;" ) {
        replacement = ";";
    }
    
    for (bdy_iter iter = (bdy_iter)stmt->body_begin()+1; iter != (bdy_iter)stmt->body_end(); iter++) {
        Stmt const * s = *iter;
                    
        SourceLocation stmtEnd = m.getFileLoc(Lexer::getLocForEndOfToken( s->getLocEnd(), 0, m, a.context()->getLangOpts()));

        SourceRange r = SourceRange( s->getLocStart(), stmtEnd );
        replacement += std::string(column-1, ' ') + a.get_source(r, true).str() + ";\n";
    }
    return replacement;
}

std::pair<bool, std::string> report::sideEffectAnalysis(FunctionDecl const * f)
{
    if ( f->hasBody() ) {
        CompoundStmt const * body = llvm::dyn_cast<CompoundStmt>( f->getBody() );
       
        if ( body->size() > 15 ) {
            return std::pair<bool, std::string>( true, "function is over 15 lines long" );
        } 

        

        typedef clang::CompoundStmt::body_iterator bdy_iter;
        typedef clang::FunctionDecl::param_iterator param_iter;

        for (param_iter iter = (param_iter)f->param_begin(); iter != (param_iter)f->param_end(); iter++) {
            ParmVarDecl const * varDecl = *iter;
            
            QualType qualType = varDecl->getType();
                   
            if ( qualType.getTypePtr()->isPointerType() || qualType.getTypePtr()->isReferenceType() ) {
                if ( !qualType.getTypePtr()->getPointeeType().isConstQualified() ) {
                    return std::pair<bool, std::string>( true, "passing non-const pointer or reference" );
                }
            }
        }

   
        for (bdy_iter iter = (bdy_iter)body->body_begin(); iter != (bdy_iter)body->body_end(); iter++) {
            Stmt const * s = *iter;

            UnaryOperator const * un = getNodeInExpr<UnaryOperator>( s, stmt( hasDescendant( unaryOperator().bind("node") )) );

            BinaryOperator const * assign = llvm::dyn_cast<BinaryOperator>( s );
            CallExpr const * call = llvm::dyn_cast<CallExpr>( s );
            DeclStmt const * declStmt = llvm::dyn_cast<DeclStmt>( s );

            s->dump();
            
            if ( un != nullptr ) {
                //un = getNodeInExpr<UnaryOperator>( s, stmt( hasDescendant( eachOf( unaryOperator(hasOperatorName("++")).bind("node"),
                //                                                                   unaryOperator(hasOperatorName("--")).bind("node"))) ));
                if (un != nullptr) {
                    if ( un->isIncrementDecrementOp() ) {
                        DeclRefExpr const * var = getNodeInExpr<DeclRefExpr>( un->getSubExpr(),  
                                expr( hasDescendant( declRefExpr().bind("node") )) );
                        MemberExpr const * member = getNodeInExpr<MemberExpr>( un->getSubExpr(),  
                                expr( hasDescendant( memberExpr().bind("node") )) );

                        if ( var != nullptr ) {
                            VarDecl const * varDecl = llvm::dyn_cast<VarDecl>( var->getDecl() );
                            if ( !varDecl->hasLocalStorage() ) {
                                return std::pair<bool, std::string>( true, "incrementing or decrementing non-local variable" );
                            }
                        }
                        else if ( member != nullptr ) {
                            member->dump();
                            member->getMemberDecl()->dump();
                            FieldDecl const * fieldDecl = llvm::dyn_cast<FieldDecl>( member->getMemberDecl() );
                            QualType qualType = member->getType();

                            var = llvm::dyn_cast<DeclRefExpr>( member->getBase() );
                            VarDecl const * varDecl = llvm::dyn_cast<VarDecl>( var->getDecl() );
                            varDecl->dump();
                            if ( !varDecl->hasLocalStorage() ) {
                                return std::pair<bool, std::string>( true, "incrementing or decrementing non-local variable" );
                            }  
                            else if ( qualType.getTypePtr()->isPointerType() || qualType.getTypePtr()->isReferenceType() ) {
                                if ( !qualType.getTypePtr()->getPointeeType().isConstQualified() ) {
                                    //DeclRefExpr const * var = getDeclRefExpr( varDecl->getInit() );
                                    if ( var != nullptr ) {
                                        varDecl = llvm::dyn_cast<VarDecl>( var->getDecl() );
                                        if (varDecl != nullptr) {
                                            if ( !varDecl->hasLocalStorage() ) {
                                                return std::pair<bool, std::string>( true, "incrementing or decrementing non-local variable" );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if ( assign != nullptr ) {
                if ( assign->isAssignmentOp() || assign->isCompoundAssignmentOp() ) {
                    DeclRefExpr const * var = llvm::dyn_cast<DeclRefExpr>( assign->getLHS() );
                    MemberExpr const * member = llvm::dyn_cast<MemberExpr>( assign->getLHS() );

                    if ( var != nullptr ) {
                        VarDecl const * varDecl = llvm::dyn_cast<VarDecl>( var->getDecl() );
                        if ( !varDecl->hasLocalStorage() ) {
                            return std::pair<bool, std::string>( true, "assigning to non-local variable" );
                        }
                    }
                    else if ( member != nullptr ) {

                        var = llvm::dyn_cast<DeclRefExpr>( member->getBase() );
                        VarDecl const * varDecl = llvm::dyn_cast<VarDecl>( var->getDecl() );
                        if ( !varDecl->hasLocalStorage() ) {
                            return std::pair<bool, std::string>( true, "assigning to non-local variable" );
                        }   
                        else {
                            QualType qualType = member->getType();
                   
                            if ( qualType.getTypePtr()->isPointerType() || qualType.getTypePtr()->isReferenceType() ) {
                                if ( !qualType.getTypePtr()->getPointeeType().isConstQualified() ) {
                                    DeclRefExpr const * var = getDeclRefExpr( varDecl->getInit() );
                                    if ( var != nullptr ) {
                                        varDecl = llvm::dyn_cast<VarDecl>( var->getDecl() );
                                        if (varDecl != nullptr) {
                                            if ( !varDecl->hasLocalStorage() ) {
                                                return std::pair<bool, std::string>( true, "assigning non-const pointer or reference to non-local variable" );
                                            }
                                        }
                                    }
                                }
                            }

                        }
                    }
                }
            }
            else if ( declStmt != nullptr ) {
                VarDecl const * varDecl = llvm::dyn_cast<VarDecl>( declStmt->getSingleDecl() );     
                
                if ( varDecl != nullptr ) {
                    QualType qualType = varDecl->getType();
                   
                    if ( qualType.getTypePtr()->isPointerType() || qualType.getTypePtr()->isReferenceType() ) {
                        if ( !qualType.getTypePtr()->getPointeeType().isConstQualified() ) {
                            DeclRefExpr const * var = getNodeInExpr<DeclRefExpr>( varDecl->getInit(),  expr( hasDescendant( declRefExpr().bind("node") )) );
                            if ( var != nullptr ) {
                                varDecl = llvm::dyn_cast<VarDecl>( var->getDecl() );
                                if (varDecl != nullptr) {
                                    if ( !varDecl->hasLocalStorage() ) {
                                        return std::pair<bool, std::string>( true, "declaring non-const pointer or reference to non-local variable" );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if ( call != nullptr ) {
                FunctionDecl const * func = llvm::dyn_cast<FunctionDecl>( call->getCalleeDecl() );
                if ( func != nullptr ) {
                    return sideEffectAnalysis( func );
                }
            }
        }
    }
    return std::pair<bool, std::string>( false, "" );
}
*/

//any sub expression that can be evaluated can be removed or replaced 
//the branches of the parent node will only ever reduce to the identity element for that logical operator
/*
void report::expressionPruning(std::unique_ptr<ExprTree>& node)
{
    Expr const * expr = node->clangNode->IgnoreParens()->IgnoreCasts();
   
    bool expressionValue = true;
    bool evaluated = expr->EvaluateAsBooleanCondition(expressionValue, *d_analyser.context());

    BinaryOperator const * binExpr = llvm::dyn_cast<BinaryOperator>( expr ); 
    UnaryOperator const * unExpr = llvm::dyn_cast<UnaryOperator>( expr );
    CallExpr const * call = llvm::dyn_cast<CallExpr>( expr );
    CXXBoolLiteralExpr const * boolLiteral = llvm::dyn_cast<CXXBoolLiteralExpr>( expr );
        
    if ( evaluated ) {
        node->evaluated = true;

        bool hasPossibleSideEffects = node->clangNode->HasSideEffects( *a.context() );

        if ( hasPossibleSideEffects == false && node->sideEffects == false ) {
            node->removable = true;
            return;
        }
        else {
            node->sideEffects = true;
        }
    }

    if ( binExpr != nullptr ) {
       
        Expr const * lhs = binExpr->getLHS();
        Expr const * rhs = binExpr->getRHS();
        
        std::unique_ptr<ExprTree> nodeLHS( new ExprTree(nullptr, nullptr, false, lhs) );
        std::unique_ptr<ExprTree> nodeRHS( new ExprTree(nullptr, nullptr, false, rhs) );
        
        nodeLHS->sideEffects = node->sideEffects;
        nodeRHS->sideEffects = node->sideEffects;

        expressionPruning( nodeLHS );
        expressionPruning( nodeRHS );
 
        node->lhs = std::move(nodeLHS);
        node->rhs = std::move(nodeRHS);
        node->binary = true;
        node->op = binExpr->getOpcodeStr().str();
        
        node->sideEffects = node->lhs->sideEffects || node->rhs->sideEffects;
        node->removable = !node->sideEffects && node->evaluated;
    }
    else if ( unExpr != nullptr ) {
        Expr const * sub = unExpr->getSubExpr();

        std::unique_ptr<ExprTree> nodeSub( new ExprTree(nullptr, nullptr, false, sub) );

        nodeSub->sideEffects = node->sideEffects;

        expressionPruning( nodeSub );
        
        node->lhs = std::move(nodeSub);
        node->binary = false;
        node->op = UnaryOperator::getOpcodeStr(unExpr->getOpcode()).str();

        node->sideEffects = node->lhs->sideEffects;
        node->removable = !node->sideEffects && node->evaluated;
    }
    else if ( call != nullptr ) {
        FunctionDecl const * f = llvm::dyn_cast<FunctionDecl>( call->getCalleeDecl() );

        if ( f != nullptr ) {
            std::pair<bool, std::string> sideEffects = sideEffectAnalysis(f);
            node->sideEffects = sideEffects.first;
            call->getLocStart().dump(m);
            std::cout << ": ";

            if ( node->sideEffects == true ) {
                std::cout << "unable to remove function: '" << call->getDirectCallee()->getNameAsString() << "'" << ", ";
                std::cout << sideEffects.second << std::endl;
            }
            else {
                std::cout << "removing call to '" << call->getDirectCallee()->getNameAsString() << "'" << std::endl;
            }
        }
    }
    else if ( boolLiteral != nullptr ) {
        node->sideEffects = false;
    }

}
*/

void report::rebuildCondition(std::unique_ptr<ExprTree>& node) 
{
    if ( node->binary ) {
        //only one branch will ever be removed 
        if ( !node->lhs->removable ) {
            rebuildCondition( node->lhs );
        }
        else if ( node->op == "&&" || node->op == "||" ) {
            removeBranch(node->rhs, node->clangNode);
        }

        if ( !node->rhs->removable ) {
            rebuildCondition( node->rhs );
        }
        else if ( node->op == "&&" || node->op == "||" )  {
            removeBranch(node->lhs, node->clangNode);
        }
    }
    else if ( node->lhs != nullptr ) {
        if ( !node->lhs->removable ) {
            rebuildCondition( node->lhs );
        }
    }
}

void report::removeBranch(std::unique_ptr<ExprTree>& node, Expr const * expr)
{
    SourceLocation end = m.getFileLoc(Lexer::getLocForEndOfToken( expr->getLocEnd(), 0, m, a.context()->getLangOpts()));
    SourceRange rangeToBeReplaced = SourceRange( expr->getLocStart(), end );
     
    unsigned length = rangeToBeReplaced.getEnd().getRawEncoding() - rangeToBeReplaced.getBegin().getRawEncoding();
    Replacement replace = Replacement( a.manager(), rangeToBeReplaced.getBegin(), length, getExprString(node->clangNode) );
    replace.apply( a.rewriter() );

    rangeToBeReplaced.getBegin().dump(a.manager());
    std::cout << ": ";
    std::cout << "replacing condition: " << "'" << a.get_source(rangeToBeReplaced).str() << "'" << std::endl << std::endl;
    std::cout << " with: " << "'" << getExprString(node->clangNode) << "'" << std::endl << std::endl;
}

std::string report::getExprString(Expr const * expr) 
{
    SourceLocation end = m.getFileLoc(Lexer::getLocForEndOfToken( expr->getLocEnd(), 0, m, a.context()->getLangOpts()));
    SourceRange range = SourceRange( expr->getLocStart(), end );
    return a.get_source(range, true).str();
}

void report::matchIf(BoundNodes const & nodes)
{
    FunctionDecl const * func = nodes.getNodeAs<FunctionDecl>("func");
    IfStmt const * ifStmt = nodes.getNodeAs<IfStmt>("ifstmt");

    auto found = std::find(bregLocations.begin(), bregLocations.end(), ifStmt->getLocStart().getRawEncoding());

    if ( found == bregLocations.end() ) {
        return;
    }
    else {
        *found = 0; //don't check this one again 
    }
        
    //check if this if stmt has been removed already
    for ( auto e : elsesRemoved ) {
        if (e == ifStmt) {
            return;
        }
    }

    bool expressionValue = true;
    bool evaluated = ifStmt->getCond()->EvaluateAsBooleanCondition(expressionValue, *d_analyser.context());

    bool hasPossibleSideEffects = ifStmt->getCond()->HasSideEffects( *a.context() );

    bool modifyIf = false;

    if ( evaluated && !hasPossibleSideEffects ) {
        modifyIf = true;
    }
    else {
        std::unique_ptr<ExprTree> node( new ExprTree(nullptr, nullptr, false, ifStmt->getCond(), a.context(), &m) );

        node->pruneTree();

        if ( node->removable == true ) {
            modifyIf = true;
        }
        else { // if stmt cannot be altered, branches of condition expression may be removed though 
            rebuildCondition( node );
        }
    }


    if ( modifyIf ) { // if stmt can change immediately, either the body can go or the condition can go

        Stmt const * elseStmt = ifStmt->getElse();

        std::string replacement;   
        SourceRange rangeToBeReplaced = SourceRange(ifStmt->getLocStart(), ifStmt->getLocEnd().getLocWithOffset(1));

        if (expressionValue == true) { //replace entire if stmt with body of if

            CompoundStmt const * body = static_cast<CompoundStmt const*>( ifStmt->getThen() );
            bool hasVars = hasVarDecls( body ); // does the if body has var decls 
           
            if (body->body_back() != nullptr) {
                ReturnStmt const * ret = llvm::dyn_cast<ReturnStmt>( body->body_back() );
            
                if ( ret != nullptr ) {
                    CompoundStmt const * funcBody = llvm::dyn_cast<CompoundStmt>( func->getBody() );
                    if ( funcBody != nullptr ) {
                        rangeToBeReplaced = SourceRange(ifStmt->getLocStart(), funcBody->getLocEnd());
                        unsigned columnNumber = a.manager().getPresumedColumnNumber(ifStmt->getLocStart());
                        replacement = getStmtBodyReplacement(body, columnNumber);
                    }
                }
                else if ( hasVars ) { // braces must remain 
                    SourceRange replacementRange = SourceRange(body->getLBracLoc(), body->getRBracLoc().getLocWithOffset(1));
                    replacement = a.get_source(replacementRange, true).str();
                }
                else { // braces can be removed 
                    unsigned columnNumber = a.manager().getPresumedColumnNumber(ifStmt->getLocStart());
                    replacement = getStmtBodyReplacement(body, columnNumber);
                }
            }

            if ( elseStmt != nullptr ) { 
                addChainedElses( elseStmt ); //store else statements removed 
            }   
        }
        else { //removes the if stmt, leaves the else parts if there are any
            
            if ( elseStmt != nullptr ) {
                
                SourceRange elseRange = SourceRange(elseStmt->getLocStart().getLocWithOffset(0), ifStmt->getLocEnd().getLocWithOffset(1));
                replacement = a.get_source(elseRange, true).str();

                CompoundStmt const * elseBody = llvm::dyn_cast<CompoundStmt>( elseStmt );

                if (elseBody != nullptr) {
                    bool hasVars = hasVarDecls( elseBody ); 
                    
                    if ( !hasVars ) {
                        unsigned columnNumber = a.manager().getPresumedColumnNumber(ifStmt->getLocStart());
                        replacement = getStmtBodyReplacement(elseBody, columnNumber);
                    }
                }
            }
        }
        
        unsigned length = rangeToBeReplaced.getEnd().getRawEncoding() - rangeToBeReplaced.getBegin().getRawEncoding();
        Replacement replace = Replacement( a.manager(), rangeToBeReplaced.getBegin(), length, replacement );
        replace.apply( a.rewriter() );
    }
}


void subscribe(Analyser& analyser, Visitor& visitor, PPObserver& observer) {
    observer.onInclude += report(analyser);
    analyser.onTranslationUnitDone += report(analyser); 
}

}  // close anonymous namespace

// -----------------------------------------------------------------------------

static RegisterCheck register_check(check_name, &subscribe);







