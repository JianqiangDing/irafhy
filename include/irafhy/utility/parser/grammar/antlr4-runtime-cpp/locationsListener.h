
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/locations.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "locationsParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by locationsParser.
 */
class  locationsListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterModelid(locationsParser::ModelidContext *ctx) = 0;
  virtual void exitModelid(locationsParser::ModelidContext *ctx) = 0;

  virtual void enterFlows(locationsParser::FlowsContext *ctx) = 0;
  virtual void exitFlows(locationsParser::FlowsContext *ctx) = 0;

  virtual void enterInvariantcondition(locationsParser::InvariantconditionContext *ctx) = 0;
  virtual void exitInvariantcondition(locationsParser::InvariantconditionContext *ctx) = 0;

  virtual void enterModel(locationsParser::ModelContext *ctx) = 0;
  virtual void exitModel(locationsParser::ModelContext *ctx) = 0;

  virtual void enterLocations(locationsParser::LocationsContext *ctx) = 0;
  virtual void exitLocations(locationsParser::LocationsContext *ctx) = 0;

  virtual void enterCondition(locationsParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(locationsParser::ConditionContext *ctx) = 0;

  virtual void enterPolytope(locationsParser::PolytopeContext *ctx) = 0;
  virtual void exitPolytope(locationsParser::PolytopeContext *ctx) = 0;

  virtual void enterHpolytope(locationsParser::HpolytopeContext *ctx) = 0;
  virtual void exitHpolytope(locationsParser::HpolytopeContext *ctx) = 0;

  virtual void enterVpolytope(locationsParser::VpolytopeContext *ctx) = 0;
  virtual void exitVpolytope(locationsParser::VpolytopeContext *ctx) = 0;

  virtual void enterMatrix(locationsParser::MatrixContext *ctx) = 0;
  virtual void exitMatrix(locationsParser::MatrixContext *ctx) = 0;

  virtual void enterVector(locationsParser::VectorContext *ctx) = 0;
  virtual void exitVector(locationsParser::VectorContext *ctx) = 0;

  virtual void enterIntervalhull(locationsParser::IntervalhullContext *ctx) = 0;
  virtual void exitIntervalhull(locationsParser::IntervalhullContext *ctx) = 0;

  virtual void enterConstraints(locationsParser::ConstraintsContext *ctx) = 0;
  virtual void exitConstraints(locationsParser::ConstraintsContext *ctx) = 0;

  virtual void enterConstraint(locationsParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(locationsParser::ConstraintContext *ctx) = 0;

  virtual void enterSystem(locationsParser::SystemContext *ctx) = 0;
  virtual void exitSystem(locationsParser::SystemContext *ctx) = 0;

  virtual void enterFormula(locationsParser::FormulaContext *ctx) = 0;
  virtual void exitFormula(locationsParser::FormulaContext *ctx) = 0;

  virtual void enterInterval(locationsParser::IntervalContext *ctx) = 0;
  virtual void exitInterval(locationsParser::IntervalContext *ctx) = 0;

  virtual void enterTanExp(locationsParser::TanExpContext *ctx) = 0;
  virtual void exitTanExp(locationsParser::TanExpContext *ctx) = 0;

  virtual void enterSqrExp(locationsParser::SqrExpContext *ctx) = 0;
  virtual void exitSqrExp(locationsParser::SqrExpContext *ctx) = 0;

  virtual void enterConstant(locationsParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(locationsParser::ConstantContext *ctx) = 0;

  virtual void enterAsinhExp(locationsParser::AsinhExpContext *ctx) = 0;
  virtual void exitAsinhExp(locationsParser::AsinhExpContext *ctx) = 0;

  virtual void enterAcosExp(locationsParser::AcosExpContext *ctx) = 0;
  virtual void exitAcosExp(locationsParser::AcosExpContext *ctx) = 0;

  virtual void enterAcothExp(locationsParser::AcothExpContext *ctx) = 0;
  virtual void exitAcothExp(locationsParser::AcothExpContext *ctx) = 0;

  virtual void enterAcoshExp(locationsParser::AcoshExpContext *ctx) = 0;
  virtual void exitAcoshExp(locationsParser::AcoshExpContext *ctx) = 0;

  virtual void enterCosExp(locationsParser::CosExpContext *ctx) = 0;
  virtual void exitCosExp(locationsParser::CosExpContext *ctx) = 0;

  virtual void enterPowExp(locationsParser::PowExpContext *ctx) = 0;
  virtual void exitPowExp(locationsParser::PowExpContext *ctx) = 0;

  virtual void enterCothExp(locationsParser::CothExpContext *ctx) = 0;
  virtual void exitCothExp(locationsParser::CothExpContext *ctx) = 0;

  virtual void enterPosExp(locationsParser::PosExpContext *ctx) = 0;
  virtual void exitPosExp(locationsParser::PosExpContext *ctx) = 0;

  virtual void enterNegExp(locationsParser::NegExpContext *ctx) = 0;
  virtual void exitNegExp(locationsParser::NegExpContext *ctx) = 0;

  virtual void enterExpBra(locationsParser::ExpBraContext *ctx) = 0;
  virtual void exitExpBra(locationsParser::ExpBraContext *ctx) = 0;

  virtual void enterAtanhExp(locationsParser::AtanhExpContext *ctx) = 0;
  virtual void exitAtanhExp(locationsParser::AtanhExpContext *ctx) = 0;

  virtual void enterSinExp(locationsParser::SinExpContext *ctx) = 0;
  virtual void exitSinExp(locationsParser::SinExpContext *ctx) = 0;

  virtual void enterLnExp(locationsParser::LnExpContext *ctx) = 0;
  virtual void exitLnExp(locationsParser::LnExpContext *ctx) = 0;

  virtual void enterTanhExp(locationsParser::TanhExpContext *ctx) = 0;
  virtual void exitTanhExp(locationsParser::TanhExpContext *ctx) = 0;

  virtual void enterSqrtExp(locationsParser::SqrtExpContext *ctx) = 0;
  virtual void exitSqrtExp(locationsParser::SqrtExpContext *ctx) = 0;

  virtual void enterExpMulDiv(locationsParser::ExpMulDivContext *ctx) = 0;
  virtual void exitExpMulDiv(locationsParser::ExpMulDivContext *ctx) = 0;

  virtual void enterAtanExp(locationsParser::AtanExpContext *ctx) = 0;
  virtual void exitAtanExp(locationsParser::AtanExpContext *ctx) = 0;

  virtual void enterAcotExp(locationsParser::AcotExpContext *ctx) = 0;
  virtual void exitAcotExp(locationsParser::AcotExpContext *ctx) = 0;

  virtual void enterExpExp(locationsParser::ExpExpContext *ctx) = 0;
  virtual void exitExpExp(locationsParser::ExpExpContext *ctx) = 0;

  virtual void enterCoshExp(locationsParser::CoshExpContext *ctx) = 0;
  virtual void exitCoshExp(locationsParser::CoshExpContext *ctx) = 0;

  virtual void enterLogExp(locationsParser::LogExpContext *ctx) = 0;
  virtual void exitLogExp(locationsParser::LogExpContext *ctx) = 0;

  virtual void enterAsinExp(locationsParser::AsinExpContext *ctx) = 0;
  virtual void exitAsinExp(locationsParser::AsinExpContext *ctx) = 0;

  virtual void enterCotExp(locationsParser::CotExpContext *ctx) = 0;
  virtual void exitCotExp(locationsParser::CotExpContext *ctx) = 0;

  virtual void enterVariable(locationsParser::VariableContext *ctx) = 0;
  virtual void exitVariable(locationsParser::VariableContext *ctx) = 0;

  virtual void enterSinhExp(locationsParser::SinhExpContext *ctx) = 0;
  virtual void exitSinhExp(locationsParser::SinhExpContext *ctx) = 0;

  virtual void enterNexpExp(locationsParser::NexpExpContext *ctx) = 0;
  virtual void exitNexpExp(locationsParser::NexpExpContext *ctx) = 0;

  virtual void enterExpAddSub(locationsParser::ExpAddSubContext *ctx) = 0;
  virtual void exitExpAddSub(locationsParser::ExpAddSubContext *ctx) = 0;


};

