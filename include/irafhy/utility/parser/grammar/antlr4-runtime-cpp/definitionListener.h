
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/definition.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "definitionParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by definitionParser.
 */
class  definitionListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCondition(definitionParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(definitionParser::ConditionContext *ctx) = 0;

  virtual void enterPolytope(definitionParser::PolytopeContext *ctx) = 0;
  virtual void exitPolytope(definitionParser::PolytopeContext *ctx) = 0;

  virtual void enterHpolytope(definitionParser::HpolytopeContext *ctx) = 0;
  virtual void exitHpolytope(definitionParser::HpolytopeContext *ctx) = 0;

  virtual void enterVpolytope(definitionParser::VpolytopeContext *ctx) = 0;
  virtual void exitVpolytope(definitionParser::VpolytopeContext *ctx) = 0;

  virtual void enterMatrix(definitionParser::MatrixContext *ctx) = 0;
  virtual void exitMatrix(definitionParser::MatrixContext *ctx) = 0;

  virtual void enterVector(definitionParser::VectorContext *ctx) = 0;
  virtual void exitVector(definitionParser::VectorContext *ctx) = 0;

  virtual void enterIntervalhull(definitionParser::IntervalhullContext *ctx) = 0;
  virtual void exitIntervalhull(definitionParser::IntervalhullContext *ctx) = 0;

  virtual void enterConstraints(definitionParser::ConstraintsContext *ctx) = 0;
  virtual void exitConstraints(definitionParser::ConstraintsContext *ctx) = 0;

  virtual void enterConstraint(definitionParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(definitionParser::ConstraintContext *ctx) = 0;

  virtual void enterSystem(definitionParser::SystemContext *ctx) = 0;
  virtual void exitSystem(definitionParser::SystemContext *ctx) = 0;

  virtual void enterFormula(definitionParser::FormulaContext *ctx) = 0;
  virtual void exitFormula(definitionParser::FormulaContext *ctx) = 0;

  virtual void enterInterval(definitionParser::IntervalContext *ctx) = 0;
  virtual void exitInterval(definitionParser::IntervalContext *ctx) = 0;

  virtual void enterTanExp(definitionParser::TanExpContext *ctx) = 0;
  virtual void exitTanExp(definitionParser::TanExpContext *ctx) = 0;

  virtual void enterSqrExp(definitionParser::SqrExpContext *ctx) = 0;
  virtual void exitSqrExp(definitionParser::SqrExpContext *ctx) = 0;

  virtual void enterConstant(definitionParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(definitionParser::ConstantContext *ctx) = 0;

  virtual void enterAsinhExp(definitionParser::AsinhExpContext *ctx) = 0;
  virtual void exitAsinhExp(definitionParser::AsinhExpContext *ctx) = 0;

  virtual void enterAcosExp(definitionParser::AcosExpContext *ctx) = 0;
  virtual void exitAcosExp(definitionParser::AcosExpContext *ctx) = 0;

  virtual void enterAcothExp(definitionParser::AcothExpContext *ctx) = 0;
  virtual void exitAcothExp(definitionParser::AcothExpContext *ctx) = 0;

  virtual void enterAcoshExp(definitionParser::AcoshExpContext *ctx) = 0;
  virtual void exitAcoshExp(definitionParser::AcoshExpContext *ctx) = 0;

  virtual void enterCosExp(definitionParser::CosExpContext *ctx) = 0;
  virtual void exitCosExp(definitionParser::CosExpContext *ctx) = 0;

  virtual void enterPowExp(definitionParser::PowExpContext *ctx) = 0;
  virtual void exitPowExp(definitionParser::PowExpContext *ctx) = 0;

  virtual void enterCothExp(definitionParser::CothExpContext *ctx) = 0;
  virtual void exitCothExp(definitionParser::CothExpContext *ctx) = 0;

  virtual void enterPosExp(definitionParser::PosExpContext *ctx) = 0;
  virtual void exitPosExp(definitionParser::PosExpContext *ctx) = 0;

  virtual void enterNegExp(definitionParser::NegExpContext *ctx) = 0;
  virtual void exitNegExp(definitionParser::NegExpContext *ctx) = 0;

  virtual void enterExpBra(definitionParser::ExpBraContext *ctx) = 0;
  virtual void exitExpBra(definitionParser::ExpBraContext *ctx) = 0;

  virtual void enterAtanhExp(definitionParser::AtanhExpContext *ctx) = 0;
  virtual void exitAtanhExp(definitionParser::AtanhExpContext *ctx) = 0;

  virtual void enterSinExp(definitionParser::SinExpContext *ctx) = 0;
  virtual void exitSinExp(definitionParser::SinExpContext *ctx) = 0;

  virtual void enterLnExp(definitionParser::LnExpContext *ctx) = 0;
  virtual void exitLnExp(definitionParser::LnExpContext *ctx) = 0;

  virtual void enterTanhExp(definitionParser::TanhExpContext *ctx) = 0;
  virtual void exitTanhExp(definitionParser::TanhExpContext *ctx) = 0;

  virtual void enterSqrtExp(definitionParser::SqrtExpContext *ctx) = 0;
  virtual void exitSqrtExp(definitionParser::SqrtExpContext *ctx) = 0;

  virtual void enterExpMulDiv(definitionParser::ExpMulDivContext *ctx) = 0;
  virtual void exitExpMulDiv(definitionParser::ExpMulDivContext *ctx) = 0;

  virtual void enterAtanExp(definitionParser::AtanExpContext *ctx) = 0;
  virtual void exitAtanExp(definitionParser::AtanExpContext *ctx) = 0;

  virtual void enterAcotExp(definitionParser::AcotExpContext *ctx) = 0;
  virtual void exitAcotExp(definitionParser::AcotExpContext *ctx) = 0;

  virtual void enterExpExp(definitionParser::ExpExpContext *ctx) = 0;
  virtual void exitExpExp(definitionParser::ExpExpContext *ctx) = 0;

  virtual void enterCoshExp(definitionParser::CoshExpContext *ctx) = 0;
  virtual void exitCoshExp(definitionParser::CoshExpContext *ctx) = 0;

  virtual void enterLogExp(definitionParser::LogExpContext *ctx) = 0;
  virtual void exitLogExp(definitionParser::LogExpContext *ctx) = 0;

  virtual void enterAsinExp(definitionParser::AsinExpContext *ctx) = 0;
  virtual void exitAsinExp(definitionParser::AsinExpContext *ctx) = 0;

  virtual void enterCotExp(definitionParser::CotExpContext *ctx) = 0;
  virtual void exitCotExp(definitionParser::CotExpContext *ctx) = 0;

  virtual void enterVariable(definitionParser::VariableContext *ctx) = 0;
  virtual void exitVariable(definitionParser::VariableContext *ctx) = 0;

  virtual void enterSinhExp(definitionParser::SinhExpContext *ctx) = 0;
  virtual void exitSinhExp(definitionParser::SinhExpContext *ctx) = 0;

  virtual void enterNexpExp(definitionParser::NexpExpContext *ctx) = 0;
  virtual void exitNexpExp(definitionParser::NexpExpContext *ctx) = 0;

  virtual void enterExpAddSub(definitionParser::ExpAddSubContext *ctx) = 0;
  virtual void exitExpAddSub(definitionParser::ExpAddSubContext *ctx) = 0;


};

