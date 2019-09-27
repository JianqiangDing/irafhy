
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/definition.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "definitionVisitor.h"


/**
 * This class provides an empty implementation of definitionVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  definitionBaseVisitor : public definitionVisitor {
public:

  virtual antlrcpp::Any visitCondition(definitionParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPolytope(definitionParser::PolytopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHpolytope(definitionParser::HpolytopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVpolytope(definitionParser::VpolytopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatrix(definitionParser::MatrixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVector(definitionParser::VectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalhull(definitionParser::IntervalhullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraints(definitionParser::ConstraintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint(definitionParser::ConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSystem(definitionParser::SystemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormula(definitionParser::FormulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval(definitionParser::IntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqrtConstExp(definitionParser::SqrtConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcothConstExp(definitionParser::AcothConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogConstExp(definitionParser::LogConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTanhConstExp(definitionParser::TanhConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowConstExp(definitionParser::PowConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPosConstExp(definitionParser::PosConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtanhConstExp(definitionParser::AtanhConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqrConstExp(definitionParser::SqrConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstExpBra(definitionParser::ConstExpBraContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSinhConstExp(definitionParser::SinhConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtanConstExp(definitionParser::AtanConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAsinhConstExp(definitionParser::AsinhConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstExp(definitionParser::ConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegConstExp(definitionParser::NegConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAsinConstExp(definitionParser::AsinConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTanConstExp(definitionParser::TanConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNexpConstExp(definitionParser::NexpConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCosConstExp(definitionParser::CosConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstExpMulDiv(definitionParser::ConstExpMulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpConstExp(definitionParser::ExpConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCotConstExp(definitionParser::CotConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCoshConstExp(definitionParser::CoshConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcoshConstExp(definitionParser::AcoshConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSinConstExp(definitionParser::SinConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcosConstExp(definitionParser::AcosConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstExpAddSub(definitionParser::ConstExpAddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLnConstExp(definitionParser::LnConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcotConstExp(definitionParser::AcotConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTanExp(definitionParser::TanExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqrExp(definitionParser::SqrExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(definitionParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAsinhExp(definitionParser::AsinhExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcosExp(definitionParser::AcosExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcothExp(definitionParser::AcothExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcoshExp(definitionParser::AcoshExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCosExp(definitionParser::CosExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowExp(definitionParser::PowExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCothExp(definitionParser::CothExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPosExp(definitionParser::PosExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegExp(definitionParser::NegExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpBra(definitionParser::ExpBraContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtanhExp(definitionParser::AtanhExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSinExp(definitionParser::SinExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLnExp(definitionParser::LnExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTanhExp(definitionParser::TanhExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqrtExp(definitionParser::SqrtExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpMulDiv(definitionParser::ExpMulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtanExp(definitionParser::AtanExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcotExp(definitionParser::AcotExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpExp(definitionParser::ExpExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCoshExp(definitionParser::CoshExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogExp(definitionParser::LogExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAsinExp(definitionParser::AsinExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCotExp(definitionParser::CotExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(definitionParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSinhExp(definitionParser::SinhExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNexpExp(definitionParser::NexpExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpAddSub(definitionParser::ExpAddSubContext *ctx) override {
    return visitChildren(ctx);
  }


};

