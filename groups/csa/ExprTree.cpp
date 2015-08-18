#include "ExprTree.h"
#include "breg_matchers.h"

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


using namespace csabase;
using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;


ExprTree::ExprTree() :
    context(nullptr),
    lhs(nullptr),
    rhs(nullptr),
    clangNode(nullptr),
    op(),
    removable(false),
    evaluated(false),
    sideEffects(false),
    binary(false),
    ignoreSideEffects(false)
{
}


ExprTree::ExprTree(std::unique_ptr<ExprTree> lhs, std::unique_ptr<ExprTree> rhs, bool removable, bool ignoreSideEffects, 
                                                                                                 Expr const * clangNode,
                                                                                                 ASTContext * context, 
                                                                                                 SourceManager const * manager) :
    context(context),
    manager(manager),
    lhs(std::move(lhs)),
    rhs(std::move(rhs)),
    clangNode(clangNode),
    op(),
    removable(removable),
    evaluated(false),
    sideEffects(false),
    binary(false),
    ignoreSideEffects(ignoreSideEffects)
{
}



void ExprTree::pruneTree()
{
    Expr const * expr = this->clangNode->IgnoreParens()->IgnoreCasts();
   
    bool expressionValue = true;
    bool evaluated = expr->EvaluateAsBooleanCondition(expressionValue, *context);

    BinaryOperator const * binExpr = llvm::dyn_cast<BinaryOperator>( expr ); 
    UnaryOperator const * unExpr = llvm::dyn_cast<UnaryOperator>( expr );
    CallExpr const * call = llvm::dyn_cast<CallExpr>( expr );
    CXXBoolLiteralExpr const * boolLiteral = llvm::dyn_cast<CXXBoolLiteralExpr>( expr );
        
    if ( evaluated ) {
        this->evaluated = true;

        bool hasPossibleSideEffects = this->clangNode->HasSideEffects( *context );

        if ( hasPossibleSideEffects == false && this->sideEffects == false ) {
            this->removable = true;
            return;
        }
        else {
            this->sideEffects = true;
        }
    }

    if ( binExpr != nullptr ) {
       
        Expr const * lhs = binExpr->getLHS();
        Expr const * rhs = binExpr->getRHS();
        
        std::unique_ptr<ExprTree> nodeLHS( new ExprTree(nullptr, nullptr, false, this->ignoreSideEffects, lhs, context, manager) );
        std::unique_ptr<ExprTree> nodeRHS( new ExprTree(nullptr, nullptr, false, this->ignoreSideEffects, rhs, context, manager) );
        
        nodeLHS->sideEffects = this->sideEffects;
        nodeRHS->sideEffects = this->sideEffects;

        nodeLHS->pruneTree();
        nodeRHS->pruneTree();
 
        this->lhs = std::move(nodeLHS);
        this->rhs = std::move(nodeRHS);
        this->binary = true;
        this->op = binExpr->getOpcodeStr().str();
        
        this->sideEffects = this->lhs->sideEffects || this->rhs->sideEffects;
        this->removable = !this->sideEffects && this->evaluated;
    }
    else if ( unExpr != nullptr ) {
        Expr const * sub = unExpr->getSubExpr();

        std::unique_ptr<ExprTree> nodeSub( new ExprTree(nullptr, nullptr, false, this->ignoreSideEffects, sub, context, manager) );

        nodeSub->sideEffects = this->sideEffects;

        nodeSub->pruneTree();
        
        this->lhs = std::move(nodeSub);
        this->binary = false;
        this->op = UnaryOperator::getOpcodeStr(unExpr->getOpcode()).str();

        this->sideEffects = this->lhs->sideEffects;
        this->removable = !this->sideEffects && this->evaluated;
    }
    else if ( call != nullptr ) {
        FunctionDecl const * f = llvm::dyn_cast<FunctionDecl>( call->getCalleeDecl() );

        if ( f != nullptr ) {
            
            if ( this->ignoreSideEffects == false ) {  
                std::pair<bool, std::string> sideEffects = sideEffectAnalysis(f);
                this->sideEffects = sideEffects.first;
                call->getLocStart().dump(*manager);
                std::cout << ": ";

                if ( this->sideEffects == true ) {
                    std::cout << "unable to remove function: '" << call->getDirectCallee()->getNameAsString() << "'" << ", ";
                    std::cout << sideEffects.second << std::endl;
                }
                else {
                    std::cout << "removing call to '" << call->getDirectCallee()->getNameAsString() << "'" << std::endl;
                } 
            }
            else {
              std::cout << "removing call to '" << call->getDirectCallee()->getNameAsString() << "'" << std::endl;
            }
        }
    }
    else if ( boolLiteral != nullptr ) {
        this->sideEffects = false;
    }

}


