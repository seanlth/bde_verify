#include "ExprTree.h"

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
    binary(false)
{
}


ExprTree::ExprTree(std::unique_ptr<ExprTree> lhs, std::unique_ptr<ExprTree> rhs, bool removable, Expr const * clangNode,
                                                                                                 ASTContext const * context, 
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
    binary(false)
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
        
        std::unique_ptr<ExprTree> nodeLHS( new ExprTree(nullptr, nullptr, false, lhs, context, manager) );
        std::unique_ptr<ExprTree> nodeRHS( new ExprTree(nullptr, nullptr, false, rhs, context, manager) );
        
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

        std::unique_ptr<ExprTree> nodeSub( new ExprTree(nullptr, nullptr, false, sub, context, manager) );

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
    }
    else if ( boolLiteral != nullptr ) {
        this->sideEffects = false;
    }

}


std::pair<bool, std::string> ExprTree::sideEffectAnalysis(FunctionDecl const * f)
{
    /*
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
*/
    return std::pair<bool, std::string>( false, "" );
}

