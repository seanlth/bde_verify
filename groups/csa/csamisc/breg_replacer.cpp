#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/Lex/Lexer.h>
#include <clang/AST/Stmt.h>

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

using namespace csabase;
using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;

static std::string const check_name("breg-replacer");

namespace {
 

    
struct data {
   
};


struct report : Report<data>
{
    
    std::vector<std::string> bregNames;
    std::vector<unsigned> bregLocations;
    int offset;

    report(Analyser& analyser, PPObserver::CallbackType type = PPObserver::e_None);
       
    void matchBreg(BoundNodes const & nodes);
    void operator()();
    void operator()(SourceLocation where, bool, std::string const& name); 
};

report::report(Analyser& analyser, PPObserver::CallbackType type)
 : Report<data>(analyser, type)
{
    offset = 0;

    llvm::SmallVector<llvm::StringRef, 1000> bregNamesFromConfig;
    llvm::StringRef(a.config()->value("breg_names"))
        .split(bregNamesFromConfig, " ", -1, false);

    for (size_t i = 0; i < bregNamesFromConfig.size(); i++) {
        std::vector<std::string> e = Config::brace_expand(bregNamesFromConfig[i]);
        bregNames.insert(bregNames.end(), e.begin(), e.end());
    }

}


//matches string initialization as a variable or in an initialization list
static const internal::DynTypedMatcher& dyn_matchBreg()
{
    static const internal::DynTypedMatcher& matcher = findAll( functionDecl( hasDescendant( 
                                                               stmt ( findAll (                                                                                                  ifStmt( hasCondition( expr( findAll( 
                                                               callExpr().bind("call"))))).bind("ifstmt") )))));
    return matcher; 
}

void report::operator()(SourceLocation where,
                bool,
                std::string const& name)
{
    if ( name == "breg" ) {
        SourceRange range = SourceRange(where, where.getLocWithOffset(11 + name.length()));  //#include <> + name.length
        a.ReplaceText(a.get_full_range(range), "");
    }
}

void report::operator()()
{
    MatchFinder finder;
    csabase::OnMatch<report, &report::matchBreg> m(this);
    finder.addDynamicMatcher(dyn_matchBreg(), &m);
    finder.match(*d_analyser.context()->getTranslationUnitDecl(), *d_analyser.context());

    //write locations of breg if stmts
    std::ofstream bregFile;
    bregFile.open(".bregLocs");

    for (auto i : bregLocations) {
        bregFile << i << "\n";
    }

    bregFile.close();
}

//replace with actual breg
static bool getBregValue(std::string str) {
    if ( str == "bregF" ) {
        return false;
    }
    else if ( str == "bregT" ) {
        return true;
    }
    return false;
}


void report::matchBreg(BoundNodes const & nodes)
{
    clang::CallExpr const * call = nodes.getNodeAs<clang::CallExpr>("call");
    clang::IfStmt const * ifStmt = nodes.getNodeAs<clang::IfStmt>("ifstmt");

    
    for (auto e : bregNames) {
        if ( call->getDirectCallee() != NULL ) {
            if ( call->getDirectCallee()->getNameAsString() == e ) {
                std::string replacement = getBregValue(e) ? "true" : "false";
                SourceRange range = SourceRange(call->getLocStart(), call->getLocEnd());

                a.ReplaceText(a.get_full_range(range), replacement);
                bregLocations.push_back( ifStmt->getLocStart().getRawEncoding() - offset );
                
                //offset of if stmt before and after replacing breg calls 
                offset += ( 1 + range.getEnd().getRawEncoding() - range.getBegin().getRawEncoding() ) - replacement.size();
            }
        }
    }   
}


void subscribe(Analyser& analyser, Visitor& visitor, PPObserver& observer) {
    analyser.onTranslationUnitDone += report(analyser); 
    observer.onInclude += report(analyser);
}

}  // close anonymous namespace

// -----------------------------------------------------------------------------

static RegisterCheck register_check(check_name, &subscribe);







