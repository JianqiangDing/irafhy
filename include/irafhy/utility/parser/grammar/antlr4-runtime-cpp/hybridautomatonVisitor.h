
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/hybridautomaton.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "hybridautomatonParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by hybridautomatonParser.
 */
class  hybridautomatonVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by hybridautomatonParser.
   */
    virtual antlrcpp::Any visitHybridautomatonid(hybridautomatonParser::HybridautomatonidContext *context) = 0;

    virtual antlrcpp::Any visitVariables(hybridautomatonParser::VariablesContext *context) = 0;

    virtual antlrcpp::Any visitHybridautomaton(hybridautomatonParser::HybridautomatonContext *context) = 0;

    virtual antlrcpp::Any visitCondition(hybridautomatonParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitPolytope(hybridautomatonParser::PolytopeContext *context) = 0;

    virtual antlrcpp::Any visitHpolytope(hybridautomatonParser::HpolytopeContext *context) = 0;

    virtual antlrcpp::Any visitVpolytope(hybridautomatonParser::VpolytopeContext *context) = 0;

    virtual antlrcpp::Any visitMatrix(hybridautomatonParser::MatrixContext *context) = 0;

    virtual antlrcpp::Any visitVector(hybridautomatonParser::VectorContext *context) = 0;

    virtual antlrcpp::Any visitIntervalhull(hybridautomatonParser::IntervalhullContext *context) = 0;

    virtual antlrcpp::Any visitConstraints(hybridautomatonParser::ConstraintsContext *context) = 0;

    virtual antlrcpp::Any visitConstraint(hybridautomatonParser::ConstraintContext *context) = 0;

    virtual antlrcpp::Any visitSystem(hybridautomatonParser::SystemContext *context) = 0;

    virtual antlrcpp::Any visitFormula(hybridautomatonParser::FormulaContext *context) = 0;

    virtual antlrcpp::Any visitInterval(hybridautomatonParser::IntervalContext *context) = 0;

    virtual antlrcpp::Any visitSqrtConstExp(hybridautomatonParser::SqrtConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcothConstExp(hybridautomatonParser::AcothConstExpContext *context) = 0;

    virtual antlrcpp::Any visitLogConstExp(hybridautomatonParser::LogConstExpContext *context) = 0;

    virtual antlrcpp::Any visitTanhConstExp(hybridautomatonParser::TanhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitPowConstExp(hybridautomatonParser::PowConstExpContext *context) = 0;

    virtual antlrcpp::Any visitPosConstExp(hybridautomatonParser::PosConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAtanhConstExp(hybridautomatonParser::AtanhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrConstExp(hybridautomatonParser::SqrConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExpBra(hybridautomatonParser::ConstExpBraContext *context) = 0;

    virtual antlrcpp::Any visitSinhConstExp(hybridautomatonParser::SinhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAtanConstExp(hybridautomatonParser::AtanConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAsinhConstExp(hybridautomatonParser::AsinhConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExp(hybridautomatonParser::ConstExpContext *context) = 0;

    virtual antlrcpp::Any visitNegConstExp(hybridautomatonParser::NegConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAsinConstExp(hybridautomatonParser::AsinConstExpContext *context) = 0;

    virtual antlrcpp::Any visitTanConstExp(hybridautomatonParser::TanConstExpContext *context) = 0;

    virtual antlrcpp::Any visitNexpConstExp(hybridautomatonParser::NexpConstExpContext *context) = 0;

    virtual antlrcpp::Any visitCosConstExp(hybridautomatonParser::CosConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExpMulDiv(hybridautomatonParser::ConstExpMulDivContext *context) = 0;

    virtual antlrcpp::Any visitExpConstExp(hybridautomatonParser::ExpConstExpContext *context) = 0;

    virtual antlrcpp::Any visitCotConstExp(hybridautomatonParser::CotConstExpContext *context) = 0;

    virtual antlrcpp::Any visitCoshConstExp(hybridautomatonParser::CoshConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcoshConstExp(hybridautomatonParser::AcoshConstExpContext *context) = 0;

    virtual antlrcpp::Any visitSinConstExp(hybridautomatonParser::SinConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcosConstExp(hybridautomatonParser::AcosConstExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExpAddSub(hybridautomatonParser::ConstExpAddSubContext *context) = 0;

    virtual antlrcpp::Any visitLnConstExp(hybridautomatonParser::LnConstExpContext *context) = 0;

    virtual antlrcpp::Any visitAcotConstExp(hybridautomatonParser::AcotConstExpContext *context) = 0;

    virtual antlrcpp::Any visitTanExp(hybridautomatonParser::TanExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrExp(hybridautomatonParser::SqrExpContext *context) = 0;

    virtual antlrcpp::Any visitConstant(hybridautomatonParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitAsinhExp(hybridautomatonParser::AsinhExpContext *context) = 0;

    virtual antlrcpp::Any visitAcosExp(hybridautomatonParser::AcosExpContext *context) = 0;

    virtual antlrcpp::Any visitAcothExp(hybridautomatonParser::AcothExpContext *context) = 0;

    virtual antlrcpp::Any visitAcoshExp(hybridautomatonParser::AcoshExpContext *context) = 0;

    virtual antlrcpp::Any visitCosExp(hybridautomatonParser::CosExpContext *context) = 0;

    virtual antlrcpp::Any visitPowExp(hybridautomatonParser::PowExpContext *context) = 0;

    virtual antlrcpp::Any visitCothExp(hybridautomatonParser::CothExpContext *context) = 0;

    virtual antlrcpp::Any visitPosExp(hybridautomatonParser::PosExpContext *context) = 0;

    virtual antlrcpp::Any visitNegExp(hybridautomatonParser::NegExpContext *context) = 0;

    virtual antlrcpp::Any visitExpBra(hybridautomatonParser::ExpBraContext *context) = 0;

    virtual antlrcpp::Any visitAtanhExp(hybridautomatonParser::AtanhExpContext *context) = 0;

    virtual antlrcpp::Any visitSinExp(hybridautomatonParser::SinExpContext *context) = 0;

    virtual antlrcpp::Any visitLnExp(hybridautomatonParser::LnExpContext *context) = 0;

    virtual antlrcpp::Any visitTanhExp(hybridautomatonParser::TanhExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrtExp(hybridautomatonParser::SqrtExpContext *context) = 0;

    virtual antlrcpp::Any visitExpMulDiv(hybridautomatonParser::ExpMulDivContext *context) = 0;

    virtual antlrcpp::Any visitAtanExp(hybridautomatonParser::AtanExpContext *context) = 0;

    virtual antlrcpp::Any visitAcotExp(hybridautomatonParser::AcotExpContext *context) = 0;

    virtual antlrcpp::Any visitExpExp(hybridautomatonParser::ExpExpContext *context) = 0;

    virtual antlrcpp::Any visitCoshExp(hybridautomatonParser::CoshExpContext *context) = 0;

    virtual antlrcpp::Any visitLogExp(hybridautomatonParser::LogExpContext *context) = 0;

    virtual antlrcpp::Any visitAsinExp(hybridautomatonParser::AsinExpContext *context) = 0;

    virtual antlrcpp::Any visitCotExp(hybridautomatonParser::CotExpContext *context) = 0;

    virtual antlrcpp::Any visitVariable(hybridautomatonParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitSinhExp(hybridautomatonParser::SinhExpContext *context) = 0;

    virtual antlrcpp::Any visitNexpExp(hybridautomatonParser::NexpExpContext *context) = 0;

    virtual antlrcpp::Any visitExpAddSub(hybridautomatonParser::ExpAddSubContext *context) = 0;

    virtual antlrcpp::Any visitModelid(hybridautomatonParser::ModelidContext *context) = 0;

    virtual antlrcpp::Any visitFlows(hybridautomatonParser::FlowsContext *context) = 0;

    virtual antlrcpp::Any visitInvariantcondition(hybridautomatonParser::InvariantconditionContext *context) = 0;

    virtual antlrcpp::Any visitModel(hybridautomatonParser::ModelContext *context) = 0;

    virtual antlrcpp::Any visitLocations(hybridautomatonParser::LocationsContext *context) = 0;

    virtual antlrcpp::Any visitDirection(hybridautomatonParser::DirectionContext *context) = 0;

    virtual antlrcpp::Any visitGuardcondition(hybridautomatonParser::GuardconditionContext *context) = 0;

    virtual antlrcpp::Any visitUpdatefunction(hybridautomatonParser::UpdatefunctionContext *context) = 0;

    virtual antlrcpp::Any visitResetmap(hybridautomatonParser::ResetmapContext *context) = 0;

    virtual antlrcpp::Any visitJump(hybridautomatonParser::JumpContext *context) = 0;

    virtual antlrcpp::Any visitTransitions(hybridautomatonParser::TransitionsContext *context) = 0;


};

