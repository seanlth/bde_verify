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
#include <sstream>

using namespace csabase;
using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;

static std::string const check_name("breg-replacer");

namespace {



    struct data {

    };

    enum boolValue {
        trueValue = 1,
        falseValue = 0,
        defaultValue = 3
    };

    struct report : Report<data>
    {
        std::vector<std::pair<std::string, boolValue>> bregs;
        std::vector<unsigned> bregLocations;

        int offset;

        report(Analyser& analyser, PPObserver::CallbackType type = PPObserver::e_None);
        void readCSV();

        void matchBreg(BoundNodes const & nodes);

        void operator()();
        void operator()(SourceLocation where, bool, std::string const& name); 
    };

    void split(std::string s, char delim, std::vector<std::string>& tokens)
    {
        std::stringstream stream(s);
        std::string str;
        while (std::getline(stream, str, delim)) {
            tokens.push_back(str);
        }
    }


    report::report(Analyser& analyser, PPObserver::CallbackType type)
        : Report<data>(analyser, type)
    {
        offset = 0;
        std::string csvFile = a.config()->value("breg_file").c_str(); 
        
        readCSV(csvFile);

        for (auto b : bregs) {
            std::cout << b.first << " " << b.second << std::endl;
        }
    }
    
    void report::readCSV(std::string file) 
    {
        std::ifstream bregFile;
        bregFile.open(file);

        if ( bregFile.is_open() ) {
            std::vector<std::string> lines;
            std::string str;

            while ( std::getline(bregFile, str) ) {
                lines.push_back(str);
            }

            for (auto l : lines) {
                std::vector<std::string> t;
                split(l, ',', t);
                std::pair<std::string, boolValue> pair;
                pair.first = t[0];
                if ( t.size() == 2 ) {
                    pair.second = (t[1] == "true" ? trueValue : falseValue);
                }
                else {
                    pair.second = defaultValue;
                }

                bregs.push_back(pair);
            }
            bregFile.close();
        }
        else {
            std::cout << "file: "<< file << " was not found" << std::endl;
            return;
        }
    }


    //matches string initialization as a variable or in an initialization list
    static const internal::DynTypedMatcher& dyn_matchBreg()
    {
        static const internal::DynTypedMatcher& matcher = findAll( functionDecl( hasDescendant( 
                        stmt ( findAll (                                                                                                                                           ifStmt( hasCondition( expr( findAll( 
                                                callExpr().bind("call"))))).bind("ifstmt") )))));
        return matcher; 
    }

    /*
    void report::operator()(SourceLocation where,
            bool,
            std::string const& name)
    {
        for (std::string bregName : bregNames) {
            //std::cout << bregName << std::endl;
            headers.push_back(header(where, name));

            //if ( name.find( bregName ) != std::string::npos ) {
            //    SourceRange range = SourceRange(where, where.getLocWithOffset(11 + name.length()));  //#include <> + name.length
            //    a.ReplaceText(a.get_full_range(range), "");
            //}
        }
    }
    */
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

    static bool callDataBase( CallExpr const * call, std::string name ) 
    {
        /*
           UnaryOperator const * un = static_cast<UnaryOperator const *>( call->getArgs()[0]->IgnoreParens() );
           CXXBoolLiteralExpr const * boolLit = static_cast<CXXBoolLiteralExpr const *>( call->getArgs()[1]->IgnoreParens() );
           DeclRefExpr const * decl = static_cast<DeclRefExpr const *>( un->getSubExpr() );
           VarDecl const * varDecl = static_cast<VarDecl const *>( decl->getDecl() );
           InitListExpr const * list = static_cast<InitListExpr const *>( varDecl->getInit() );
           IntegerLiteral const * integer = static_cast<IntegerLiteral const*>( ((InitListExpr *)list)->getInits()[0] );

           static const bregdb_bitinfo_t bbit_send_to_omx = { *integer->getValue()->getRawData(), BREGDB_BOOL, name.c_str()};

           bregdb_eval_bbit_bool_rv(&bbit_send_to_omx, boolLit->getValue() );
           */
    }

    //replace with actual breg
    static bool getBregValue(boolValue b, CallExpr const * call) 
    {
        if ( str == "bregF" ) {
            return false;
        }
        else if ( str == "bregT" ) {
            return true;
        }
        else if ( str == "bbit_send_to_omx__value" ) {
            //callDataBase(call, str);
            return true;
        }

        return false;
    }


    void report::matchBreg(BoundNodes const & nodes)
    {
        clang::CallExpr const * call = nodes.getNodeAs<clang::CallExpr>("call");
        clang::IfStmt const * ifStmt = nodes.getNodeAs<clang::IfStmt>("ifstmt");

        SourceLocation end = m.getFileLoc(Lexer::getLocForEndOfToken( call->getLocEnd(), 0, m, a.context()->getLangOpts()));
        auto callRange = SourceRange(call->getLocStart(), end);

        if ( a.manager().isMacroBodyExpansion( call->getLocStart() ) ) {
            std::string callName = call->getDirectCallee()->getNameAsString();

            auto r = a.manager().getExpansionRange( call->getLocStart() );
            auto s = a.manager().getSpellingLoc(call->getLocStart());

            SourceRange ra = SourceRange(r.first, r.second.getLocWithOffset(-1));
            std::string bregName = a.get_source(ra, true).str();

            for (auto e : bregs) {
                if ( call->getDirectCallee() != NULL ) {
                    if ( bregName == e.first ) {
                        std::string replacement = getBregValue(e, call) ? "true" : "false";
                        SourceRange range = SourceRange(call->getLocStart(), call->getLocEnd());

                        //std::cout << range.getBegin().getRawEncoding() << " " << range.getEnd().getRawEncoding() << std::endl;
                        //std::cout << callRange.getBegin().getRawEncoding()  << " " << callRange.getEnd().getRawEncoding()  << std::endl;
                        //std::cout << ra.getBegin().getRawEncoding()  << " " << ra.getEnd().getRawEncoding() << std::endl;


                        a.ReplaceText(callRange, replacement);
                        bregLocations.push_back( ifStmt->getLocStart().getRawEncoding() - offset );

                        //offset of if stmt before and after replacing breg calls 
                        offset += ( callRange.getEnd().getRawEncoding() - ra.getBegin().getRawEncoding() ) - replacement.size();
                    }
                }
            }
        }
    }


    void subscribe(Analyser& analyser, Visitor& visitor, PPObserver& observer) {
        //observer.onInclude += report(analyser);
        analyser.onTranslationUnitDone += report(analyser);

    }

}  // close anonymous namespace

// -----------------------------------------------------------------------------

static RegisterCheck register_check(check_name, &subscribe);







