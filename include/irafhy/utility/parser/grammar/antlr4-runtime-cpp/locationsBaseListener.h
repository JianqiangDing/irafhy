
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/locations.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "locationsListener.h"


/**
 * This class provides an empty implementation of locationsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  locationsBaseListener : public locationsListener {
public:

  virtual void enterModelid(locationsParser::ModelidContext * /*ctx*/) override { }
  virtual void exitModelid(locationsParser::ModelidContext * /*ctx*/) override { }

  virtual void enterFlows(locationsParser::FlowsContext * /*ctx*/) override { }
  virtual void exitFlows(locationsParser::FlowsContext * /*ctx*/) override { }

  virtual void enterInvariantcondition(locationsParser::InvariantconditionContext * /*ctx*/) override { }
  virtual void exitInvariantcondition(locationsParser::InvariantconditionContext * /*ctx*/) override { }

  virtual void enterModel(locationsParser::ModelContext * /*ctx*/) override { }
  virtual void exitModel(locationsParser::ModelContext * /*ctx*/) override { }

  virtual void enterLocations(locationsParser::LocationsContext * /*ctx*/) override { }
  virtual void exitLocations(locationsParser::LocationsContext * /*ctx*/) override { }

  virtual void enterCondition(locationsParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(locationsParser::ConditionContext * /*ctx*/) override { }

  virtual void enterPolytope(locationsParser::PolytopeContext * /*ctx*/) override { }
  virtual void exitPolytope(locationsParser::PolytopeContext * /*ctx*/) override { }

  virtual void enterHpolytope(locationsParser::HpolytopeContext * /*ctx*/) override { }
  virtual void exitHpolytope(locationsParser::HpolytopeContext * /*ctx*/) override { }

  virtual void enterVpolytope(locationsParser::VpolytopeContext * /*ctx*/) override { }
  virtual void exitVpolytope(locationsParser::VpolytopeContext * /*ctx*/) override { }

  virtual void enterMatrix(locationsParser::MatrixContext * /*ctx*/) override { }
  virtual void exitMatrix(locationsParser::MatrixContext * /*ctx*/) override { }

  virtual void enterVector(locationsParser::VectorContext * /*ctx*/) override { }
  virtual void exitVector(locationsParser::VectorContext * /*ctx*/) override { }

  virtual void enterIntervalhull(locationsParser::IntervalhullContext * /*ctx*/) override { }
  virtual void exitIntervalhull(locationsParser::IntervalhullContext * /*ctx*/) override { }

  virtual void enterConstraints(locationsParser::ConstraintsContext * /*ctx*/) override { }
  virtual void exitConstraints(locationsParser::ConstraintsContext * /*ctx*/) override { }

  virtual void enterConstraint(locationsParser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(locationsParser::ConstraintContext * /*ctx*/) override { }

  virtual void enterSystem(locationsParser::SystemContext * /*ctx*/) override { }
  virtual void exitSystem(locationsParser::SystemContext * /*ctx*/) override { }

  virtual void enterFormula(locationsParser::FormulaContext * /*ctx*/) override { }
  virtual void exitFormula(locationsParser::FormulaContext * /*ctx*/) override { }

  virtual void enterInterval(locationsParser::IntervalContext * /*ctx*/) override { }
  virtual void exitInterval(locationsParser::IntervalContext * /*ctx*/) override { }

  virtual void enterSqrtConstExp(locationsParser::SqrtConstExpContext * /*ctx*/) override { }
  virtual void exitSqrtConstExp(locationsParser::SqrtConstExpContext * /*ctx*/) override { }

  virtual void enterAcothConstExp(locationsParser::AcothConstExpContext * /*ctx*/) override { }
  virtual void exitAcothConstExp(locationsParser::AcothConstExpContext * /*ctx*/) override { }

  virtual void enterLogConstExp(locationsParser::LogConstExpContext * /*ctx*/) override { }
  virtual void exitLogConstExp(locationsParser::LogConstExpContext * /*ctx*/) override { }

  virtual void enterTanhConstExp(locationsParser::TanhConstExpContext * /*ctx*/) override { }
  virtual void exitTanhConstExp(locationsParser::TanhConstExpContext * /*ctx*/) override { }

  virtual void enterPowConstExp(locationsParser::PowConstExpContext * /*ctx*/) override { }
  virtual void exitPowConstExp(locationsParser::PowConstExpContext * /*ctx*/) override { }

  virtual void enterPosConstExp(locationsParser::PosConstExpContext * /*ctx*/) override { }
  virtual void exitPosConstExp(locationsParser::PosConstExpContext * /*ctx*/) override { }

  virtual void enterAtanhConstExp(locationsParser::AtanhConstExpContext * /*ctx*/) override { }
  virtual void exitAtanhConstExp(locationsParser::AtanhConstExpContext * /*ctx*/) override { }

  virtual void enterSqrConstExp(locationsParser::SqrConstExpContext * /*ctx*/) override { }
  virtual void exitSqrConstExp(locationsParser::SqrConstExpContext * /*ctx*/) override { }

  virtual void enterConstExpBra(locationsParser::ConstExpBraContext * /*ctx*/) override { }
  virtual void exitConstExpBra(locationsParser::ConstExpBraContext * /*ctx*/) override { }

  virtual void enterSinhConstExp(locationsParser::SinhConstExpContext * /*ctx*/) override { }
  virtual void exitSinhConstExp(locationsParser::SinhConstExpContext * /*ctx*/) override { }

  virtual void enterAtanConstExp(locationsParser::AtanConstExpContext * /*ctx*/) override { }
  virtual void exitAtanConstExp(locationsParser::AtanConstExpContext * /*ctx*/) override { }

  virtual void enterAsinhConstExp(locationsParser::AsinhConstExpContext * /*ctx*/) override { }
  virtual void exitAsinhConstExp(locationsParser::AsinhConstExpContext * /*ctx*/) override { }

  virtual void enterConstExp(locationsParser::ConstExpContext * /*ctx*/) override { }
  virtual void exitConstExp(locationsParser::ConstExpContext * /*ctx*/) override { }

  virtual void enterNegConstExp(locationsParser::NegConstExpContext * /*ctx*/) override { }
  virtual void exitNegConstExp(locationsParser::NegConstExpContext * /*ctx*/) override { }

  virtual void enterAsinConstExp(locationsParser::AsinConstExpContext * /*ctx*/) override { }
  virtual void exitAsinConstExp(locationsParser::AsinConstExpContext * /*ctx*/) override { }

  virtual void enterTanConstExp(locationsParser::TanConstExpContext * /*ctx*/) override { }
  virtual void exitTanConstExp(locationsParser::TanConstExpContext * /*ctx*/) override { }

  virtual void enterNexpConstExp(locationsParser::NexpConstExpContext * /*ctx*/) override { }
  virtual void exitNexpConstExp(locationsParser::NexpConstExpContext * /*ctx*/) override { }

  virtual void enterCosConstExp(locationsParser::CosConstExpContext * /*ctx*/) override { }
  virtual void exitCosConstExp(locationsParser::CosConstExpContext * /*ctx*/) override { }

  virtual void enterConstExpMulDiv(locationsParser::ConstExpMulDivContext * /*ctx*/) override { }
  virtual void exitConstExpMulDiv(locationsParser::ConstExpMulDivContext * /*ctx*/) override { }

  virtual void enterExpConstExp(locationsParser::ExpConstExpContext * /*ctx*/) override { }
  virtual void exitExpConstExp(locationsParser::ExpConstExpContext * /*ctx*/) override { }

  virtual void enterCotConstExp(locationsParser::CotConstExpContext * /*ctx*/) override { }
  virtual void exitCotConstExp(locationsParser::CotConstExpContext * /*ctx*/) override { }

  virtual void enterCoshConstExp(locationsParser::CoshConstExpContext * /*ctx*/) override { }
  virtual void exitCoshConstExp(locationsParser::CoshConstExpContext * /*ctx*/) override { }

  virtual void enterAcoshConstExp(locationsParser::AcoshConstExpContext * /*ctx*/) override { }
  virtual void exitAcoshConstExp(locationsParser::AcoshConstExpContext * /*ctx*/) override { }

  virtual void enterSinConstExp(locationsParser::SinConstExpContext * /*ctx*/) override { }
  virtual void exitSinConstExp(locationsParser::SinConstExpContext * /*ctx*/) override { }

  virtual void enterAcosConstExp(locationsParser::AcosConstExpContext * /*ctx*/) override { }
  virtual void exitAcosConstExp(locationsParser::AcosConstExpContext * /*ctx*/) override { }

  virtual void enterConstExpAddSub(locationsParser::ConstExpAddSubContext * /*ctx*/) override { }
  virtual void exitConstExpAddSub(locationsParser::ConstExpAddSubContext * /*ctx*/) override { }

  virtual void enterLnConstExp(locationsParser::LnConstExpContext * /*ctx*/) override { }
  virtual void exitLnConstExp(locationsParser::LnConstExpContext * /*ctx*/) override { }

  virtual void enterAcotConstExp(locationsParser::AcotConstExpContext * /*ctx*/) override { }
  virtual void exitAcotConstExp(locationsParser::AcotConstExpContext * /*ctx*/) override { }

  virtual void enterTanExp(locationsParser::TanExpContext * /*ctx*/) override { }
  virtual void exitTanExp(locationsParser::TanExpContext * /*ctx*/) override { }

  virtual void enterSqrExp(locationsParser::SqrExpContext * /*ctx*/) override { }
  virtual void exitSqrExp(locationsParser::SqrExpContext * /*ctx*/) override { }

  virtual void enterConstant(locationsParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(locationsParser::ConstantContext * /*ctx*/) override { }

  virtual void enterAsinhExp(locationsParser::AsinhExpContext * /*ctx*/) override { }
  virtual void exitAsinhExp(locationsParser::AsinhExpContext * /*ctx*/) override { }

  virtual void enterAcosExp(locationsParser::AcosExpContext * /*ctx*/) override { }
  virtual void exitAcosExp(locationsParser::AcosExpContext * /*ctx*/) override { }

  virtual void enterAcothExp(locationsParser::AcothExpContext * /*ctx*/) override { }
  virtual void exitAcothExp(locationsParser::AcothExpContext * /*ctx*/) override { }

  virtual void enterAcoshExp(locationsParser::AcoshExpContext * /*ctx*/) override { }
  virtual void exitAcoshExp(locationsParser::AcoshExpContext * /*ctx*/) override { }

  virtual void enterCosExp(locationsParser::CosExpContext * /*ctx*/) override { }
  virtual void exitCosExp(locationsParser::CosExpContext * /*ctx*/) override { }

  virtual void enterPowExp(locationsParser::PowExpContext * /*ctx*/) override { }
  virtual void exitPowExp(locationsParser::PowExpContext * /*ctx*/) override { }

  virtual void enterCothExp(locationsParser::CothExpContext * /*ctx*/) override { }
  virtual void exitCothExp(locationsParser::CothExpContext * /*ctx*/) override { }

  virtual void enterPosExp(locationsParser::PosExpContext * /*ctx*/) override { }
  virtual void exitPosExp(locationsParser::PosExpContext * /*ctx*/) override { }

  virtual void enterNegExp(locationsParser::NegExpContext * /*ctx*/) override { }
  virtual void exitNegExp(locationsParser::NegExpContext * /*ctx*/) override { }

  virtual void enterExpBra(locationsParser::ExpBraContext * /*ctx*/) override { }
  virtual void exitExpBra(locationsParser::ExpBraContext * /*ctx*/) override { }

  virtual void enterAtanhExp(locationsParser::AtanhExpContext * /*ctx*/) override { }
  virtual void exitAtanhExp(locationsParser::AtanhExpContext * /*ctx*/) override { }

  virtual void enterSinExp(locationsParser::SinExpContext * /*ctx*/) override { }
  virtual void exitSinExp(locationsParser::SinExpContext * /*ctx*/) override { }

  virtual void enterLnExp(locationsParser::LnExpContext * /*ctx*/) override { }
  virtual void exitLnExp(locationsParser::LnExpContext * /*ctx*/) override { }

  virtual void enterTanhExp(locationsParser::TanhExpContext * /*ctx*/) override { }
  virtual void exitTanhExp(locationsParser::TanhExpContext * /*ctx*/) override { }

  virtual void enterSqrtExp(locationsParser::SqrtExpContext * /*ctx*/) override { }
  virtual void exitSqrtExp(locationsParser::SqrtExpContext * /*ctx*/) override { }

  virtual void enterExpMulDiv(locationsParser::ExpMulDivContext * /*ctx*/) override { }
  virtual void exitExpMulDiv(locationsParser::ExpMulDivContext * /*ctx*/) override { }

  virtual void enterAtanExp(locationsParser::AtanExpContext * /*ctx*/) override { }
  virtual void exitAtanExp(locationsParser::AtanExpContext * /*ctx*/) override { }

  virtual void enterAcotExp(locationsParser::AcotExpContext * /*ctx*/) override { }
  virtual void exitAcotExp(locationsParser::AcotExpContext * /*ctx*/) override { }

  virtual void enterExpExp(locationsParser::ExpExpContext * /*ctx*/) override { }
  virtual void exitExpExp(locationsParser::ExpExpContext * /*ctx*/) override { }

  virtual void enterCoshExp(locationsParser::CoshExpContext * /*ctx*/) override { }
  virtual void exitCoshExp(locationsParser::CoshExpContext * /*ctx*/) override { }

  virtual void enterLogExp(locationsParser::LogExpContext * /*ctx*/) override { }
  virtual void exitLogExp(locationsParser::LogExpContext * /*ctx*/) override { }

  virtual void enterAsinExp(locationsParser::AsinExpContext * /*ctx*/) override { }
  virtual void exitAsinExp(locationsParser::AsinExpContext * /*ctx*/) override { }

  virtual void enterCotExp(locationsParser::CotExpContext * /*ctx*/) override { }
  virtual void exitCotExp(locationsParser::CotExpContext * /*ctx*/) override { }

  virtual void enterVariable(locationsParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(locationsParser::VariableContext * /*ctx*/) override { }

  virtual void enterSinhExp(locationsParser::SinhExpContext * /*ctx*/) override { }
  virtual void exitSinhExp(locationsParser::SinhExpContext * /*ctx*/) override { }

  virtual void enterNexpExp(locationsParser::NexpExpContext * /*ctx*/) override { }
  virtual void exitNexpExp(locationsParser::NexpExpContext * /*ctx*/) override { }

  virtual void enterExpAddSub(locationsParser::ExpAddSubContext * /*ctx*/) override { }
  virtual void exitExpAddSub(locationsParser::ExpAddSubContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