std::pair<bool, std::string> ExprTree::sideEffectAnalysis(FunctionDecl const * f)
{
    
    if ( f->hasBody() ) {
        CompoundStmt const * body = llvm::dyn_cast<CompoundStmt>( f->getBody() );
       
        if ( body->size() > 15 ) {
            return std::pair<bool, std::string>( true, "function is over 15 lines long" );
        } 

        for (auto iter = f->param_begin(); iter != f->param_end(); iter++) {
            ParmVarDecl const * varDecl = *iter;

            std::pair<Decl const *, bool> structure = Matchers::getNodeInExpr<Decl>( context, varDecl, Matchers::ptrFieldDeclMatcher );
            std::pair<Decl const *, bool> ptrRef = Matchers::getNodeInExpr<Decl>( context, varDecl, valueDecl( hasType( isNonConstPtr())) );

            if ( structure.second == true ) {
                 return std::pair<bool, std::string>( true, "passing non-const pointer or reference in class or struct" );
            }
            else if ( ptrRef.second == true ) {
                return std::pair<bool, std::string>( true, "passing non-const pointer or reference" );
            }
        }

   
        for (auto iter = body->body_begin(); iter != body->body_end(); iter++) {
            Stmt const * s = *iter;

            std::pair<Expr const *, bool> inc = Matchers::getNodeInExpr<Expr>( context, s, Matchers::incOrDecMatcher ); 
            std::pair<Expr const *, bool> varDecl = Matchers::getNodeInExpr<Expr>( context, s, Matchers::varDeclMatcher ); 
            std::pair<Expr const *, bool> assign = Matchers::getNodeInExpr<Expr>( context, s, Matchers::assignMatcher ); 
            std::pair<Expr const *, bool> callExpr = Matchers::getNodeInExpr<Expr>( context, s, Matchers::callMatcher ); 

            if ( inc.second != false ) {
                if ( inc.first != nullptr ) {
                    return std::pair<bool, std::string>( true, "incrementing or decrementing instance variable" );
                }
                else {
                    return std::pair<bool, std::string>( true, "incrementing or decrementing non-local variable" );
                }
            }
            else if ( varDecl.second != false ) {
                return std::pair<bool, std::string>( true, "declaring non-const pointer or reference to non-local variable" );
            }
            else if ( assign.second != false ) {
                if ( assign.first != nullptr ) {
                    return std::pair<bool, std::string>( true, "assigning to instance variable" );
                }
                else {
                    return std::pair<bool, std::string>( true, "assigning to non-local variable" );
                }
            }
            else if ( callExpr.second != false ) {
                if ( callExpr.first != nullptr ) {
                    CallExpr const * c = llvm::dyn_cast<CallExpr>( callExpr.first );
                    FunctionDecl const * func = llvm::dyn_cast<FunctionDecl>( c->getCalleeDecl() );
                    if ( func != nullptr ) {
                        return sideEffectAnalysis( func );
                    }
                }
            }
        }
    }

    return std::pair<bool, std::string>(false, "");
}


