
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/hybridautomaton.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "hybridautomatonParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by hybridautomatonParser.
 */
class  hybridautomatonListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterHybridautomatonid(hybridautomatonParser::HybridautomatonidContext *ctx) = 0;
  virtual void exitHybridautomatonid(hybridautomatonParser::HybridautomatonidContext *ctx) = 0;

  virtual void enterVariables(hybridautomatonParser::VariablesContext *ctx) = 0;
  virtual void exitVariables(hybridautomatonParser::VariablesContext *ctx) = 0;

  virtual void enterHybridautomaton(hybridautomatonParser::HybridautomatonContext *ctx) = 0;
  virtual void exitHybridautomaton(hybridautomatonParser::HybridautomatonContext *ctx) = 0;

  virtual void enterCondition(hybridautomatonParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(hybridautomatonParser::ConditionContext *ctx) = 0;

  virtual void enterPolytope(hybridautomatonParser::PolytopeContext *ctx) = 0;
  virtual void exitPolytope(hybridautomatonParser::PolytopeContext *ctx) = 0;

  virtual void enterHpolytope(hybridautomatonParser::HpolytopeContext *ctx) = 0;
  virtual void exitHpolytope(hybridautomatonParser::HpolytopeContext *ctx) = 0;

  virtual void enterVpolytope(hybridautomatonParser::VpolytopeContext *ctx) = 0;
  virtual void exitVpolytope(hybridautomatonParser::VpolytopeContext *ctx) = 0;

  virtual void enterMatrix(hybridautomatonParser::MatrixContext *ctx) = 0;
  virtual void exitMatrix(hybridautomatonParser::MatrixContext *ctx) = 0;

  virtual void enterVector(hybridautomatonParser::VectorContext *ctx) = 0;
  virtual void exitVector(hybridautomatonParser::VectorContext *ctx) = 0;

  virtual void enterIntervalhull(hybridautomatonParser::IntervalhullContext *ctx) = 0;
  virtual void exitIntervalhull(hybridautomatonParser::IntervalhullContext *ctx) = 0;

  virtual void enterConstraints(hybridautomatonParser::ConstraintsContext *ctx) = 0;
  virtual void exitConstraints(hybridautomatonParser::ConstraintsContext *ctx) = 0;

  virtual void enterConstraint(hybridautomatonParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(hybridautomatonParser::ConstraintContext *ctx) = 0;

  virtual void enterSystem(hybridautomatonParser::SystemContext *ctx) = 0;
  virtual void exitSystem(hybridautomatonParser::SystemContext *ctx) = 0;

  virtual void enterFormula(hybridautomatonParser::FormulaContext *ctx) = 0;
  virtual void exitFormula(hybridautomatonParser::FormulaContext *ctx) = 0;

  virtual void enterInterval(hybridautomatonParser::IntervalContext *ctx) = 0;
  virtual void exitInterval(hybridautomatonParser::IntervalContext *ctx) = 0;

  virtual void enterSqrtConstExp(hybridautomatonParser::SqrtConstExpContext *ctx) = 0;
  virtual void exitSqrtConstExp(hybridautomatonParser::SqrtConstExpContext *ctx) = 0;

  virtual void enterAcothConstExp(hybridautomatonParser::AcothConstExpContext *ctx) = 0;
  virtual void exitAcothConstExp(hybridautomatonParser::AcothConstExpContext *ctx) = 0;

  virtual void enterLogConstExp(hybridautomatonParser::LogConstExpContext *ctx) = 0;
  virtual void exitLogConstExp(hybridautomatonParser::LogConstExpContext *ctx) = 0;

  virtual void enterTanhConstExp(hybridautomatonParser::TanhConstExpContext *ctx) = 0;
  virtual void exitTanhConstExp(hybridautomatonParser::TanhConstExpContext *ctx) = 0;

  virtual void enterPowConstExp(hybridautomatonParser::PowConstExpContext *ctx) = 0;
  virtual void exitPowConstExp(hybridautomatonParser::PowConstExpContext *ctx) = 0;

  virtual void enterPosConstExp(hybridautomatonParser::PosConstExpContext *ctx) = 0;
  virtual void exitPosConstExp(hybridautomatonParser::PosConstExpContext *ctx) = 0;

  virtual void enterAtanhConstExp(hybridautomatonParser::AtanhConstExpContext *ctx) = 0;
  virtual void exitAtanhConstExp(hybridautomatonParser::AtanhConstExpContext *ctx) = 0;

  virtual void enterSqrConstExp(hybridautomatonParser::SqrConstExpContext *ctx) = 0;
  virtual void exitSqrConstExp(hybridautomatonParser::SqrConstExpContext *ctx) = 0;

  virtual void enterConstExpBra(hybridautomatonParser::ConstExpBraContext *ctx) = 0;
  virtual void exitConstExpBra(hybridautomatonParser::ConstExpBraContext *ctx) = 0;

  virtual void enterSinhConstExp(hybridautomatonParser::SinhConstExpContext *ctx) = 0;
  virtual void exitSinhConstExp(hybridautomatonParser::SinhConstExpContext *ctx) = 0;

  virtual void enterAtanConstExp(hybridautomatonParser::AtanConstExpContext *ctx) = 0;
  virtual void exitAtanConstExp(hybridautomatonParser::AtanConstExpContext *ctx) = 0;

  virtual void enterAsinhConstExp(hybridautomatonParser::AsinhConstExpContext *ctx) = 0;
  virtual void exitAsinhConstExp(hybridautomatonParser::AsinhConstExpContext *ctx) = 0;

  virtual void enterConstExp(hybridautomatonParser::ConstExpContext *ctx) = 0;
  virtual void exitConstExp(hybridautomatonParser::ConstExpContext *ctx) = 0;

  virtual void enterNegConstExp(hybridautomatonParser::NegConstExpContext *ctx) = 0;
  virtual void exitNegConstExp(hybridautomatonParser::NegConstExpContext *ctx) = 0;

  virtual void enterAsinConstExp(hybridautomatonParser::AsinConstExpContext *ctx) = 0;
  virtual void exitAsinConstExp(hybridautomatonParser::AsinConstExpContext *ctx) = 0;

  virtual void enterTanConstExp(hybridautomatonParser::TanConstExpContext *ctx) = 0;
  virtual void exitTanConstExp(hybridautomatonParser::TanConstExpContext *ctx) = 0;

  virtual void enterNexpConstExp(hybridautomatonParser::NexpConstExpContext *ctx) = 0;
  virtual void exitNexpConstExp(hybridautomatonParser::NexpConstExpContext *ctx) = 0;

  virtual void enterCosConstExp(hybridautomatonParser::CosConstExpContext *ctx) = 0;
  virtual void exitCosConstExp(hybridautomatonParser::CosConstExpContext *ctx) = 0;

  virtual void enterConstExpMulDiv(hybridautomatonParser::ConstExpMulDivContext *ctx) = 0;
  virtual void exitConstExpMulDiv(hybridautomatonParser::ConstExpMulDivContext *ctx) = 0;

  virtual void enterExpConstExp(hybridautomatonParser::ExpConstExpContext *ctx) = 0;
  virtual void exitExpConstExp(hybridautomatonParser::ExpConstExpContext *ctx) = 0;

  virtual void enterCotConstExp(hybridautomatonParser::CotConstExpContext *ctx) = 0;
  virtual void exitCotConstExp(hybridautomatonParser::CotConstExpContext *ctx) = 0;

  virtual void enterCoshConstExp(hybridautomatonParser::CoshConstExpContext *ctx) = 0;
  virtual void exitCoshConstExp(hybridautomatonParser::CoshConstExpContext *ctx) = 0;

  virtual void enterAcoshConstExp(hybridautomatonParser::AcoshConstExpContext *ctx) = 0;
  virtual void exitAcoshConstExp(hybridautomatonParser::AcoshConstExpContext *ctx) = 0;

  virtual void enterSinConstExp(hybridautomatonParser::SinConstExpContext *ctx) = 0;
  virtual void exitSinConstExp(hybridautomatonParser::SinConstExpContext *ctx) = 0;

  virtual void enterAcosConstExp(hybridautomatonParser::AcosConstExpContext *ctx) = 0;
  virtual void exitAcosConstExp(hybridautomatonParser::AcosConstExpContext *ctx) = 0;

  virtual void enterConstExpAddSub(hybridautomatonParser::ConstExpAddSubContext *ctx) = 0;
  virtual void exitConstExpAddSub(hybridautomatonParser::ConstExpAddSubContext *ctx) = 0;

  virtual void enterLnConstExp(hybridautomatonParser::LnConstExpContext *ctx) = 0;
  virtual void exitLnConstExp(hybridautomatonParser::LnConstExpContext *ctx) = 0;

  virtual void enterAcotConstExp(hybridautomatonParser::AcotConstExpContext *ctx) = 0;
  virtual void exitAcotConstExp(hybridautomatonParser::AcotConstExpContext *ctx) = 0;

  virtual void enterTanExp(hybridautomatonParser::TanExpContext *ctx) = 0;
  virtual void exitTanExp(hybridautomatonParser::TanExpContext *ctx) = 0;

  virtual void enterSqrExp(hybridautomatonParser::SqrExpContext *ctx) = 0;
  virtual void exitSqrExp(hybridautomatonParser::SqrExpContext *ctx) = 0;

  virtual void enterConstant(hybridautomatonParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(hybridautomatonParser::ConstantContext *ctx) = 0;

  virtual void enterAsinhExp(hybridautomatonParser::AsinhExpContext *ctx) = 0;
  virtual void exitAsinhExp(hybridautomatonParser::AsinhExpContext *ctx) = 0;

  virtual void enterAcosExp(hybridautomatonParser::AcosExpContext *ctx) = 0;
  virtual void exitAcosExp(hybridautomatonParser::AcosExpContext *ctx) = 0;

  virtual void enterAcothExp(hybridautomatonParser::AcothExpContext *ctx) = 0;
  virtual void exitAcothExp(hybridautomatonParser::AcothExpContext *ctx) = 0;

  virtual void enterAcoshExp(hybridautomatonParser::AcoshExpContext *ctx) = 0;
  virtual void exitAcoshExp(hybridautomatonParser::AcoshExpContext *ctx) = 0;

  virtual void enterCosExp(hybridautomatonParser::CosExpContext *ctx) = 0;
  virtual void exitCosExp(hybridautomatonParser::CosExpContext *ctx) = 0;

  virtual void enterPowExp(hybridautomatonParser::PowExpContext *ctx) = 0;
  virtual void exitPowExp(hybridautomatonParser::PowExpContext *ctx) = 0;

  virtual void enterCothExp(hybridautomatonParser::CothExpContext *ctx) = 0;
  virtual void exitCothExp(hybridautomatonParser::CothExpContext *ctx) = 0;

  virtual void enterPosExp(hybridautomatonParser::PosExpContext *ctx) = 0;
  virtual void exitPosExp(hybridautomatonParser::PosExpContext *ctx) = 0;

  virtual void enterNegExp(hybridautomatonParser::NegExpContext *ctx) = 0;
  virtual void exitNegExp(hybridautomatonParser::NegExpContext *ctx) = 0;

  virtual void enterExpBra(hybridautomatonParser::ExpBraContext *ctx) = 0;
  virtual void exitExpBra(hybridautomatonParser::ExpBraContext *ctx) = 0;

  virtual void enterAtanhExp(hybridautomatonParser::AtanhExpContext *ctx) = 0;
  virtual void exitAtanhExp(hybridautomatonParser::AtanhExpContext *ctx) = 0;

  virtual void enterSinExp(hybridautomatonParser::SinExpContext *ctx) = 0;
  virtual void exitSinExp(hybridautomatonParser::SinExpContext *ctx) = 0;

  virtual void enterLnExp(hybridautomatonParser::LnExpContext *ctx) = 0;
  virtual void exitLnExp(hybridautomatonParser::LnExpContext *ctx) = 0;

  virtual void enterTanhExp(hybridautomatonParser::TanhExpContext *ctx) = 0;
  virtual void exitTanhExp(hybridautomatonParser::TanhExpContext *ctx) = 0;

  virtual void enterSqrtExp(hybridautomatonParser::SqrtExpContext *ctx) = 0;
  virtual void exitSqrtExp(hybridautomatonParser::SqrtExpContext *ctx) = 0;

  virtual void enterExpMulDiv(hybridautomatonParser::ExpMulDivContext *ctx) = 0;
  virtual void exitExpMulDiv(hybridautomatonParser::ExpMulDivContext *ctx) = 0;

  virtual void enterAtanExp(hybridautomatonParser::AtanExpContext *ctx) = 0;
  virtual void exitAtanExp(hybridautomatonParser::AtanExpContext *ctx) = 0;

  virtual void enterAcotExp(hybridautomatonParser::AcotExpContext *ctx) = 0;
  virtual void exitAcotExp(hybridautomatonParser::AcotExpContext *ctx) = 0;

  virtual void enterExpExp(hybridautomatonParser::ExpExpContext *ctx) = 0;
  virtual void exitExpExp(hybridautomatonParser::ExpExpContext *ctx) = 0;

  virtual void enterCoshExp(hybridautomatonParser::CoshExpContext *ctx) = 0;
  virtual void exitCoshExp(hybridautomatonParser::CoshExpContext *ctx) = 0;

  virtual void enterLogExp(hybridautomatonParser::LogExpContext *ctx) = 0;
  virtual void exitLogExp(hybridautomatonParser::LogExpContext *ctx) = 0;

  virtual void enterAsinExp(hybridautomatonParser::AsinExpContext *ctx) = 0;
  virtual void exitAsinExp(hybridautomatonParser::AsinExpContext *ctx) = 0;

  virtual void enterCotExp(hybridautomatonParser::CotExpContext *ctx) = 0;
  virtual void exitCotExp(hybridautomatonParser::CotExpContext *ctx) = 0;

  virtual void enterVariable(hybridautomatonParser::VariableContext *ctx) = 0;
  virtual void exitVariable(hybridautomatonParser::VariableContext *ctx) = 0;

  virtual void enterSinhExp(hybridautomatonParser::SinhExpContext *ctx) = 0;
  virtual void exitSinhExp(hybridautomatonParser::SinhExpContext *ctx) = 0;

  virtual void enterNexpExp(hybridautomatonParser::NexpExpContext *ctx) = 0;
  virtual void exitNexpExp(hybridautomatonParser::NexpExpContext *ctx) = 0;

  virtual void enterExpAddSub(hybridautomatonParser::ExpAddSubContext *ctx) = 0;
  virtual void exitExpAddSub(hybridautomatonParser::ExpAddSubContext *ctx) = 0;

  virtual void enterModelid(hybridautomatonParser::ModelidContext *ctx) = 0;
  virtual void exitModelid(hybridautomatonParser::ModelidContext *ctx) = 0;

  virtual void enterFlows(hybridautomatonParser::FlowsContext *ctx) = 0;
  virtual void exitFlows(hybridautomatonParser::FlowsContext *ctx) = 0;

  virtual void enterInvariantcondition(hybridautomatonParser::InvariantconditionContext *ctx) = 0;
  virtual void exitInvariantcondition(hybridautomatonParser::InvariantconditionContext *ctx) = 0;

  virtual void enterModel(hybridautomatonParser::ModelContext *ctx) = 0;
  virtual void exitModel(hybridautomatonParser::ModelContext *ctx) = 0;

  virtual void enterLocations(hybridautomatonParser::LocationsContext *ctx) = 0;
  virtual void exitLocations(hybridautomatonParser::LocationsContext *ctx) = 0;

  virtual void enterDirection(hybridautomatonParser::DirectionContext *ctx) = 0;
  virtual void exitDirection(hybridautomatonParser::DirectionContext *ctx) = 0;

  virtual void enterGuardcondition(hybridautomatonParser::GuardconditionContext *ctx) = 0;
  virtual void exitGuardcondition(hybridautomatonParser::GuardconditionContext *ctx) = 0;

  virtual void enterUpdatefunction(hybridautomatonParser::UpdatefunctionContext *ctx) = 0;
  virtual void exitUpdatefunction(hybridautomatonParser::UpdatefunctionContext *ctx) = 0;

  virtual void enterResetmap(hybridautomatonParser::ResetmapContext *ctx) = 0;
  virtual void exitResetmap(hybridautomatonParser::ResetmapContext *ctx) = 0;

  virtual void enterJump(hybridautomatonParser::JumpContext *ctx) = 0;
  virtual void exitJump(hybridautomatonParser::JumpContext *ctx) = 0;

  virtual void enterTransitions(hybridautomatonParser::TransitionsContext *ctx) = 0;
  virtual void exitTransitions(hybridautomatonParser::TransitionsContext *ctx) = 0;


};

