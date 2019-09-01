
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/transitions.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "transitionsListener.h"


/**
 * This class provides an empty implementation of transitionsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  transitionsBaseListener : public transitionsListener {
public:

  virtual void enterDirection(transitionsParser::DirectionContext * /*ctx*/) override { }
  virtual void exitDirection(transitionsParser::DirectionContext * /*ctx*/) override { }

  virtual void enterGuardcondition(transitionsParser::GuardconditionContext * /*ctx*/) override { }
  virtual void exitGuardcondition(transitionsParser::GuardconditionContext * /*ctx*/) override { }

  virtual void enterUpdatefunction(transitionsParser::UpdatefunctionContext * /*ctx*/) override { }
  virtual void exitUpdatefunction(transitionsParser::UpdatefunctionContext * /*ctx*/) override { }

  virtual void enterResetmap(transitionsParser::ResetmapContext * /*ctx*/) override { }
  virtual void exitResetmap(transitionsParser::ResetmapContext * /*ctx*/) override { }

  virtual void enterJump(transitionsParser::JumpContext * /*ctx*/) override { }
  virtual void exitJump(transitionsParser::JumpContext * /*ctx*/) override { }

  virtual void enterTransitions(transitionsParser::TransitionsContext * /*ctx*/) override { }
  virtual void exitTransitions(transitionsParser::TransitionsContext * /*ctx*/) override { }

  virtual void enterCondition(transitionsParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(transitionsParser::ConditionContext * /*ctx*/) override { }

  virtual void enterPolytope(transitionsParser::PolytopeContext * /*ctx*/) override { }
  virtual void exitPolytope(transitionsParser::PolytopeContext * /*ctx*/) override { }

  virtual void enterHpolytope(transitionsParser::HpolytopeContext * /*ctx*/) override { }
  virtual void exitHpolytope(transitionsParser::HpolytopeContext * /*ctx*/) override { }

  virtual void enterVpolytope(transitionsParser::VpolytopeContext * /*ctx*/) override { }
  virtual void exitVpolytope(transitionsParser::VpolytopeContext * /*ctx*/) override { }

  virtual void enterMatrix(transitionsParser::MatrixContext * /*ctx*/) override { }
  virtual void exitMatrix(transitionsParser::MatrixContext * /*ctx*/) override { }

  virtual void enterVector(transitionsParser::VectorContext * /*ctx*/) override { }
  virtual void exitVector(transitionsParser::VectorContext * /*ctx*/) override { }

  virtual void enterIntervalhull(transitionsParser::IntervalhullContext * /*ctx*/) override { }
  virtual void exitIntervalhull(transitionsParser::IntervalhullContext * /*ctx*/) override { }

  virtual void enterConstraints(transitionsParser::ConstraintsContext * /*ctx*/) override { }
  virtual void exitConstraints(transitionsParser::ConstraintsContext * /*ctx*/) override { }

  virtual void enterConstraint(transitionsParser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(transitionsParser::ConstraintContext * /*ctx*/) override { }

  virtual void enterSystem(transitionsParser::SystemContext * /*ctx*/) override { }
  virtual void exitSystem(transitionsParser::SystemContext * /*ctx*/) override { }

  virtual void enterFormula(transitionsParser::FormulaContext * /*ctx*/) override { }
  virtual void exitFormula(transitionsParser::FormulaContext * /*ctx*/) override { }

  virtual void enterInterval(transitionsParser::IntervalContext * /*ctx*/) override { }
  virtual void exitInterval(transitionsParser::IntervalContext * /*ctx*/) override { }

  virtual void enterTanExp(transitionsParser::TanExpContext * /*ctx*/) override { }
  virtual void exitTanExp(transitionsParser::TanExpContext * /*ctx*/) override { }

  virtual void enterSqrExp(transitionsParser::SqrExpContext * /*ctx*/) override { }
  virtual void exitSqrExp(transitionsParser::SqrExpContext * /*ctx*/) override { }

  virtual void enterConstant(transitionsParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(transitionsParser::ConstantContext * /*ctx*/) override { }

  virtual void enterAsinhExp(transitionsParser::AsinhExpContext * /*ctx*/) override { }
  virtual void exitAsinhExp(transitionsParser::AsinhExpContext * /*ctx*/) override { }

  virtual void enterAcosExp(transitionsParser::AcosExpContext * /*ctx*/) override { }
  virtual void exitAcosExp(transitionsParser::AcosExpContext * /*ctx*/) override { }

  virtual void enterAcothExp(transitionsParser::AcothExpContext * /*ctx*/) override { }
  virtual void exitAcothExp(transitionsParser::AcothExpContext * /*ctx*/) override { }

  virtual void enterAcoshExp(transitionsParser::AcoshExpContext * /*ctx*/) override { }
  virtual void exitAcoshExp(transitionsParser::AcoshExpContext * /*ctx*/) override { }

  virtual void enterCosExp(transitionsParser::CosExpContext * /*ctx*/) override { }
  virtual void exitCosExp(transitionsParser::CosExpContext * /*ctx*/) override { }

  virtual void enterPowExp(transitionsParser::PowExpContext * /*ctx*/) override { }
  virtual void exitPowExp(transitionsParser::PowExpContext * /*ctx*/) override { }

  virtual void enterCothExp(transitionsParser::CothExpContext * /*ctx*/) override { }
  virtual void exitCothExp(transitionsParser::CothExpContext * /*ctx*/) override { }

  virtual void enterPosExp(transitionsParser::PosExpContext * /*ctx*/) override { }
  virtual void exitPosExp(transitionsParser::PosExpContext * /*ctx*/) override { }

  virtual void enterNegExp(transitionsParser::NegExpContext * /*ctx*/) override { }
  virtual void exitNegExp(transitionsParser::NegExpContext * /*ctx*/) override { }

  virtual void enterExpBra(transitionsParser::ExpBraContext * /*ctx*/) override { }
  virtual void exitExpBra(transitionsParser::ExpBraContext * /*ctx*/) override { }

  virtual void enterAtanhExp(transitionsParser::AtanhExpContext * /*ctx*/) override { }
  virtual void exitAtanhExp(transitionsParser::AtanhExpContext * /*ctx*/) override { }

  virtual void enterSinExp(transitionsParser::SinExpContext * /*ctx*/) override { }
  virtual void exitSinExp(transitionsParser::SinExpContext * /*ctx*/) override { }

  virtual void enterLnExp(transitionsParser::LnExpContext * /*ctx*/) override { }
  virtual void exitLnExp(transitionsParser::LnExpContext * /*ctx*/) override { }

  virtual void enterTanhExp(transitionsParser::TanhExpContext * /*ctx*/) override { }
  virtual void exitTanhExp(transitionsParser::TanhExpContext * /*ctx*/) override { }

  virtual void enterSqrtExp(transitionsParser::SqrtExpContext * /*ctx*/) override { }
  virtual void exitSqrtExp(transitionsParser::SqrtExpContext * /*ctx*/) override { }

  virtual void enterExpMulDiv(transitionsParser::ExpMulDivContext * /*ctx*/) override { }
  virtual void exitExpMulDiv(transitionsParser::ExpMulDivContext * /*ctx*/) override { }

  virtual void enterAtanExp(transitionsParser::AtanExpContext * /*ctx*/) override { }
  virtual void exitAtanExp(transitionsParser::AtanExpContext * /*ctx*/) override { }

  virtual void enterAcotExp(transitionsParser::AcotExpContext * /*ctx*/) override { }
  virtual void exitAcotExp(transitionsParser::AcotExpContext * /*ctx*/) override { }

  virtual void enterExpExp(transitionsParser::ExpExpContext * /*ctx*/) override { }
  virtual void exitExpExp(transitionsParser::ExpExpContext * /*ctx*/) override { }

  virtual void enterCoshExp(transitionsParser::CoshExpContext * /*ctx*/) override { }
  virtual void exitCoshExp(transitionsParser::CoshExpContext * /*ctx*/) override { }

  virtual void enterLogExp(transitionsParser::LogExpContext * /*ctx*/) override { }
  virtual void exitLogExp(transitionsParser::LogExpContext * /*ctx*/) override { }

  virtual void enterAsinExp(transitionsParser::AsinExpContext * /*ctx*/) override { }
  virtual void exitAsinExp(transitionsParser::AsinExpContext * /*ctx*/) override { }

  virtual void enterCotExp(transitionsParser::CotExpContext * /*ctx*/) override { }
  virtual void exitCotExp(transitionsParser::CotExpContext * /*ctx*/) override { }

  virtual void enterVariable(transitionsParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(transitionsParser::VariableContext * /*ctx*/) override { }

  virtual void enterSinhExp(transitionsParser::SinhExpContext * /*ctx*/) override { }
  virtual void exitSinhExp(transitionsParser::SinhExpContext * /*ctx*/) override { }

  virtual void enterNexpExp(transitionsParser::NexpExpContext * /*ctx*/) override { }
  virtual void exitNexpExp(transitionsParser::NexpExpContext * /*ctx*/) override { }

  virtual void enterExpAddSub(transitionsParser::ExpAddSubContext * /*ctx*/) override { }
  virtual void exitExpAddSub(transitionsParser::ExpAddSubContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

