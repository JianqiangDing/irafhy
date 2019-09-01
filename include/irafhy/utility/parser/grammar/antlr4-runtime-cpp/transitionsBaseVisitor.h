
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/transitions.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "transitionsVisitor.h"


/**
 * This class provides an empty implementation of transitionsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  transitionsBaseVisitor : public transitionsVisitor {
public:

  virtual antlrcpp::Any visitDirection(transitionsParser::DirectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGuardcondition(transitionsParser::GuardconditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdatefunction(transitionsParser::UpdatefunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResetmap(transitionsParser::ResetmapContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJump(transitionsParser::JumpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransitions(transitionsParser::TransitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(transitionsParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPolytope(transitionsParser::PolytopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHpolytope(transitionsParser::HpolytopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVpolytope(transitionsParser::VpolytopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatrix(transitionsParser::MatrixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVector(transitionsParser::VectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalhull(transitionsParser::IntervalhullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraints(transitionsParser::ConstraintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint(transitionsParser::ConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSystem(transitionsParser::SystemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormula(transitionsParser::FormulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval(transitionsParser::IntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTanExp(transitionsParser::TanExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqrExp(transitionsParser::SqrExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(transitionsParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAsinhExp(transitionsParser::AsinhExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcosExp(transitionsParser::AcosExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcothExp(transitionsParser::AcothExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcoshExp(transitionsParser::AcoshExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCosExp(transitionsParser::CosExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowExp(transitionsParser::PowExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCothExp(transitionsParser::CothExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPosExp(transitionsParser::PosExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegExp(transitionsParser::NegExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpBra(transitionsParser::ExpBraContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtanhExp(transitionsParser::AtanhExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSinExp(transitionsParser::SinExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLnExp(transitionsParser::LnExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTanhExp(transitionsParser::TanhExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqrtExp(transitionsParser::SqrtExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpMulDiv(transitionsParser::ExpMulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtanExp(transitionsParser::AtanExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcotExp(transitionsParser::AcotExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpExp(transitionsParser::ExpExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCoshExp(transitionsParser::CoshExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogExp(transitionsParser::LogExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAsinExp(transitionsParser::AsinExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCotExp(transitionsParser::CotExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(transitionsParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSinhExp(transitionsParser::SinhExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNexpExp(transitionsParser::NexpExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpAddSub(transitionsParser::ExpAddSubContext *ctx) override {
    return visitChildren(ctx);
  }


};

