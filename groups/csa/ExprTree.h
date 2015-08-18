#ifndef EXPRTREE
#define EXPRTREE

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

#include <iostream>


using namespace csabase;
using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;


//represents a condition in an if stmt
struct ExprTree {
    ASTContext * context;
    SourceManager const * manager; 

    std::unique_ptr<ExprTree> lhs;
    std::unique_ptr<ExprTree> rhs;
    Expr const * clangNode;

    std::string op;

    bool removable;
    bool evaluated;
    bool sideEffects;
    bool binary;
    bool ignoreSideEffects;

    ExprTree();
    ExprTree(std::unique_ptr<ExprTree> lhs, std::unique_ptr<ExprTree> rhs, bool removable, bool ignoreSideEffects, 
                                                                                           Expr const * clangNode, 
                                                                                           ASTContext * context, 
                                                                                           SourceManager const * manager);

    void pruneTree();

    std::pair<bool, std::string> sideEffectAnalysis(FunctionDecl const * f);

};



#endif
