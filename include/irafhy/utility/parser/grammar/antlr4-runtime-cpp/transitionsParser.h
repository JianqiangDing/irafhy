
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/transitions.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  transitionsParser : public antlr4::Parser {
public:
  enum {
    KEY_LOCATIONS = 1, KEY_MODEL = 2, KEY_FLOWS = 3, KEY_INVARIANT_CONDITIONS = 4, 
    KEY_SETTINGS = 5, KEY_ANALYSIS = 6, KEY_ANALYSIS_FORWARD = 7, KEY_ANALYSIS_BACKWARD = 8, 
    KEY_TIME_HORIZON = 9, KEY_STEP = 10, KEY_GEOMETRY = 11, KEY_PLOT_FLAG = 12, 
    KEY_PRINT_FLAG = 13, KEY_MAX_JUMP = 14, KEY_START_MODEL_ID = 15, KEY_INITIAL_CONDITION = 16, 
    KEY_TRANSITIONS = 17, KEY_URGENT = 18, KEY_JUMP = 19, KEY_DIRECTION = 20, 
    KEY_GUARD_CONDITIONS = 21, KEY_RESET_MAP = 22, KEY_INTERVAL_HULL = 23, 
    KEY_POLYTOPE = 24, KEY_CONDITION = 25, KEY_MATRIX = 26, KEY_ROW_MAJOR_ORDER = 27, 
    KEY_COL_MAJOR_ORDER = 28, KEY_SIN_FUNCTION = 29, KEY_ARCSIN_FUNCTION = 30, 
    KEY_COS_FUNCTION = 31, KEY_ARCCOS_FUNCTION = 32, KEY_TAN_FUNCTION = 33, 
    KEY_ARCTAN_FUNCTION = 34, KEY_COT_FUNCTION = 35, KEY_ARCCOT_FUNCTION = 36, 
    KEY_LN_FUNCTION = 37, KEY_LOG_FUNCTION = 38, KEY_NATURAL_EXP_FUNCTION = 39, 
    KEY_SINH_FUNCTION = 40, KEY_ARCSINH_FUNCTION = 41, KEY_COSH_FUNCTION = 42, 
    KEY_ARCCOSH_FUNCTION = 43, KEY_TANH_FUNCTION = 44, KEY_ARCTANH_FUNCTION = 45, 
    KEY_COTH_FUNCTION = 46, KEY_ARCCOTH_FUNCTION = 47, KEY_SQR_FUNCTION = 48, 
    KEY_SQRT_FUNCTION = 49, KEY_ABS_FUNCTION = 50, KEY_POWER_FUNCTION = 51, 
    KEY_NAME = 52, KEY_SWITCH_ON = 53, KEY_SWITCH_OFF = 54, KEY_BOOL_TRUE = 55, 
    KEY_BOOL_FALSE = 56, KEY_INFINITY = 57, SCINUM = 58, NUMBER = 59, VARIABLE = 60, 
    LEFTCURLYBRACKET = 61, RIGHTCURLYBRACKET = 62, LEFTROUNDBRACKET = 63, 
    RIGHTROUNDBRACKET = 64, LEFTSQUAREBRACKET = 65, RIGHTSQUAREBRACKET = 66, 
    COMMA = 67, EQUAL = 68, UNEQUAL = 69, GEQ = 70, LEQ = 71, LSS = 72, 
    GTR = 73, DEFINE = 74, FROMTO = 75, ASSIGN = 76, PLUS = 77, MINUS = 78, 
    MULTIPLY = 79, DIVIDE = 80, EXPONENT = 81, DERIVATIVE = 82, COMMENT = 83, 
    WS = 84
  };

  enum {
    RuleDirection = 0, RuleGuardcondition = 1, RuleUpdatefunction = 2, RuleResetmap = 3, 
    RuleJump = 4, RuleTransitions = 5, RuleCondition = 6, RulePolytope = 7, 
    RuleHpolytope = 8, RuleVpolytope = 9, RuleMatrix = 10, RuleVector = 11, 
    RuleIntervalhull = 12, RuleConstraints = 13, RuleConstraint = 14, RuleSystem = 15, 
    RuleFormula = 16, RuleInterval = 17, RuleExpression = 18
  };

  transitionsParser(antlr4::TokenStream *input);
  ~transitionsParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class DirectionContext;
  class GuardconditionContext;
  class UpdatefunctionContext;
  class ResetmapContext;
  class JumpContext;
  class TransitionsContext;
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
    antlr4::Token *OP = nullptr;;
    ConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *SCINUM();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *UNEQUAL();
    antlr4::tree::TerminalNode *GEQ();
    antlr4::tree::TerminalNode *LEQ();
    antlr4::tree::TerminalNode *LSS();
    antlr4::tree::TerminalNode *GTR();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

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
    antlr4::Token *_tset270 = nullptr;;
    antlr4::Token *numberToken = nullptr;;
    std::vector<antlr4::Token *> VAL;;
    antlr4::Token *scinumToken = nullptr;;
    antlr4::Token *key_infinityToken = nullptr;;
    antlr4::Token *_tset283 = nullptr;;
    antlr4::Token *_tset303 = nullptr;;
    antlr4::Token *_tset316 = nullptr;;
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

