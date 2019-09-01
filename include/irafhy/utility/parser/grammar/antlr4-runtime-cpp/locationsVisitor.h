
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/locations.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "locationsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by locationsParser.
 */
class  locationsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by locationsParser.
   */
    virtual antlrcpp::Any visitModelid(locationsParser::ModelidContext *context) = 0;

    virtual antlrcpp::Any visitFlows(locationsParser::FlowsContext *context) = 0;

    virtual antlrcpp::Any visitInvariantcondition(locationsParser::InvariantconditionContext *context) = 0;

    virtual antlrcpp::Any visitModel(locationsParser::ModelContext *context) = 0;

    virtual antlrcpp::Any visitLocations(locationsParser::LocationsContext *context) = 0;

    virtual antlrcpp::Any visitCondition(locationsParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitPolytope(locationsParser::PolytopeContext *context) = 0;

    virtual antlrcpp::Any visitHpolytope(locationsParser::HpolytopeContext *context) = 0;

    virtual antlrcpp::Any visitVpolytope(locationsParser::VpolytopeContext *context) = 0;

    virtual antlrcpp::Any visitMatrix(locationsParser::MatrixContext *context) = 0;

    virtual antlrcpp::Any visitVector(locationsParser::VectorContext *context) = 0;

    virtual antlrcpp::Any visitIntervalhull(locationsParser::IntervalhullContext *context) = 0;

    virtual antlrcpp::Any visitConstraints(locationsParser::ConstraintsContext *context) = 0;

    virtual antlrcpp::Any visitConstraint(locationsParser::ConstraintContext *context) = 0;

    virtual antlrcpp::Any visitSystem(locationsParser::SystemContext *context) = 0;

    virtual antlrcpp::Any visitFormula(locationsParser::FormulaContext *context) = 0;

    virtual antlrcpp::Any visitInterval(locationsParser::IntervalContext *context) = 0;

    virtual antlrcpp::Any visitTanExp(locationsParser::TanExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrExp(locationsParser::SqrExpContext *context) = 0;

    virtual antlrcpp::Any visitConstant(locationsParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitAsinhExp(locationsParser::AsinhExpContext *context) = 0;

    virtual antlrcpp::Any visitAcosExp(locationsParser::AcosExpContext *context) = 0;

    virtual antlrcpp::Any visitAcothExp(locationsParser::AcothExpContext *context) = 0;

    virtual antlrcpp::Any visitAcoshExp(locationsParser::AcoshExpContext *context) = 0;

    virtual antlrcpp::Any visitCosExp(locationsParser::CosExpContext *context) = 0;

    virtual antlrcpp::Any visitPowExp(locationsParser::PowExpContext *context) = 0;

    virtual antlrcpp::Any visitCothExp(locationsParser::CothExpContext *context) = 0;

    virtual antlrcpp::Any visitPosExp(locationsParser::PosExpContext *context) = 0;

    virtual antlrcpp::Any visitNegExp(locationsParser::NegExpContext *context) = 0;

    virtual antlrcpp::Any visitExpBra(locationsParser::ExpBraContext *context) = 0;

    virtual antlrcpp::Any visitAtanhExp(locationsParser::AtanhExpContext *context) = 0;

    virtual antlrcpp::Any visitSinExp(locationsParser::SinExpContext *context) = 0;

    virtual antlrcpp::Any visitLnExp(locationsParser::LnExpContext *context) = 0;

    virtual antlrcpp::Any visitTanhExp(locationsParser::TanhExpContext *context) = 0;

    virtual antlrcpp::Any visitSqrtExp(locationsParser::SqrtExpContext *context) = 0;

    virtual antlrcpp::Any visitExpMulDiv(locationsParser::ExpMulDivContext *context) = 0;

    virtual antlrcpp::Any visitAtanExp(locationsParser::AtanExpContext *context) = 0;

    virtual antlrcpp::Any visitAcotExp(locationsParser::AcotExpContext *context) = 0;

    virtual antlrcpp::Any visitExpExp(locationsParser::ExpExpContext *context) = 0;

    virtual antlrcpp::Any visitCoshExp(locationsParser::CoshExpContext *context) = 0;

    virtual antlrcpp::Any visitLogExp(locationsParser::LogExpContext *context) = 0;

    virtual antlrcpp::Any visitAsinExp(locationsParser::AsinExpContext *context) = 0;

    virtual antlrcpp::Any visitCotExp(locationsParser::CotExpContext *context) = 0;

    virtual antlrcpp::Any visitVariable(locationsParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitSinhExp(locationsParser::SinhExpContext *context) = 0;

    virtual antlrcpp::Any visitNexpExp(locationsParser::NexpExpContext *context) = 0;

    virtual antlrcpp::Any visitExpAddSub(locationsParser::ExpAddSubContext *context) = 0;


};

