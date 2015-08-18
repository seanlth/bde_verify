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


#define log(s) (std::cout << s << std::endl )
#define maybe(check) if (check == nullptr) {return;} 

using namespace csabase;
using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;

static std::string const check_name("breg-remover");

namespace {

    
struct data {
};


struct report : Report<data>
{
    //INHERIT_REPORT_CTOR(report, Report, data);
   
    report(Analyser& analyser, PPObserver::CallbackType type = PPObserver::e_None);

    Stmt const * node;

    bool ignoreSideEffects;
    

    //used to store else stmts removed removed
    std::vector<Stmt const*> elsesRemoved;

    //stores location of breg if stmts
    std::vector<unsigned> bregLocations;
    std::vector<std::string> bregNames;

    std::string getExprString(Expr const * expr);
    std::string getStmtBodyReplacement(CompoundStmt const * stmt, unsigned column);

    bool hasVarDecls(CompoundStmt const * stmt);

    void addChainedElses(Stmt const * stmt);
    void rebuildCondition(std::unique_ptr<ExprTree>& node);
    void removeBranch(std::unique_ptr<ExprTree>& node, Expr const * expr);
    
    void matchIf(BoundNodes const & nodes);
    void operator()();
    void operator()(SourceLocation where, bool, std::string const& name); 
    
};



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
    ignoreSideEffects = a.config()->value("side_effects") == "true";

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
    finder.match(*a.context()->getTranslationUnitDecl(), *a.context());
}

void report::addChainedElses(Stmt const * stmt) {
    if (stmt != nullptr ) { 
        IfStmt const * ifStmt = llvm::dyn_cast<IfStmt>(stmt);
        if (ifStmt != nullptr) {
            elsesRemoved.push_back(ifStmt);
            addChainedElses(ifStmt->getElse());
        }
    }
}

bool report::hasVarDecls(CompoundStmt const * stmt)
{
    for (auto iter = stmt->body_begin(); iter != stmt->body_end(); iter++) {
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
    Stmt const * firstStmt = *( stmt->body_begin() );
    SourceLocation stmtEnd = m.getFileLoc(Lexer::getLocForEndOfToken( firstStmt->getLocEnd(), 0, m, a.context()->getLangOpts()));

    SourceRange range = SourceRange( firstStmt->getLocStart(), stmtEnd );
    
    std::string replacement = a.get_source(range, true).str() + ";\n";
    if ( replacement == ";;" ) {
        replacement = ";";
    }
    
    for (auto iter = stmt->body_begin()+1; iter != stmt->body_end(); iter++) {
        Stmt const * s = *iter;
                    
        SourceLocation stmtEnd = m.getFileLoc(Lexer::getLocForEndOfToken( s->getLocEnd(), 0, m, a.context()->getLangOpts()));

        SourceRange r = SourceRange( s->getLocStart(), stmtEnd );
        replacement += std::string(column-1, ' ') + a.get_source(r, true).str() + ";\n";
    }
    return replacement;
}

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
    bool evaluated = ifStmt->getCond()->EvaluateAsBooleanCondition(expressionValue, *a.context());

    bool hasPossibleSideEffects = ifStmt->getCond()->HasSideEffects( *a.context() );

    bool modifyIf = false;

    if ( evaluated && !hasPossibleSideEffects ) {
        modifyIf = true;
    }
    else {
        std::unique_ptr<ExprTree> node( new ExprTree(nullptr, nullptr, false, ignoreSideEffects, ifStmt->getCond(), a.context(), &m) );

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







