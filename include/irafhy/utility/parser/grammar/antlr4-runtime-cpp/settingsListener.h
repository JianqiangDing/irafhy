
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

  virtual void enterSqrtConstExp(settingsParser::SqrtConstExpContext *ctx) = 0;
  virtual void exitSqrtConstExp(settingsParser::SqrtConstExpContext *ctx) = 0;

  virtual void enterAcothConstExp(settingsParser::AcothConstExpContext *ctx) = 0;
  virtual void exitAcothConstExp(settingsParser::AcothConstExpContext *ctx) = 0;

  virtual void enterLogConstExp(settingsParser::LogConstExpContext *ctx) = 0;
  virtual void exitLogConstExp(settingsParser::LogConstExpContext *ctx) = 0;

  virtual void enterTanhConstExp(settingsParser::TanhConstExpContext *ctx) = 0;
  virtual void exitTanhConstExp(settingsParser::TanhConstExpContext *ctx) = 0;

  virtual void enterPowConstExp(settingsParser::PowConstExpContext *ctx) = 0;
  virtual void exitPowConstExp(settingsParser::PowConstExpContext *ctx) = 0;

  virtual void enterPosConstExp(settingsParser::PosConstExpContext *ctx) = 0;
  virtual void exitPosConstExp(settingsParser::PosConstExpContext *ctx) = 0;

  virtual void enterAtanhConstExp(settingsParser::AtanhConstExpContext *ctx) = 0;
  virtual void exitAtanhConstExp(settingsParser::AtanhConstExpContext *ctx) = 0;

  virtual void enterSqrConstExp(settingsParser::SqrConstExpContext *ctx) = 0;
  virtual void exitSqrConstExp(settingsParser::SqrConstExpContext *ctx) = 0;

  virtual void enterConstExpBra(settingsParser::ConstExpBraContext *ctx) = 0;
  virtual void exitConstExpBra(settingsParser::ConstExpBraContext *ctx) = 0;

  virtual void enterSinhConstExp(settingsParser::SinhConstExpContext *ctx) = 0;
  virtual void exitSinhConstExp(settingsParser::SinhConstExpContext *ctx) = 0;

  virtual void enterAtanConstExp(settingsParser::AtanConstExpContext *ctx) = 0;
  virtual void exitAtanConstExp(settingsParser::AtanConstExpContext *ctx) = 0;

  virtual void enterAsinhConstExp(settingsParser::AsinhConstExpContext *ctx) = 0;
  virtual void exitAsinhConstExp(settingsParser::AsinhConstExpContext *ctx) = 0;

  virtual void enterConstExp(settingsParser::ConstExpContext *ctx) = 0;
  virtual void exitConstExp(settingsParser::ConstExpContext *ctx) = 0;

  virtual void enterNegConstExp(settingsParser::NegConstExpContext *ctx) = 0;
  virtual void exitNegConstExp(settingsParser::NegConstExpContext *ctx) = 0;

  virtual void enterAsinConstExp(settingsParser::AsinConstExpContext *ctx) = 0;
  virtual void exitAsinConstExp(settingsParser::AsinConstExpContext *ctx) = 0;

  virtual void enterTanConstExp(settingsParser::TanConstExpContext *ctx) = 0;
  virtual void exitTanConstExp(settingsParser::TanConstExpContext *ctx) = 0;

  virtual void enterNexpConstExp(settingsParser::NexpConstExpContext *ctx) = 0;
  virtual void exitNexpConstExp(settingsParser::NexpConstExpContext *ctx) = 0;

  virtual void enterCosConstExp(settingsParser::CosConstExpContext *ctx) = 0;
  virtual void exitCosConstExp(settingsParser::CosConstExpContext *ctx) = 0;

  virtual void enterConstExpMulDiv(settingsParser::ConstExpMulDivContext *ctx) = 0;
  virtual void exitConstExpMulDiv(settingsParser::ConstExpMulDivContext *ctx) = 0;

  virtual void enterExpConstExp(settingsParser::ExpConstExpContext *ctx) = 0;
  virtual void exitExpConstExp(settingsParser::ExpConstExpContext *ctx) = 0;

  virtual void enterCotConstExp(settingsParser::CotConstExpContext *ctx) = 0;
  virtual void exitCotConstExp(settingsParser::CotConstExpContext *ctx) = 0;

  virtual void enterCoshConstExp(settingsParser::CoshConstExpContext *ctx) = 0;
  virtual void exitCoshConstExp(settingsParser::CoshConstExpContext *ctx) = 0;

  virtual void enterAcoshConstExp(settingsParser::AcoshConstExpContext *ctx) = 0;
  virtual void exitAcoshConstExp(settingsParser::AcoshConstExpContext *ctx) = 0;

  virtual void enterSinConstExp(settingsParser::SinConstExpContext *ctx) = 0;
  virtual void exitSinConstExp(settingsParser::SinConstExpContext *ctx) = 0;

  virtual void enterAcosConstExp(settingsParser::AcosConstExpContext *ctx) = 0;
  virtual void exitAcosConstExp(settingsParser::AcosConstExpContext *ctx) = 0;

  virtual void enterConstExpAddSub(settingsParser::ConstExpAddSubContext *ctx) = 0;
  virtual void exitConstExpAddSub(settingsParser::ConstExpAddSubContext *ctx) = 0;

  virtual void enterLnConstExp(settingsParser::LnConstExpContext *ctx) = 0;
  virtual void exitLnConstExp(settingsParser::LnConstExpContext *ctx) = 0;

  virtual void enterAcotConstExp(settingsParser::AcotConstExpContext *ctx) = 0;
  virtual void exitAcotConstExp(settingsParser::AcotConstExpContext *ctx) = 0;

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

