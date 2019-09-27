
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/transitions.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "transitionsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by transitionsParser.
 */
class  transitionsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by transitionsParser.
   */
    virtual antlrcpp::Any visitDirection(transitionsParser::DirectionContext *context) = 0;

    virtual antlrcpp::Any visitGuardcondition(transitionsParser::GuardconditionContext *context) = 0;

    virtual antlrcpp::Any visitUpdatefunction(transitionsParser::UpdatefunctionContext *context) = 0;

    virtual antlrcpp::Any visitResetmap(transitionsParser::ResetmapContext *context) = 0;

    virtual antlrcpp::Any visitJump(transitionsParser::JumpContext *context) = 0;

    virtual antlrcpp::Any visitTransitions(transitionsParser::TransitionsContext *context) = 0;

    virtual antlrcpp::Any visitCondition(transitionsParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitPolytope(transitionsParser::PolytopeContext *context) = 0;

    virtual antlrcpp::Any visitHpolytope(transitionsParser::HpolytopeContext *context) = 0;

    virtual antlrcpp::Any visitVpolytope(transitionsParser::VpolytopeContext *context) = 0;

    virtual antlrcpp::Any visitMatrix(transitionsParser::MatrixContext *context) = 0;

    virtual antlrcpp::Any visitVector(transitionsParser::VectorContext *context) = 0;

    virtual antlrcpp::Any visitIntervalhull(transitionsParser::IntervalhullContext *context) = 0;

    virtual antlrcpp::Any visitConstraints(transitionsParser::ConstraintsContext *context) = 0;

    virtual antlrcpp::Any visitConstraint(transitionsParser::ConstraintContext *context) = 0;

    virtual antlrcpp::Any visitSystem(transitionsParser::SystemContext *context) = 0;

    virtual antlrcpp::Any visitFormula(transitionsParser::FormulaContext *context) = 0;

    virtual antlrcpp::Any visitInterval(transitionsParser::IntervalContext *context) = 0;

    virtual antlrcpp::Any visitSqrtConstExp(transitionsParser::SqrtConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcothConstExp(transitionsParser::AcothConstExpContext *context) = 0;

    virtual antlrcpp::Any visitLogConstExp(transitionsParser::LogConstExpContext *context) = 0;

    virtual antlrcpp::Any visitTanhConstExp(transitionsParser::TanhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitPowConstExp(transitionsParser::PowConstExpContext *context) = 0;

    virtual antlrcpp::Any visitPosConstExp(transitionsParser::PosConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAtanhConstExp(transitionsParser::AtanhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrConstExp(transitionsParser::SqrConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExpBra(transitionsParser::ConstExpBraContext *context) = 0;

    virtual antlrcpp::Any visitSinhConstExp(transitionsParser::SinhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAtanConstExp(transitionsParser::AtanConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAsinhConstExp(transitionsParser::AsinhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExp(transitionsParser::ConstExpContext *context) = 0;

    virtual antlrcpp::Any visitNegConstExp(transitionsParser::NegConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAsinConstExp(transitionsParser::AsinConstExpContext *context) = 0;

    virtual antlrcpp::Any visitTanConstExp(transitionsParser::TanConstExpContext *context) = 0;

    virtual antlrcpp::Any visitNexpConstExp(transitionsParser::NexpConstExpContext *context) = 0;

    virtual antlrcpp::Any visitCosConstExp(transitionsParser::CosConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExpMulDiv(transitionsParser::ConstExpMulDivContext *context) = 0;

    virtual antlrcpp::Any visitExpConstExp(transitionsParser::ExpConstExpContext *context) = 0;

    virtual antlrcpp::Any visitCotConstExp(transitionsParser::CotConstExpContext *context) = 0;

    virtual antlrcpp::Any visitCoshConstExp(transitionsParser::CoshConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcoshConstExp(transitionsParser::AcoshConstExpContext *context) = 0;

    virtual antlrcpp::Any visitSinConstExp(transitionsParser::SinConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcosConstExp(transitionsParser::AcosConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExpAddSub(transitionsParser::ConstExpAddSubContext *context) = 0;

    virtual antlrcpp::Any visitLnConstExp(transitionsParser::LnConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcotConstExp(transitionsParser::AcotConstExpContext *context) = 0;

    virtual antlrcpp::Any visitTanExp(transitionsParser::TanExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrExp(transitionsParser::SqrExpContext *context) = 0;

    virtual antlrcpp::Any visitConstant(transitionsParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitAsinhExp(transitionsParser::AsinhExpContext *context) = 0;

    virtual antlrcpp::Any visitAcosExp(transitionsParser::AcosExpContext *context) = 0;

    virtual antlrcpp::Any visitAcothExp(transitionsParser::AcothExpContext *context) = 0;

    virtual antlrcpp::Any visitAcoshExp(transitionsParser::AcoshExpContext *context) = 0;

    virtual antlrcpp::Any visitCosExp(transitionsParser::CosExpContext *context) = 0;

    virtual antlrcpp::Any visitPowExp(transitionsParser::PowExpContext *context) = 0;

    virtual antlrcpp::Any visitCothExp(transitionsParser::CothExpContext *context) = 0;

    virtual antlrcpp::Any visitPosExp(transitionsParser::PosExpContext *context) = 0;

    virtual antlrcpp::Any visitNegExp(transitionsParser::NegExpContext *context) = 0;

    virtual antlrcpp::Any visitExpBra(transitionsParser::ExpBraContext *context) = 0;

    virtual antlrcpp::Any visitAtanhExp(transitionsParser::AtanhExpContext *context) = 0;

    virtual antlrcpp::Any visitSinExp(transitionsParser::SinExpContext *context) = 0;

    virtual antlrcpp::Any visitLnExp(transitionsParser::LnExpContext *context) = 0;

    virtual antlrcpp::Any visitTanhExp(transitionsParser::TanhExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrtExp(transitionsParser::SqrtExpContext *context) = 0;

    virtual antlrcpp::Any visitExpMulDiv(transitionsParser::ExpMulDivContext *context) = 0;

    virtual antlrcpp::Any visitAtanExp(transitionsParser::AtanExpContext *context) = 0;

    virtual antlrcpp::Any visitAcotExp(transitionsParser::AcotExpContext *context) = 0;

    virtual antlrcpp::Any visitExpExp(transitionsParser::ExpExpContext *context) = 0;

    virtual antlrcpp::Any visitCoshExp(transitionsParser::CoshExpContext *context) = 0;

    virtual antlrcpp::Any visitLogExp(transitionsParser::LogExpContext *context) = 0;

    virtual antlrcpp::Any visitAsinExp(transitionsParser::AsinExpContext *context) = 0;

    virtual antlrcpp::Any visitCotExp(transitionsParser::CotExpContext *context) = 0;

    virtual antlrcpp::Any visitVariable(transitionsParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitSinhExp(transitionsParser::SinhExpContext *context) = 0;

    virtual antlrcpp::Any visitNexpExp(transitionsParser::NexpExpContext *context) = 0;

    virtual antlrcpp::Any visitExpAddSub(transitionsParser::ExpAddSubContext *context) = 0;


};

