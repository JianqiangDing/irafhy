
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/transitions.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "transitionsParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by transitionsParser.
 */
class  transitionsListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterDirection(transitionsParser::DirectionContext *ctx) = 0;
  virtual void exitDirection(transitionsParser::DirectionContext *ctx) = 0;

  virtual void enterGuardcondition(transitionsParser::GuardconditionContext *ctx) = 0;
  virtual void exitGuardcondition(transitionsParser::GuardconditionContext *ctx) = 0;

  virtual void enterUpdatefunction(transitionsParser::UpdatefunctionContext *ctx) = 0;
  virtual void exitUpdatefunction(transitionsParser::UpdatefunctionContext *ctx) = 0;

  virtual void enterResetmap(transitionsParser::ResetmapContext *ctx) = 0;
  virtual void exitResetmap(transitionsParser::ResetmapContext *ctx) = 0;

  virtual void enterJump(transitionsParser::JumpContext *ctx) = 0;
  virtual void exitJump(transitionsParser::JumpContext *ctx) = 0;

  virtual void enterTransitions(transitionsParser::TransitionsContext *ctx) = 0;
  virtual void exitTransitions(transitionsParser::TransitionsContext *ctx) = 0;

  virtual void enterCondition(transitionsParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(transitionsParser::ConditionContext *ctx) = 0;

  virtual void enterPolytope(transitionsParser::PolytopeContext *ctx) = 0;
  virtual void exitPolytope(transitionsParser::PolytopeContext *ctx) = 0;

  virtual void enterHpolytope(transitionsParser::HpolytopeContext *ctx) = 0;
  virtual void exitHpolytope(transitionsParser::HpolytopeContext *ctx) = 0;

  virtual void enterVpolytope(transitionsParser::VpolytopeContext *ctx) = 0;
  virtual void exitVpolytope(transitionsParser::VpolytopeContext *ctx) = 0;

  virtual void enterMatrix(transitionsParser::MatrixContext *ctx) = 0;
  virtual void exitMatrix(transitionsParser::MatrixContext *ctx) = 0;

  virtual void enterVector(transitionsParser::VectorContext *ctx) = 0;
  virtual void exitVector(transitionsParser::VectorContext *ctx) = 0;

  virtual void enterIntervalhull(transitionsParser::IntervalhullContext *ctx) = 0;
  virtual void exitIntervalhull(transitionsParser::IntervalhullContext *ctx) = 0;

  virtual void enterConstraints(transitionsParser::ConstraintsContext *ctx) = 0;
  virtual void exitConstraints(transitionsParser::ConstraintsContext *ctx) = 0;

  virtual void enterConstraint(transitionsParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(transitionsParser::ConstraintContext *ctx) = 0;

  virtual void enterSystem(transitionsParser::SystemContext *ctx) = 0;
  virtual void exitSystem(transitionsParser::SystemContext *ctx) = 0;

  virtual void enterFormula(transitionsParser::FormulaContext *ctx) = 0;
  virtual void exitFormula(transitionsParser::FormulaContext *ctx) = 0;

  virtual void enterInterval(transitionsParser::IntervalContext *ctx) = 0;
  virtual void exitInterval(transitionsParser::IntervalContext *ctx) = 0;

  virtual void enterSqrtConstExp(transitionsParser::SqrtConstExpContext *ctx) = 0;
  virtual void exitSqrtConstExp(transitionsParser::SqrtConstExpContext *ctx) = 0;

  virtual void enterAcothConstExp(transitionsParser::AcothConstExpContext *ctx) = 0;
  virtual void exitAcothConstExp(transitionsParser::AcothConstExpContext *ctx) = 0;

  virtual void enterLogConstExp(transitionsParser::LogConstExpContext *ctx) = 0;
  virtual void exitLogConstExp(transitionsParser::LogConstExpContext *ctx) = 0;

  virtual void enterTanhConstExp(transitionsParser::TanhConstExpContext *ctx) = 0;
  virtual void exitTanhConstExp(transitionsParser::TanhConstExpContext *ctx) = 0;

  virtual void enterPowConstExp(transitionsParser::PowConstExpContext *ctx) = 0;
  virtual void exitPowConstExp(transitionsParser::PowConstExpContext *ctx) = 0;

  virtual void enterPosConstExp(transitionsParser::PosConstExpContext *ctx) = 0;
  virtual void exitPosConstExp(transitionsParser::PosConstExpContext *ctx) = 0;

  virtual void enterAtanhConstExp(transitionsParser::AtanhConstExpContext *ctx) = 0;
  virtual void exitAtanhConstExp(transitionsParser::AtanhConstExpContext *ctx) = 0;

  virtual void enterSqrConstExp(transitionsParser::SqrConstExpContext *ctx) = 0;
  virtual void exitSqrConstExp(transitionsParser::SqrConstExpContext *ctx) = 0;

  virtual void enterConstExpBra(transitionsParser::ConstExpBraContext *ctx) = 0;
  virtual void exitConstExpBra(transitionsParser::ConstExpBraContext *ctx) = 0;

  virtual void enterSinhConstExp(transitionsParser::SinhConstExpContext *ctx) = 0;
  virtual void exitSinhConstExp(transitionsParser::SinhConstExpContext *ctx) = 0;

  virtual void enterAtanConstExp(transitionsParser::AtanConstExpContext *ctx) = 0;
  virtual void exitAtanConstExp(transitionsParser::AtanConstExpContext *ctx) = 0;

  virtual void enterAsinhConstExp(transitionsParser::AsinhConstExpContext *ctx) = 0;
  virtual void exitAsinhConstExp(transitionsParser::AsinhConstExpContext *ctx) = 0;

  virtual void enterConstExp(transitionsParser::ConstExpContext *ctx) = 0;
  virtual void exitConstExp(transitionsParser::ConstExpContext *ctx) = 0;

  virtual void enterNegConstExp(transitionsParser::NegConstExpContext *ctx) = 0;
  virtual void exitNegConstExp(transitionsParser::NegConstExpContext *ctx) = 0;

  virtual void enterAsinConstExp(transitionsParser::AsinConstExpContext *ctx) = 0;
  virtual void exitAsinConstExp(transitionsParser::AsinConstExpContext *ctx) = 0;

  virtual void enterTanConstExp(transitionsParser::TanConstExpContext *ctx) = 0;
  virtual void exitTanConstExp(transitionsParser::TanConstExpContext *ctx) = 0;

  virtual void enterNexpConstExp(transitionsParser::NexpConstExpContext *ctx) = 0;
  virtual void exitNexpConstExp(transitionsParser::NexpConstExpContext *ctx) = 0;

  virtual void enterCosConstExp(transitionsParser::CosConstExpContext *ctx) = 0;
  virtual void exitCosConstExp(transitionsParser::CosConstExpContext *ctx) = 0;

  virtual void enterConstExpMulDiv(transitionsParser::ConstExpMulDivContext *ctx) = 0;
  virtual void exitConstExpMulDiv(transitionsParser::ConstExpMulDivContext *ctx) = 0;

  virtual void enterExpConstExp(transitionsParser::ExpConstExpContext *ctx) = 0;
  virtual void exitExpConstExp(transitionsParser::ExpConstExpContext *ctx) = 0;

  virtual void enterCotConstExp(transitionsParser::CotConstExpContext *ctx) = 0;
  virtual void exitCotConstExp(transitionsParser::CotConstExpContext *ctx) = 0;

  virtual void enterCoshConstExp(transitionsParser::CoshConstExpContext *ctx) = 0;
  virtual void exitCoshConstExp(transitionsParser::CoshConstExpContext *ctx) = 0;

  virtual void enterAcoshConstExp(transitionsParser::AcoshConstExpContext *ctx) = 0;
  virtual void exitAcoshConstExp(transitionsParser::AcoshConstExpContext *ctx) = 0;

  virtual void enterSinConstExp(transitionsParser::SinConstExpContext *ctx) = 0;
  virtual void exitSinConstExp(transitionsParser::SinConstExpContext *ctx) = 0;

  virtual void enterAcosConstExp(transitionsParser::AcosConstExpContext *ctx) = 0;
  virtual void exitAcosConstExp(transitionsParser::AcosConstExpContext *ctx) = 0;

  virtual void enterConstExpAddSub(transitionsParser::ConstExpAddSubContext *ctx) = 0;
  virtual void exitConstExpAddSub(transitionsParser::ConstExpAddSubContext *ctx) = 0;

  virtual void enterLnConstExp(transitionsParser::LnConstExpContext *ctx) = 0;
  virtual void exitLnConstExp(transitionsParser::LnConstExpContext *ctx) = 0;

  virtual void enterAcotConstExp(transitionsParser::AcotConstExpContext *ctx) = 0;
  virtual void exitAcotConstExp(transitionsParser::AcotConstExpContext *ctx) = 0;

  virtual void enterTanExp(transitionsParser::TanExpContext *ctx) = 0;
  virtual void exitTanExp(transitionsParser::TanExpContext *ctx) = 0;

  virtual void enterSqrExp(transitionsParser::SqrExpContext *ctx) = 0;
  virtual void exitSqrExp(transitionsParser::SqrExpContext *ctx) = 0;

  virtual void enterConstant(transitionsParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(transitionsParser::ConstantContext *ctx) = 0;

  virtual void enterAsinhExp(transitionsParser::AsinhExpContext *ctx) = 0;
  virtual void exitAsinhExp(transitionsParser::AsinhExpContext *ctx) = 0;

  virtual void enterAcosExp(transitionsParser::AcosExpContext *ctx) = 0;
  virtual void exitAcosExp(transitionsParser::AcosExpContext *ctx) = 0;

  virtual void enterAcothExp(transitionsParser::AcothExpContext *ctx) = 0;
  virtual void exitAcothExp(transitionsParser::AcothExpContext *ctx) = 0;

  virtual void enterAcoshExp(transitionsParser::AcoshExpContext *ctx) = 0;
  virtual void exitAcoshExp(transitionsParser::AcoshExpContext *ctx) = 0;

  virtual void enterCosExp(transitionsParser::CosExpContext *ctx) = 0;
  virtual void exitCosExp(transitionsParser::CosExpContext *ctx) = 0;

  virtual void enterPowExp(transitionsParser::PowExpContext *ctx) = 0;
  virtual void exitPowExp(transitionsParser::PowExpContext *ctx) = 0;

  virtual void enterCothExp(transitionsParser::CothExpContext *ctx) = 0;
  virtual void exitCothExp(transitionsParser::CothExpContext *ctx) = 0;

  virtual void enterPosExp(transitionsParser::PosExpContext *ctx) = 0;
  virtual void exitPosExp(transitionsParser::PosExpContext *ctx) = 0;

  virtual void enterNegExp(transitionsParser::NegExpContext *ctx) = 0;
  virtual void exitNegExp(transitionsParser::NegExpContext *ctx) = 0;

  virtual void enterExpBra(transitionsParser::ExpBraContext *ctx) = 0;
  virtual void exitExpBra(transitionsParser::ExpBraContext *ctx) = 0;

  virtual void enterAtanhExp(transitionsParser::AtanhExpContext *ctx) = 0;
  virtual void exitAtanhExp(transitionsParser::AtanhExpContext *ctx) = 0;

  virtual void enterSinExp(transitionsParser::SinExpContext *ctx) = 0;
  virtual void exitSinExp(transitionsParser::SinExpContext *ctx) = 0;

  virtual void enterLnExp(transitionsParser::LnExpContext *ctx) = 0;
  virtual void exitLnExp(transitionsParser::LnExpContext *ctx) = 0;

  virtual void enterTanhExp(transitionsParser::TanhExpContext *ctx) = 0;
  virtual void exitTanhExp(transitionsParser::TanhExpContext *ctx) = 0;

  virtual void enterSqrtExp(transitionsParser::SqrtExpContext *ctx) = 0;
  virtual void exitSqrtExp(transitionsParser::SqrtExpContext *ctx) = 0;

  virtual void enterExpMulDiv(transitionsParser::ExpMulDivContext *ctx) = 0;
  virtual void exitExpMulDiv(transitionsParser::ExpMulDivContext *ctx) = 0;

  virtual void enterAtanExp(transitionsParser::AtanExpContext *ctx) = 0;
  virtual void exitAtanExp(transitionsParser::AtanExpContext *ctx) = 0;

  virtual void enterAcotExp(transitionsParser::AcotExpContext *ctx) = 0;
  virtual void exitAcotExp(transitionsParser::AcotExpContext *ctx) = 0;

  virtual void enterExpExp(transitionsParser::ExpExpContext *ctx) = 0;
  virtual void exitExpExp(transitionsParser::ExpExpContext *ctx) = 0;

  virtual void enterCoshExp(transitionsParser::CoshExpContext *ctx) = 0;
  virtual void exitCoshExp(transitionsParser::CoshExpContext *ctx) = 0;

  virtual void enterLogExp(transitionsParser::LogExpContext *ctx) = 0;
  virtual void exitLogExp(transitionsParser::LogExpContext *ctx) = 0;

  virtual void enterAsinExp(transitionsParser::AsinExpContext *ctx) = 0;
  virtual void exitAsinExp(transitionsParser::AsinExpContext *ctx) = 0;

  virtual void enterCotExp(transitionsParser::CotExpContext *ctx) = 0;
  virtual void exitCotExp(transitionsParser::CotExpContext *ctx) = 0;

  virtual void enterVariable(transitionsParser::VariableContext *ctx) = 0;
  virtual void exitVariable(transitionsParser::VariableContext *ctx) = 0;

  virtual void enterSinhExp(transitionsParser::SinhExpContext *ctx) = 0;
  virtual void exitSinhExp(transitionsParser::SinhExpContext *ctx) = 0;

  virtual void enterNexpExp(transitionsParser::NexpExpContext *ctx) = 0;
  virtual void exitNexpExp(transitionsParser::NexpExpContext *ctx) = 0;

  virtual void enterExpAddSub(transitionsParser::ExpAddSubContext *ctx) = 0;
  virtual void exitExpAddSub(transitionsParser::ExpAddSubContext *ctx) = 0;


};

