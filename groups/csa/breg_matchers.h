#ifndef BREG_MATCHERS
#define BREG_MATCHERS

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


#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <utility>
#include <iostream>

using namespace csabase;
using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;

namespace {

    static template<typename T> T const * report::getNodeInExpr(clang::ASTContext const * context; Stmt const * e, const internal::DynTypedMatcher &NodeMatch )
    {
        const internal::DynTypedMatcher& matcher = NodeMatch;

        MatchFinder finder;

        OnMatch<> m([&](const BoundNodes &nodes) { 
                T const * n = nodes.getNodeAs<T>("node");
                node = n;
                });


        //csabase::OnMatch<report, &report::matchDeclRefExpr> m(this);
        finder.addDynamicMatcher(matcher, &m);
        finder.match(*e, context );

        if ( node == nullptr ) {
            return nullptr;
        }

        return llvm::dyn_cast<T>( node );
    }




}

#endif
