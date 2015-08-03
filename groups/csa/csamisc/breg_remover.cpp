#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/Lex/Lexer.h>
#include <clang/AST/Stmt.h>
#include <clang/Sema/Sema.h>


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

#define log(s) (std::cout << s << std::endl )

using namespace csabase;
using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;

static std::string const check_name("breg-remover");

namespace {

//represents a condition in an if stmt
struct ExprTree {
    std::unique_ptr<ExprTree> lhs;
    std::unique_ptr<ExprTree> rhs;

    Expr const * clangNode;
    std::string op;

    bool removable;
    bool replaceable;
    bool evaluated;
    bool value;
    bool sideEffects;
    bool binary;

    ExprTree(std::unique_ptr<ExprTree> lhs, std::unique_ptr<ExprTree> rhs, bool removable, Expr const * clangNode) {
        this->lhs = std::move(lhs);
        this->rhs = std::move(rhs);
        this->clangNode = clangNode;

        this->removable = removable;
        this->replaceable = false;
        this->evaluated = false;

        this->binary = false;
        this->value = false;
        this->sideEffects = false;
    }

    void dump() {
        std::cout << "Removable: " << this->removable << "\n";
        std::cout << "Type: " << ( this->binary ? "Binary" : "Unary" ) << "\n";
        std::cout << "-------------\n";

        if (binary) {
            if ( this->lhs != nullptr ) {
                this->lhs->dump();
            }
            if ( this->rhs != nullptr ) {
                 this->rhs->dump();
            }
        }
        else {
            if ( this->lhs != nullptr ) {
                this->lhs->dump();
            }
        }
    }
};


    
struct data {
};


struct report : Report<data>
{
    INHERIT_REPORT_CTOR(report, Report, data);
    
    //used to store else stmts removed removed
    std::vector<Stmt const*> elsesRemoved;

    //stores location of breg if stmts
    std::vector<unsigned> bregLocations;


    void addChainedElses(Stmt const * stmt);
    bool hasVarDecls(CompoundStmt const * decl);
    std::string getStmtBodyReplacement(CompoundStmt const * stmt, unsigned column);

    void expressionPruning(std::unique_ptr<ExprTree>& node);
    void rebuildCondition(std::unique_ptr<ExprTree>& node);
    void removeBranch(std::unique_ptr<ExprTree>& node, Expr const * expr);
    void replaceBranch(std::unique_ptr<ExprTree>& node, Expr const * expr);

    std::string getExprString(Expr const * expr);

