
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/settings.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "settingsParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by settingsParser.
 */
class  settingsListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTimeHorizonsetting(settingsParser::TimeHorizonsettingContext *ctx) = 0;
  virtual void exitTimeHorizonsetting(settingsParser::TimeHorizonsettingContext *ctx) = 0;

  virtual void enterStepSetting(settingsParser::StepSettingContext *ctx) = 0;
  virtual void exitStepSetting(settingsParser::StepSettingContext *ctx) = 0;

  virtual void enterGeometrysetting(settingsParser::GeometrysettingContext *ctx) = 0;
  virtual void exitGeometrysetting(settingsParser::GeometrysettingContext *ctx) = 0;

  virtual void enterPlotsetting(settingsParser::PlotsettingContext *ctx) = 0;
  virtual void exitPlotsetting(settingsParser::PlotsettingContext *ctx) = 0;

  virtual void enterPrintsetting(settingsParser::PrintsettingContext *ctx) = 0;
  virtual void exitPrintsetting(settingsParser::PrintsettingContext *ctx) = 0;

  virtual void enterAnalysissetting(settingsParser::AnalysissettingContext *ctx) = 0;
  virtual void exitAnalysissetting(settingsParser::AnalysissettingContext *ctx) = 0;

  virtual void enterMaxjumpsetting(settingsParser::MaxjumpsettingContext *ctx) = 0;
  virtual void exitMaxjumpsetting(settingsParser::MaxjumpsettingContext *ctx) = 0;

  virtual void enterStartmodelidsetting(settingsParser::StartmodelidsettingContext *ctx) = 0;
  virtual void exitStartmodelidsetting(settingsParser::StartmodelidsettingContext *ctx) = 0;

  virtual void enterInitialconditionsetting(settingsParser::InitialconditionsettingContext *ctx) = 0;
  virtual void exitInitialconditionsetting(settingsParser::InitialconditionsettingContext *ctx) = 0;

  virtual void enterSetting(settingsParser::SettingContext *ctx) = 0;
  virtual void exitSetting(settingsParser::SettingContext *ctx) = 0;

  virtual void enterCondition(settingsParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(settingsParser::ConditionContext *ctx) = 0;

  virtual void enterPolytope(settingsParser::PolytopeContext *ctx) = 0;
  virtual void exitPolytope(settingsParser::PolytopeContext *ctx) = 0;

  virtual void enterHpolytope(settingsParser::HpolytopeContext *ctx) = 0;
  virtual void exitHpolytope(settingsParser::HpolytopeContext *ctx) = 0;

  virtual void enterVpolytope(settingsParser::VpolytopeContext *ctx) = 0;
  virtual void exitVpolytope(settingsParser::VpolytopeContext *ctx) = 0;

  virtual void enterMatrix(settingsParser::MatrixContext *ctx) = 0;
  virtual void exitMatrix(settingsParser::MatrixContext *ctx) = 0;

  virtual void enterVector(settingsParser::VectorContext *ctx) = 0;
  virtual void exitVector(settingsParser::VectorContext *ctx) = 0;

  virtual void enterIntervalhull(settingsParser::IntervalhullContext *ctx) = 0;
  virtual void exitIntervalhull(settingsParser::IntervalhullContext *ctx) = 0;

  virtual void enterConstraints(settingsParser::ConstraintsContext *ctx) = 0;
  virtual void exitConstraints(settingsParser::ConstraintsContext *ctx) = 0;

  virtual void enterConstraint(settingsParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(settingsParser::ConstraintContext *ctx) = 0;

  virtual void enterSystem(settingsParser::SystemContext *ctx) = 0;
  virtual void exitSystem(settingsParser::SystemContext *ctx) = 0;

  virtual void enterFormula(settingsParser::FormulaContext *ctx) = 0;
  virtual void exitFormula(settingsParser::FormulaContext *ctx) = 0;

  virtual void enterInterval(settingsParser::IntervalContext *ctx) = 0;
  virtual void exitInterval(settingsParser::IntervalContext *ctx) = 0;

  virtual void enterTanExp(settingsParser::TanExpContext *ctx) = 0;
  virtual void exitTanExp(settingsParser::TanExpContext *ctx) = 0;

  virtual void enterSqrExp(settingsParser::SqrExpContext *ctx) = 0;
  virtual void exitSqrExp(settingsParser::SqrExpContext *ctx) = 0;

  virtual void enterConstant(settingsParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(settingsParser::ConstantContext *ctx) = 0;

  virtual void enterAsinhExp(settingsParser::AsinhExpContext *ctx) = 0;
  virtual void exitAsinhExp(settingsParser::AsinhExpContext *ctx) = 0;

  virtual void enterAcosExp(settingsParser::AcosExpContext *ctx) = 0;
  virtual void exitAcosExp(settingsParser::AcosExpContext *ctx) = 0;

  virtual void enterAcothExp(settingsParser::AcothExpContext *ctx) = 0;
  virtual void exitAcothExp(settingsParser::AcothExpContext *ctx) = 0;

  virtual void enterAcoshExp(settingsParser::AcoshExpContext *ctx) = 0;
  virtual void exitAcoshExp(settingsParser::AcoshExpContext *ctx) = 0;

  virtual void enterCosExp(settingsParser::CosExpContext *ctx) = 0;
  virtual void exitCosExp(settingsParser::CosExpContext *ctx) = 0;

  virtual void enterPowExp(settingsParser::PowExpContext *ctx) = 0;
  virtual void exitPowExp(settingsParser::PowExpContext *ctx) = 0;

  virtual void enterCothExp(settingsParser::CothExpContext *ctx) = 0;
  virtual void exitCothExp(settingsParser::CothExpContext *ctx) = 0;

  virtual void enterPosExp(settingsParser::PosExpContext *ctx) = 0;
  virtual void exitPosExp(settingsParser::PosExpContext *ctx) = 0;

  virtual void enterNegExp(settingsParser::NegExpContext *ctx) = 0;
  virtual void exitNegExp(settingsParser::NegExpContext *ctx) = 0;

  virtual void enterExpBra(settingsParser::ExpBraContext *ctx) = 0;
  virtual void exitExpBra(settingsParser::ExpBraContext *ctx) = 0;

  virtual void enterAtanhExp(settingsParser::AtanhExpContext *ctx) = 0;
  virtual void exitAtanhExp(settingsParser::AtanhExpContext *ctx) = 0;

  virtual void enterSinExp(settingsParser::SinExpContext *ctx) = 0;
  virtual void exitSinExp(settingsParser::SinExpContext *ctx) = 0;

  virtual void enterLnExp(settingsParser::LnExpContext *ctx) = 0;
  virtual void exitLnExp(settingsParser::LnExpContext *ctx) = 0;

  virtual void enterTanhExp(settingsParser::TanhExpContext *ctx) = 0;
  virtual void exitTanhExp(settingsParser::TanhExpContext *ctx) = 0;

  virtual void enterSqrtExp(settingsParser::SqrtExpContext *ctx) = 0;
  virtual void exitSqrtExp(settingsParser::SqrtExpContext *ctx) = 0;

  virtual void enterExpMulDiv(settingsParser::ExpMulDivContext *ctx) = 0;
  virtual void exitExpMulDiv(settingsParser::ExpMulDivContext *ctx) = 0;

  virtual void enterAtanExp(settingsParser::AtanExpContext *ctx) = 0;
  virtual void exitAtanExp(settingsParser::AtanExpContext *ctx) = 0;

  virtual void enterAcotExp(settingsParser::AcotExpContext *ctx) = 0;
  virtual void exitAcotExp(settingsParser::AcotExpContext *ctx) = 0;

  virtual void enterExpExp(settingsParser::ExpExpContext *ctx) = 0;
  virtual void exitExpExp(settingsParser::ExpExpContext *ctx) = 0;

  virtual void enterCoshExp(settingsParser::CoshExpContext *ctx) = 0;
  virtual void exitCoshExp(settingsParser::CoshExpContext *ctx) = 0;

  virtual void enterLogExp(settingsParser::LogExpContext *ctx) = 0;
  virtual void exitLogExp(settingsParser::LogExpContext *ctx) = 0;

  virtual void enterAsinExp(settingsParser::AsinExpContext *ctx) = 0;
  virtual void exitAsinExp(settingsParser::AsinExpContext *ctx) = 0;

  virtual void enterCotExp(settingsParser::CotExpContext *ctx) = 0;
  virtual void exitCotExp(settingsParser::CotExpContext *ctx) = 0;

  virtual void enterVariable(settingsParser::VariableContext *ctx) = 0;
  virtual void exitVariable(settingsParser::VariableContext *ctx) = 0;

  virtual void enterSinhExp(settingsParser::SinhExpContext *ctx) = 0;
  virtual void exitSinhExp(settingsParser::SinhExpContext *ctx) = 0;

  virtual void enterNexpExp(settingsParser::NexpExpContext *ctx) = 0;
  virtual void exitNexpExp(settingsParser::NexpExpContext *ctx) = 0;

  virtual void enterExpAddSub(settingsParser::ExpAddSubContext *ctx) = 0;
  virtual void exitExpAddSub(settingsParser::ExpAddSubContext *ctx) = 0;


};

