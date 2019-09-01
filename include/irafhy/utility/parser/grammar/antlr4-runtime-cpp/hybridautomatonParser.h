
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/hybridautomaton.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  hybridautomatonParser : public antlr4::Parser {
public:
  enum {
    KEY_HYBRID_AUTOMATON = 1, KEY_VARIABLES = 2, KEY_LOCATIONS = 3, KEY_MODEL = 4, 
    KEY_FLOWS = 5, KEY_INVARIANT_CONDITIONS = 6, KEY_SETTINGS = 7, KEY_ANALYSIS = 8, 
    KEY_ANALYSIS_FORWARD = 9, KEY_ANALYSIS_BACKWARD = 10, KEY_TIME_HORIZON = 11, 
    KEY_STEP = 12, KEY_GEOMETRY = 13, KEY_PLOT_FLAG = 14, KEY_PRINT_FLAG = 15, 
    KEY_MAX_JUMP = 16, KEY_START_MODEL_ID = 17, KEY_INITIAL_CONDITION = 18, 
    KEY_TRANSITIONS = 19, KEY_URGENT = 20, KEY_JUMP = 21, KEY_DIRECTION = 22, 
    KEY_GUARD_CONDITIONS = 23, KEY_RESET_MAP = 24, KEY_INTERVAL_HULL = 25, 
    KEY_POLYTOPE = 26, KEY_CONDITION = 27, KEY_MATRIX = 28, KEY_ROW_MAJOR_ORDER = 29, 
    KEY_COL_MAJOR_ORDER = 30, KEY_SIN_FUNCTION = 31, KEY_ARCSIN_FUNCTION = 32, 
    KEY_COS_FUNCTION = 33, KEY_ARCCOS_FUNCTION = 34, KEY_TAN_FUNCTION = 35, 
    KEY_ARCTAN_FUNCTION = 36, KEY_COT_FUNCTION = 37, KEY_ARCCOT_FUNCTION = 38, 
    KEY_LN_FUNCTION = 39, KEY_LOG_FUNCTION = 40, KEY_NATURAL_EXP_FUNCTION = 41, 
    KEY_SINH_FUNCTION = 42, KEY_ARCSINH_FUNCTION = 43, KEY_COSH_FUNCTION = 44, 
    KEY_ARCCOSH_FUNCTION = 45, KEY_TANH_FUNCTION = 46, KEY_ARCTANH_FUNCTION = 47, 
    KEY_COTH_FUNCTION = 48, KEY_ARCCOTH_FUNCTION = 49, KEY_SQR_FUNCTION = 50, 
    KEY_SQRT_FUNCTION = 51, KEY_ABS_FUNCTION = 52, KEY_POWER_FUNCTION = 53, 
    KEY_NAME = 54, KEY_SWITCH_ON = 55, KEY_SWITCH_OFF = 56, KEY_BOOL_TRUE = 57, 
    KEY_BOOL_FALSE = 58, KEY_INFINITY = 59, SCINUM = 60, NUMBER = 61, VARIABLE = 62, 
    LEFTCURLYBRACKET = 63, RIGHTCURLYBRACKET = 64, LEFTROUNDBRACKET = 65, 
    RIGHTROUNDBRACKET = 66, LEFTSQUAREBRACKET = 67, RIGHTSQUAREBRACKET = 68, 
    COMMA = 69, EQUAL = 70, UNEQUAL = 71, GEQ = 72, LEQ = 73, LSS = 74, 
    GTR = 75, DEFINE = 76, FROMTO = 77, ASSIGN = 78, PLUS = 79, MINUS = 80, 
    MULTIPLY = 81, DIVIDE = 82, EXPONENT = 83, DERIVATIVE = 84, COMMENT = 85, 
    WS = 86
  };

  enum {
    RuleHybridautomatonid = 0, RuleVariables = 1, RuleHybridautomaton = 2, 
    RuleCondition = 3, RulePolytope = 4, RuleHpolytope = 5, RuleVpolytope = 6, 
    RuleMatrix = 7, RuleVector = 8, RuleIntervalhull = 9, RuleConstraints = 10, 
    RuleConstraint = 11, RuleSystem = 12, RuleFormula = 13, RuleInterval = 14, 
    RuleExpression = 15, RuleModelid = 16, RuleFlows = 17, RuleInvariantcondition = 18, 
    RuleModel = 19, RuleLocations = 20, RuleDirection = 21, RuleGuardcondition = 22, 
    RuleUpdatefunction = 23, RuleResetmap = 24, RuleJump = 25, RuleTransitions = 26
  };

  hybridautomatonParser(antlr4::TokenStream *input);
  ~hybridautomatonParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class HybridautomatonidContext;
  class VariablesContext;
  class HybridautomatonContext;
  class ConditionContext;
  class PolytopeContext;
  class HpolytopeContext;
  class VpolytopeContext;
  class MatrixContext;
  class VectorContext;
  class IntervalhullContext;
  class ConstraintsContext;
  class ConstraintContext;
  class SystemContext;
  class FormulaContext;
  class IntervalContext;
  class ExpressionContext;
  class ModelidContext;
  class FlowsContext;
  class InvariantconditionContext;
  class ModelContext;
  class LocationsContext;
  class DirectionContext;
  class GuardconditionContext;
  class UpdatefunctionContext;
  class ResetmapContext;
  class JumpContext;
  class TransitionsContext; 

  class  HybridautomatonidContext : public antlr4::ParserRuleContext {
  public:
    HybridautomatonidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_NAME();
    std::vector<antlr4::tree::TerminalNode *> VARIABLE();
    antlr4::tree::TerminalNode* VARIABLE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HybridautomatonidContext* hybridautomatonid();

  class  VariablesContext : public antlr4::ParserRuleContext {
  public:
    VariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_VARIABLES();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();
    std::vector<antlr4::tree::TerminalNode *> VARIABLE();
    antlr4::tree::TerminalNode* VARIABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariablesContext* variables();

  class  HybridautomatonContext : public antlr4::ParserRuleContext {
  public:
    HybridautomatonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_HYBRID_AUTOMATON();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    HybridautomatonidContext *hybridautomatonid();
    VariablesContext *variables();
    LocationsContext *locations();
    TransitionsContext *transitions();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HybridautomatonContext* hybridautomaton();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_CONDITION();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();
    IntervalhullContext *intervalhull();
    PolytopeContext *polytope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  PolytopeContext : public antlr4::ParserRuleContext {
  public:
    PolytopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_POLYTOPE();
    HpolytopeContext *hpolytope();
    VpolytopeContext *vpolytope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PolytopeContext* polytope();

  class  HpolytopeContext : public antlr4::ParserRuleContext {
  public:
    HpolytopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    MatrixContext *matrix();
    VectorContext *vector();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HpolytopeContext* hpolytope();

  class  VpolytopeContext : public antlr4::ParserRuleContext {
  public:
    VpolytopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    std::vector<VectorContext *> vector();
    VectorContext* vector(size_t i);
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VpolytopeContext* vpolytope();

  class  MatrixContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *MAJOR_ORDER = nullptr;;
    MatrixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_MATRIX();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    std::vector<VectorContext *> vector();
    VectorContext* vector(size_t i);
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();
    antlr4::tree::TerminalNode *KEY_ROW_MAJOR_ORDER();
    antlr4::tree::TerminalNode *KEY_COL_MAJOR_ORDER();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MatrixContext* matrix();

  class  VectorContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *plusToken = nullptr;;
    std::vector<antlr4::Token *> OP;;
    antlr4::Token *minusToken = nullptr;;
    antlr4::Token *_tset115 = nullptr;;
    antlr4::Token *_tset135 = nullptr;;
    VectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VectorContext* vector();

  class  IntervalhullContext : public antlr4::ParserRuleContext {
  public:
    IntervalhullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_INTERVAL_HULL();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    std::vector<IntervalContext *> interval();
    IntervalContext* interval(size_t i);
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalhullContext* intervalhull();

  class  ConstraintsContext : public antlr4::ParserRuleContext {
  public:
    ConstraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstraintContext *> constraint();
    ConstraintContext* constraint(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintsContext* constraints();

  class  ConstraintContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *RELATION = nullptr;;
    ConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *UNEQUAL();
    antlr4::tree::TerminalNode *GEQ();
    antlr4::tree::TerminalNode *LEQ();
    antlr4::tree::TerminalNode *LSS();
    antlr4::tree::TerminalNode *GTR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintContext* constraint();

  class  SystemContext : public antlr4::ParserRuleContext {
  public:
    SystemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SystemContext* system();

  class  FormulaContext : public antlr4::ParserRuleContext {
  public:
    FormulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DERIVATIVE();
    IntervalContext *interval();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormulaContext* formula();

  class  IntervalContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *plusToken = nullptr;;
    std::vector<antlr4::Token *> OP;;
    antlr4::Token *minusToken = nullptr;;
    antlr4::Token *_tset251 = nullptr;;
    antlr4::Token *numberToken = nullptr;;
    std::vector<antlr4::Token *> VAL;;
    antlr4::Token *scinumToken = nullptr;;
    antlr4::Token *key_infinityToken = nullptr;;
    antlr4::Token *_tset264 = nullptr;;
    antlr4::Token *_tset284 = nullptr;;
    antlr4::Token *_tset297 = nullptr;;
    IntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFTSQUAREBRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RIGHTSQUAREBRACKET();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SCINUM();
    antlr4::tree::TerminalNode* SCINUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEY_INFINITY();
    antlr4::tree::TerminalNode* KEY_INFINITY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalContext* interval();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TanExpContext : public ExpressionContext {
  public:
    TanExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_TAN_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SqrExpContext : public ExpressionContext {
  public:
    SqrExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_SQR_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantContext : public ExpressionContext {
  public:
    ConstantContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *SCINUM();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AsinhExpContext : public ExpressionContext {
  public:
    AsinhExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_ARCSINH_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AcosExpContext : public ExpressionContext {
  public:
    AcosExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_ARCCOS_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AcothExpContext : public ExpressionContext {
  public:
    AcothExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_ARCCOTH_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AcoshExpContext : public ExpressionContext {
  public:
    AcoshExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_ARCCOSH_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CosExpContext : public ExpressionContext {
  public:
    CosExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_COS_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PowExpContext : public ExpressionContext {
  public:
    PowExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_POWER_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CothExpContext : public ExpressionContext {
  public:
    CothExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_COTH_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PosExpContext : public ExpressionContext {
  public:
    PosExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *PLUS();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegExpContext : public ExpressionContext {
  public:
    NegExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpBraContext : public ExpressionContext {
  public:
    ExpBraContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtanhExpContext : public ExpressionContext {
  public:
    AtanhExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_ARCTANH_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SinExpContext : public ExpressionContext {
  public:
    SinExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_SIN_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LnExpContext : public ExpressionContext {
  public:
    LnExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_LN_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TanhExpContext : public ExpressionContext {
  public:
    TanhExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_TANH_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SqrtExpContext : public ExpressionContext {
  public:
    SqrtExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_SQRT_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpMulDivContext : public ExpressionContext {
  public:
    ExpMulDivContext(ExpressionContext *ctx);

    antlr4::Token *OP = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtanExpContext : public ExpressionContext {
  public:
    AtanExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_ARCTAN_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AcotExpContext : public ExpressionContext {
  public:
    AcotExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_ARCCOT_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpExpContext : public ExpressionContext {
  public:
    ExpExpContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *EXPONENT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CoshExpContext : public ExpressionContext {
  public:
    CoshExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_COSH_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogExpContext : public ExpressionContext {
  public:
    LogExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_LOG_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AsinExpContext : public ExpressionContext {
  public:
    AsinExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_ARCSIN_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CotExpContext : public ExpressionContext {
  public:
    CotExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_COT_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableContext : public ExpressionContext {
  public:
    VariableContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *VARIABLE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SinhExpContext : public ExpressionContext {
  public:
    SinhExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_SINH_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NexpExpContext : public ExpressionContext {
  public:
    NexpExpContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *KEY_NATURAL_EXP_FUNCTION();
    antlr4::tree::TerminalNode *LEFTROUNDBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHTROUNDBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpAddSubContext : public ExpressionContext {
  public:
    ExpAddSubContext(ExpressionContext *ctx);

    antlr4::Token *OP = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ModelidContext : public antlr4::ParserRuleContext {
  public:
    ModelidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_NAME();
    antlr4::tree::TerminalNode *VARIABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModelidContext* modelid();

  class  FlowsContext : public antlr4::ParserRuleContext {
  public:
    FlowsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_FLOWS();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    SystemContext *system();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlowsContext* flows();

  class  InvariantconditionContext : public antlr4::ParserRuleContext {
  public:
    InvariantconditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_INVARIANT_CONDITIONS();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();
    ConditionContext *condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InvariantconditionContext* invariantcondition();

  class  ModelContext : public antlr4::ParserRuleContext {
  public:
    ModelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_MODEL();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    ModelidContext *modelid();
    FlowsContext *flows();
    InvariantconditionContext *invariantcondition();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModelContext* model();

  class  LocationsContext : public antlr4::ParserRuleContext {
  public:
    LocationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_LOCATIONS();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();
    std::vector<ModelContext *> model();
    ModelContext* model(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocationsContext* locations();

  class  DirectionContext : public antlr4::ParserRuleContext {
  public:
    DirectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_DIRECTION();
    std::vector<antlr4::tree::TerminalNode *> VARIABLE();
    antlr4::tree::TerminalNode* VARIABLE(size_t i);
    antlr4::tree::TerminalNode *FROMTO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectionContext* direction();

  class  GuardconditionContext : public antlr4::ParserRuleContext {
  public:
    GuardconditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_GUARD_CONDITIONS();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();
    ConditionContext *condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GuardconditionContext* guardcondition();

  class  UpdatefunctionContext : public antlr4::ParserRuleContext {
  public:
    UpdatefunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *DEFINE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdatefunctionContext* updatefunction();

  class  ResetmapContext : public antlr4::ParserRuleContext {
  public:
    ResetmapContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_RESET_MAP();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();
    std::vector<UpdatefunctionContext *> updatefunction();
    UpdatefunctionContext* updatefunction(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResetmapContext* resetmap();

  class  JumpContext : public antlr4::ParserRuleContext {
  public:
    JumpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_JUMP();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    DirectionContext *direction();
    GuardconditionContext *guardcondition();
    ResetmapContext *resetmap();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpContext* jump();

  class  TransitionsContext : public antlr4::ParserRuleContext {
  public:
    TransitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_TRANSITIONS();
    antlr4::tree::TerminalNode *LEFTCURLYBRACKET();
    antlr4::tree::TerminalNode *RIGHTCURLYBRACKET();
    std::vector<JumpContext *> jump();
    JumpContext* jump(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransitionsContext* transitions();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