    void matchIf(BoundNodes const & nodes);
    void operator()();
};


//matches string initialization as a variable or in an initialization list
static const internal::DynTypedMatcher& dyn_matchIf()
{
    static const internal::DynTypedMatcher& matcher = findAll( functionDecl( hasDescendant( stmt ( findAll (                                                                                                                    ifStmt( hasCondition(    expr(  ).bind("expr") ) ).bind("ifstmt")
                                                                   ) ) ) ).bind("func") );
    return matcher; 
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
    if (stmt == NULL) {
        return;
    }
    IfStmt const * ifStmt = llvm::dyn_cast<IfStmt>(stmt);

    if (ifStmt != NULL) {
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
        if (varDeclStmt != NULL) {
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


//any sub expression that can be evaluated can be removed or replaced 
//the branches of the parent node will only ever reduce to the identity element for that logical operator

void report::expressionPruning(std::unique_ptr<ExprTree>& node)
{
    Expr const * expr = node->clangNode->IgnoreParens()->IgnoreCasts();
   
    bool expressionValue = true;
    bool evaluated = expr->EvaluateAsBooleanCondition(expressionValue, *d_analyser.context());

    BinaryOperator const * binExpr = llvm::dyn_cast<BinaryOperator>( expr ); 
    UnaryOperator const * unExpr = llvm::dyn_cast<UnaryOperator>( expr );
    CXXOperatorCallExpr const * overload = llvm::dyn_cast<CXXOperatorCallExpr>( expr );
        
    //if ( overload == nullptr ) {  }
    //else { 
    //    overload->dump(); 
    //    auto callee = overload->getCalleeDecl();
    //    if (callee == nullptr) { log("null");  }
    //    callee->dump();

    //    CXXMethodDecl const * method = llvm::dyn_cast<CXXMethodDecl>( callee );

    //    if (method == nullptr) {
    //        log("null");
    //    }
    //}

    if ( evaluated ) {
        //expression can be removed if no effects are present 

        node->evaluated = true;

        bool hasPossibleSideEffects = node->clangNode->HasSideEffects( *a.context() );
        node->value = expressionValue;

        //expression has no side-effects, parent has no side-effects 
        if ( hasPossibleSideEffects == false && node->sideEffects == false ) { //this includes function calls
            node->removable = true;
            return;
        }
        else if ( hasPossibleSideEffects == false ) { //expression has no side-effects but parent does
            //expression is able to be evaluated but left and right side can't be removed only replaced
            log("replaceable");
            node->replaceable = true;
            return;
        }
        else {
            log("side effects");
            node->sideEffects = true;
        }                 
    }

    if ( binExpr != nullptr ) {
       
        Expr const * lhs = binExpr->getLHS();
        Expr const * rhs = binExpr->getRHS();
        
        std::unique_ptr<ExprTree> nodeLHS( new ExprTree(nullptr, nullptr, false, lhs) );
        nodeLHS->sideEffects = node->sideEffects;
        std::unique_ptr<ExprTree> nodeRHS( new ExprTree(nullptr, nullptr, false, rhs) );
        nodeRHS->sideEffects = node->sideEffects;

        expressionPruning( nodeLHS );
        expressionPruning( nodeRHS );
 
        node->lhs = std::move(nodeLHS);
        node->rhs = std::move(nodeRHS);
        node->binary = true;
        node->op = binExpr->getOpcodeStr().str();

        node->sideEffects = node->lhs->sideEffects || node->rhs->sideEffects;
        node->removable = !node->sideEffects && node->evaluated;

        log(node->sideEffects);
        log(node->removable);
    }
    else if ( unExpr != nullptr ) {
        Expr const * sub = unExpr->getSubExpr();

        std::unique_ptr<ExprTree> nodeSub( new ExprTree(nullptr, nullptr, false, sub) );
        expressionPruning( nodeSub );
        
        node->lhs = std::move(nodeSub);
        node->binary = false;
        node->op = UnaryOperator::getOpcodeStr(unExpr->getOpcode()).str();

        node->sideEffects = node->lhs->sideEffects;
        node->removable = !node->sideEffects && node->evaluated;
    }
    else if ( overload != nullptr ) {
        std::string op = clang::getOperatorSpelling( overload->getOperator() );

        if ( op == "==" || 
             op == "!=" ) {
            node->sideEffects = false;
        }
    }
}


void report::rebuildCondition(std::unique_ptr<ExprTree>& node) 
{
    if ( node->binary ) {
        //only one branch will ever be removed 
        if ( !node->lhs->removable && !node->lhs->replaceable ) {
            rebuildCondition( node->lhs );
        }
        else if ( node->op == "&&" || node->op == "||" ) {
            if ( node->lhs->removable ) {
                removeBranch(node->rhs, node->clangNode);
            }
            else if ( node->lhs->replaceable ) {
                replaceBranch(node->lhs, node->lhs->clangNode);
            }
        }

        if ( !node->rhs->removable ) {
            rebuildCondition( node->rhs );
        }
        else if ( node->op == "&&" || node->op == "||" )  {
            if ( node->rhs->removable ) {
                removeBranch(node->lhs, node->clangNode);
            }
            else if ( node->rhs->replaceable ) {
                replaceBranch(node->rhs, node->rhs->clangNode);
            }
        }
    }
    else if ( node->lhs != nullptr ) {
        if ( !node->lhs->removable && !node->lhs->replaceable ) {
            rebuildCondition( node->lhs );
        }
        else {
            //if ( node->lhs->removeable ) {
            //    removeBranch(node->lhs, node->clangNode);
            //}
            //else if ( node->lhs->replaceable ) {
            //    replaceBranch(node->rhs, node->rhs->clangNode);
            //}


            //removeBranch(node->lhs, node->clangNode);
        }
    }
}


void report::replaceBranch(std::unique_ptr<ExprTree>& node, Expr const * expr)
{
    SourceLocation end = m.getFileLoc(Lexer::getLocForEndOfToken( expr->getLocEnd(), 0, m, a.context()->getLangOpts()));
    SourceRange rangeToBeReplaced = SourceRange( expr->getLocStart(), end );
     
    unsigned length = rangeToBeReplaced.getEnd().getRawEncoding() - rangeToBeReplaced.getBegin().getRawEncoding();
    std::string replacement = (node->value ? "true" : "false");
    Replacement replace = Replacement( a.manager(), rangeToBeReplaced.getBegin(), length, replacement );
    replace.apply( a.rewriter() );
}


void report::removeBranch(std::unique_ptr<ExprTree>& node, Expr const * expr)
{
    SourceLocation end = m.getFileLoc(Lexer::getLocForEndOfToken( expr->getLocEnd(), 0, m, a.context()->getLangOpts()));
    SourceRange rangeToBeReplaced = SourceRange( expr->getLocStart(), end );
     
    unsigned length = rangeToBeReplaced.getEnd().getRawEncoding() - rangeToBeReplaced.getBegin().getRawEncoding();
    Replacement replace = Replacement( a.manager(), rangeToBeReplaced.getBegin(), length, getExprString(node->clangNode) );
    replace.apply( a.rewriter() );
}

std::string report::getExprString(Expr const * expr) 
{
    SourceLocation end = m.getFileLoc(Lexer::getLocForEndOfToken( expr->getLocEnd(), 0, m, a.context()->getLangOpts()));
    SourceRange range = SourceRange( expr->getLocStart(), end );
    return a.get_source(range, true).str();
}

void report::matchIf(BoundNodes const & nodes)
{
    clang::IfStmt const * ifStmt = nodes.getNodeAs<clang::IfStmt>("ifstmt");

    auto i = std::find(bregLocations.begin(), bregLocations.end(), ifStmt->getLocStart().getRawEncoding());
    
    if ( i == bregLocations.end() ) {
        return;
    }
    else {
        bregLocations.erase(i); //don't check this one again 
    }
        
    //check if this if stmt has been removed already
    for ( auto e : elsesRemoved ) {
        if (e == ifStmt) {
            return;
        }
    }

    std::string tag = "BR01";
    std::string message = "";
    
    bool expressionValue = true;
    bool evaluated = ifStmt->getCond()->EvaluateAsBooleanCondition(expressionValue, *d_analyser.context());

    bool hasPossibleSideEffects = ifStmt->getCond()->HasSideEffects( *a.context() );

    bool modifyIf = false;

    if ( evaluated && !hasPossibleSideEffects ) {
        log("1");
        modifyIf = true;
    }
    else {
        std::unique_ptr<ExprTree> node( new ExprTree(nullptr, nullptr, false, ifStmt->getCond()) );

        expressionPruning( node );
        
        if ( node->removable == true ) {
            log("2");
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
            
            if ( hasVars ) { // braces must remain 
                SourceRange replacementRange = SourceRange(body->getLBracLoc(), body->getRBracLoc().getLocWithOffset(1));
                replacement = a.get_source(replacementRange, true).str();
            }
            else { // braces can be removed 
                unsigned columnNumber = a.manager().getPresumedColumnNumber(ifStmt->getLocStart());
                replacement = getStmtBodyReplacement(body, columnNumber);
            }

            if ( elseStmt != NULL ) { 
                addChainedElses( elseStmt ); //store else statements removed 
            }   
        }
        else { //removes the if stmt, leaves the else parts if there are any
            
            if ( elseStmt != NULL ) {
                
                SourceRange elseRange = SourceRange(elseStmt->getLocStart().getLocWithOffset(0), ifStmt->getLocEnd().getLocWithOffset(1));
                replacement = a.get_source(elseRange, true).str();

                CompoundStmt const * elseBody = llvm::dyn_cast<CompoundStmt>( elseStmt );

                if (elseBody != NULL) {
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

    analyser.onTranslationUnitDone += report(analyser); 
}

}  // close anonymous namespace

// -----------------------------------------------------------------------------

static RegisterCheck register_check(check_name, &subscribe);







