
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/settings.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "settingsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by settingsParser.
 */
class  settingsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by settingsParser.
   */
    virtual antlrcpp::Any visitTimeHorizonsetting(settingsParser::TimeHorizonsettingContext *context) = 0;

    virtual antlrcpp::Any visitStepSetting(settingsParser::StepSettingContext *context) = 0;

    virtual antlrcpp::Any visitGeometrysetting(settingsParser::GeometrysettingContext *context) = 0;

    virtual antlrcpp::Any visitPlotsetting(settingsParser::PlotsettingContext *context) = 0;

    virtual antlrcpp::Any visitPrintsetting(settingsParser::PrintsettingContext *context) = 0;

    virtual antlrcpp::Any visitAnalysissetting(settingsParser::AnalysissettingContext *context) = 0;

    virtual antlrcpp::Any visitMaxjumpsetting(settingsParser::MaxjumpsettingContext *context) = 0;

    virtual antlrcpp::Any visitStartmodelidsetting(settingsParser::StartmodelidsettingContext *context) = 0;

    virtual antlrcpp::Any visitInitialconditionsetting(settingsParser::InitialconditionsettingContext *context) = 0;

    virtual antlrcpp::Any visitSetting(settingsParser::SettingContext *context) = 0;

    virtual antlrcpp::Any visitCondition(settingsParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitPolytope(settingsParser::PolytopeContext *context) = 0;

    virtual antlrcpp::Any visitHpolytope(settingsParser::HpolytopeContext *context) = 0;

    virtual antlrcpp::Any visitVpolytope(settingsParser::VpolytopeContext *context) = 0;

    virtual antlrcpp::Any visitMatrix(settingsParser::MatrixContext *context) = 0;

    virtual antlrcpp::Any visitVector(settingsParser::VectorContext *context) = 0;

    virtual antlrcpp::Any visitIntervalhull(settingsParser::IntervalhullContext *context) = 0;

    virtual antlrcpp::Any visitConstraints(settingsParser::ConstraintsContext *context) = 0;

    virtual antlrcpp::Any visitConstraint(settingsParser::ConstraintContext *context) = 0;

    virtual antlrcpp::Any visitSystem(settingsParser::SystemContext *context) = 0;

    virtual antlrcpp::Any visitFormula(settingsParser::FormulaContext *context) = 0;

    virtual antlrcpp::Any visitInterval(settingsParser::IntervalContext *context) = 0;

    virtual antlrcpp::Any visitTanExp(settingsParser::TanExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrExp(settingsParser::SqrExpContext *context) = 0;

    virtual antlrcpp::Any visitConstant(settingsParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitAsinhExp(settingsParser::AsinhExpContext *context) = 0;

    virtual antlrcpp::Any visitAcosExp(settingsParser::AcosExpContext *context) = 0;

    virtual antlrcpp::Any visitAcothExp(settingsParser::AcothExpContext *context) = 0;

    virtual antlrcpp::Any visitAcoshExp(settingsParser::AcoshExpContext *context) = 0;

    virtual antlrcpp::Any visitCosExp(settingsParser::CosExpContext *context) = 0;

    virtual antlrcpp::Any visitPowExp(settingsParser::PowExpContext *context) = 0;

    virtual antlrcpp::Any visitCothExp(settingsParser::CothExpContext *context) = 0;

    virtual antlrcpp::Any visitPosExp(settingsParser::PosExpContext *context) = 0;

    virtual antlrcpp::Any visitNegExp(settingsParser::NegExpContext *context) = 0;

    virtual antlrcpp::Any visitExpBra(settingsParser::ExpBraContext *context) = 0;

    virtual antlrcpp::Any visitAtanhExp(settingsParser::AtanhExpContext *context) = 0;

    virtual antlrcpp::Any visitSinExp(settingsParser::SinExpContext *context) = 0;

    virtual antlrcpp::Any visitLnExp(settingsParser::LnExpContext *context) = 0;

    virtual antlrcpp::Any visitTanhExp(settingsParser::TanhExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrtExp(settingsParser::SqrtExpContext *context) = 0;

    virtual antlrcpp::Any visitExpMulDiv(settingsParser::ExpMulDivContext *context) = 0;

    virtual antlrcpp::Any visitAtanExp(settingsParser::AtanExpContext *context) = 0;

    virtual antlrcpp::Any visitAcotExp(settingsParser::AcotExpContext *context) = 0;

    virtual antlrcpp::Any visitExpExp(settingsParser::ExpExpContext *context) = 0;

    virtual antlrcpp::Any visitCoshExp(settingsParser::CoshExpContext *context) = 0;

    virtual antlrcpp::Any visitLogExp(settingsParser::LogExpContext *context) = 0;

    virtual antlrcpp::Any visitAsinExp(settingsParser::AsinExpContext *context) = 0;

    virtual antlrcpp::Any visitCotExp(settingsParser::CotExpContext *context) = 0;

    virtual antlrcpp::Any visitVariable(settingsParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitSinhExp(settingsParser::SinhExpContext *context) = 0;

    virtual antlrcpp::Any visitNexpExp(settingsParser::NexpExpContext *context) = 0;

    virtual antlrcpp::Any visitExpAddSub(settingsParser::ExpAddSubContext *context) = 0;


};

