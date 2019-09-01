
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/settings.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "settingsListener.h"


/**
 * This class provides an empty implementation of settingsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  settingsBaseListener : public settingsListener {
public:

  virtual void enterTimeHorizonsetting(settingsParser::TimeHorizonsettingContext * /*ctx*/) override { }
  virtual void exitTimeHorizonsetting(settingsParser::TimeHorizonsettingContext * /*ctx*/) override { }

  virtual void enterStepSetting(settingsParser::StepSettingContext * /*ctx*/) override { }
  virtual void exitStepSetting(settingsParser::StepSettingContext * /*ctx*/) override { }

  virtual void enterGeometrysetting(settingsParser::GeometrysettingContext * /*ctx*/) override { }
  virtual void exitGeometrysetting(settingsParser::GeometrysettingContext * /*ctx*/) override { }

  virtual void enterPlotsetting(settingsParser::PlotsettingContext * /*ctx*/) override { }
  virtual void exitPlotsetting(settingsParser::PlotsettingContext * /*ctx*/) override { }

  virtual void enterPrintsetting(settingsParser::PrintsettingContext * /*ctx*/) override { }
  virtual void exitPrintsetting(settingsParser::PrintsettingContext * /*ctx*/) override { }

  virtual void enterAnalysissetting(settingsParser::AnalysissettingContext * /*ctx*/) override { }
  virtual void exitAnalysissetting(settingsParser::AnalysissettingContext * /*ctx*/) override { }

  virtual void enterMaxjumpsetting(settingsParser::MaxjumpsettingContext * /*ctx*/) override { }
  virtual void exitMaxjumpsetting(settingsParser::MaxjumpsettingContext * /*ctx*/) override { }

  virtual void enterStartmodelidsetting(settingsParser::StartmodelidsettingContext * /*ctx*/) override { }
  virtual void exitStartmodelidsetting(settingsParser::StartmodelidsettingContext * /*ctx*/) override { }

  virtual void enterInitialconditionsetting(settingsParser::InitialconditionsettingContext * /*ctx*/) override { }
  virtual void exitInitialconditionsetting(settingsParser::InitialconditionsettingContext * /*ctx*/) override { }

  virtual void enterSetting(settingsParser::SettingContext * /*ctx*/) override { }
  virtual void exitSetting(settingsParser::SettingContext * /*ctx*/) override { }

  virtual void enterCondition(settingsParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(settingsParser::ConditionContext * /*ctx*/) override { }

  virtual void enterPolytope(settingsParser::PolytopeContext * /*ctx*/) override { }
  virtual void exitPolytope(settingsParser::PolytopeContext * /*ctx*/) override { }

  virtual void enterHpolytope(settingsParser::HpolytopeContext * /*ctx*/) override { }
  virtual void exitHpolytope(settingsParser::HpolytopeContext * /*ctx*/) override { }

  virtual void enterVpolytope(settingsParser::VpolytopeContext * /*ctx*/) override { }
  virtual void exitVpolytope(settingsParser::VpolytopeContext * /*ctx*/) override { }

  virtual void enterMatrix(settingsParser::MatrixContext * /*ctx*/) override { }
  virtual void exitMatrix(settingsParser::MatrixContext * /*ctx*/) override { }

  virtual void enterVector(settingsParser::VectorContext * /*ctx*/) override { }
  virtual void exitVector(settingsParser::VectorContext * /*ctx*/) override { }

  virtual void enterIntervalhull(settingsParser::IntervalhullContext * /*ctx*/) override { }
  virtual void exitIntervalhull(settingsParser::IntervalhullContext * /*ctx*/) override { }

  virtual void enterConstraints(settingsParser::ConstraintsContext * /*ctx*/) override { }
  virtual void exitConstraints(settingsParser::ConstraintsContext * /*ctx*/) override { }

  virtual void enterConstraint(settingsParser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(settingsParser::ConstraintContext * /*ctx*/) override { }

  virtual void enterSystem(settingsParser::SystemContext * /*ctx*/) override { }
  virtual void exitSystem(settingsParser::SystemContext * /*ctx*/) override { }

  virtual void enterFormula(settingsParser::FormulaContext * /*ctx*/) override { }
  virtual void exitFormula(settingsParser::FormulaContext * /*ctx*/) override { }

  virtual void enterInterval(settingsParser::IntervalContext * /*ctx*/) override { }
  virtual void exitInterval(settingsParser::IntervalContext * /*ctx*/) override { }

  virtual void enterTanExp(settingsParser::TanExpContext * /*ctx*/) override { }
  virtual void exitTanExp(settingsParser::TanExpContext * /*ctx*/) override { }

  virtual void enterSqrExp(settingsParser::SqrExpContext * /*ctx*/) override { }
  virtual void exitSqrExp(settingsParser::SqrExpContext * /*ctx*/) override { }

  virtual void enterConstant(settingsParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(settingsParser::ConstantContext * /*ctx*/) override { }

  virtual void enterAsinhExp(settingsParser::AsinhExpContext * /*ctx*/) override { }
  virtual void exitAsinhExp(settingsParser::AsinhExpContext * /*ctx*/) override { }

  virtual void enterAcosExp(settingsParser::AcosExpContext * /*ctx*/) override { }
  virtual void exitAcosExp(settingsParser::AcosExpContext * /*ctx*/) override { }

  virtual void enterAcothExp(settingsParser::AcothExpContext * /*ctx*/) override { }
  virtual void exitAcothExp(settingsParser::AcothExpContext * /*ctx*/) override { }

  virtual void enterAcoshExp(settingsParser::AcoshExpContext * /*ctx*/) override { }
  virtual void exitAcoshExp(settingsParser::AcoshExpContext * /*ctx*/) override { }

  virtual void enterCosExp(settingsParser::CosExpContext * /*ctx*/) override { }
  virtual void exitCosExp(settingsParser::CosExpContext * /*ctx*/) override { }

  virtual void enterPowExp(settingsParser::PowExpContext * /*ctx*/) override { }
  virtual void exitPowExp(settingsParser::PowExpContext * /*ctx*/) override { }

  virtual void enterCothExp(settingsParser::CothExpContext * /*ctx*/) override { }
  virtual void exitCothExp(settingsParser::CothExpContext * /*ctx*/) override { }

  virtual void enterPosExp(settingsParser::PosExpContext * /*ctx*/) override { }
  virtual void exitPosExp(settingsParser::PosExpContext * /*ctx*/) override { }

  virtual void enterNegExp(settingsParser::NegExpContext * /*ctx*/) override { }
  virtual void exitNegExp(settingsParser::NegExpContext * /*ctx*/) override { }

  virtual void enterExpBra(settingsParser::ExpBraContext * /*ctx*/) override { }
  virtual void exitExpBra(settingsParser::ExpBraContext * /*ctx*/) override { }

  virtual void enterAtanhExp(settingsParser::AtanhExpContext * /*ctx*/) override { }
  virtual void exitAtanhExp(settingsParser::AtanhExpContext * /*ctx*/) override { }

  virtual void enterSinExp(settingsParser::SinExpContext * /*ctx*/) override { }
  virtual void exitSinExp(settingsParser::SinExpContext * /*ctx*/) override { }

  virtual void enterLnExp(settingsParser::LnExpContext * /*ctx*/) override { }
  virtual void exitLnExp(settingsParser::LnExpContext * /*ctx*/) override { }

  virtual void enterTanhExp(settingsParser::TanhExpContext * /*ctx*/) override { }
  virtual void exitTanhExp(settingsParser::TanhExpContext * /*ctx*/) override { }

  virtual void enterSqrtExp(settingsParser::SqrtExpContext * /*ctx*/) override { }
  virtual void exitSqrtExp(settingsParser::SqrtExpContext * /*ctx*/) override { }

  virtual void enterExpMulDiv(settingsParser::ExpMulDivContext * /*ctx*/) override { }
  virtual void exitExpMulDiv(settingsParser::ExpMulDivContext * /*ctx*/) override { }

  virtual void enterAtanExp(settingsParser::AtanExpContext * /*ctx*/) override { }
  virtual void exitAtanExp(settingsParser::AtanExpContext * /*ctx*/) override { }

  virtual void enterAcotExp(settingsParser::AcotExpContext * /*ctx*/) override { }
  virtual void exitAcotExp(settingsParser::AcotExpContext * /*ctx*/) override { }

  virtual void enterExpExp(settingsParser::ExpExpContext * /*ctx*/) override { }
  virtual void exitExpExp(settingsParser::ExpExpContext * /*ctx*/) override { }

  virtual void enterCoshExp(settingsParser::CoshExpContext * /*ctx*/) override { }
  virtual void exitCoshExp(settingsParser::CoshExpContext * /*ctx*/) override { }

  virtual void enterLogExp(settingsParser::LogExpContext * /*ctx*/) override { }
  virtual void exitLogExp(settingsParser::LogExpContext * /*ctx*/) override { }

  virtual void enterAsinExp(settingsParser::AsinExpContext * /*ctx*/) override { }
  virtual void exitAsinExp(settingsParser::AsinExpContext * /*ctx*/) override { }

  virtual void enterCotExp(settingsParser::CotExpContext * /*ctx*/) override { }
  virtual void exitCotExp(settingsParser::CotExpContext * /*ctx*/) override { }

  virtual void enterVariable(settingsParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(settingsParser::VariableContext * /*ctx*/) override { }

  virtual void enterSinhExp(settingsParser::SinhExpContext * /*ctx*/) override { }
  virtual void exitSinhExp(settingsParser::SinhExpContext * /*ctx*/) override { }

  virtual void enterNexpExp(settingsParser::NexpExpContext * /*ctx*/) override { }
  virtual void exitNexpExp(settingsParser::NexpExpContext * /*ctx*/) override { }

  virtual void enterExpAddSub(settingsParser::ExpAddSubContext * /*ctx*/) override { }
  virtual void exitExpAddSub(settingsParser::ExpAddSubContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

