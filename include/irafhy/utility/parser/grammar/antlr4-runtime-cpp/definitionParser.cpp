
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/definition.g4 by ANTLR 4.7.2


#include "definitionListener.h"
#include "definitionVisitor.h"

#include "definitionParser.h"


using namespace antlrcpp;
using namespace antlr4;

definitionParser::definitionParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

definitionParser::~definitionParser() {
  delete _interpreter;
}

std::string definitionParser::getGrammarFileName() const {
  return "definition.g4";
}

const std::vector<std::string>& definitionParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& definitionParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ConditionContext ------------------------------------------------------------------

definitionParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* definitionParser::ConditionContext::KEY_CONDITION() {
  return getToken(definitionParser::KEY_CONDITION, 0);
}

tree::TerminalNode* definitionParser::ConditionContext::LEFTCURLYBRACKET() {
  return getToken(definitionParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* definitionParser::ConditionContext::RIGHTCURLYBRACKET() {
  return getToken(definitionParser::RIGHTCURLYBRACKET, 0);
}

definitionParser::IntervalhullContext* definitionParser::ConditionContext::intervalhull() {
  return getRuleContext<definitionParser::IntervalhullContext>(0);
}

definitionParser::PolytopeContext* definitionParser::ConditionContext::polytope() {
  return getRuleContext<definitionParser::PolytopeContext>(0);
}


size_t definitionParser::ConditionContext::getRuleIndex() const {
  return definitionParser::RuleCondition;
}

void definitionParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void definitionParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any definitionParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::ConditionContext* definitionParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 0, definitionParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(definitionParser::KEY_CONDITION);
    setState(27);
    match(definitionParser::LEFTCURLYBRACKET);
    setState(30);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case definitionParser::KEY_INTERVAL_HULL: {
        setState(28);
        intervalhull();
        break;
      }

      case definitionParser::KEY_POLYTOPE: {
        setState(29);
        polytope();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(32);
    match(definitionParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PolytopeContext ------------------------------------------------------------------

definitionParser::PolytopeContext::PolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* definitionParser::PolytopeContext::KEY_POLYTOPE() {
  return getToken(definitionParser::KEY_POLYTOPE, 0);
}

definitionParser::HpolytopeContext* definitionParser::PolytopeContext::hpolytope() {
  return getRuleContext<definitionParser::HpolytopeContext>(0);
}

definitionParser::VpolytopeContext* definitionParser::PolytopeContext::vpolytope() {
  return getRuleContext<definitionParser::VpolytopeContext>(0);
}


size_t definitionParser::PolytopeContext::getRuleIndex() const {
  return definitionParser::RulePolytope;
}

void definitionParser::PolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPolytope(this);
}

void definitionParser::PolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPolytope(this);
}


antlrcpp::Any definitionParser::PolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitPolytope(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::PolytopeContext* definitionParser::polytope() {
  PolytopeContext *_localctx = _tracker.createInstance<PolytopeContext>(_ctx, getState());
  enterRule(_localctx, 2, definitionParser::RulePolytope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(definitionParser::KEY_POLYTOPE);
    setState(37);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(35);
      hpolytope();
      break;
    }

    case 2: {
      setState(36);
      vpolytope();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HpolytopeContext ------------------------------------------------------------------

definitionParser::HpolytopeContext::HpolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* definitionParser::HpolytopeContext::LEFTCURLYBRACKET() {
  return getToken(definitionParser::LEFTCURLYBRACKET, 0);
}

definitionParser::MatrixContext* definitionParser::HpolytopeContext::matrix() {
  return getRuleContext<definitionParser::MatrixContext>(0);
}

definitionParser::VectorContext* definitionParser::HpolytopeContext::vector() {
  return getRuleContext<definitionParser::VectorContext>(0);
}

tree::TerminalNode* definitionParser::HpolytopeContext::RIGHTCURLYBRACKET() {
  return getToken(definitionParser::RIGHTCURLYBRACKET, 0);
}


size_t definitionParser::HpolytopeContext::getRuleIndex() const {
  return definitionParser::RuleHpolytope;
}

void definitionParser::HpolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHpolytope(this);
}

void definitionParser::HpolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHpolytope(this);
}


antlrcpp::Any definitionParser::HpolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitHpolytope(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::HpolytopeContext* definitionParser::hpolytope() {
  HpolytopeContext *_localctx = _tracker.createInstance<HpolytopeContext>(_ctx, getState());
  enterRule(_localctx, 4, definitionParser::RuleHpolytope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    match(definitionParser::LEFTCURLYBRACKET);
    setState(40);
    matrix();
    setState(41);
    vector();
    setState(42);
    match(definitionParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VpolytopeContext ------------------------------------------------------------------

definitionParser::VpolytopeContext::VpolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* definitionParser::VpolytopeContext::LEFTCURLYBRACKET() {
  return getToken(definitionParser::LEFTCURLYBRACKET, 0);
}

std::vector<definitionParser::VectorContext *> definitionParser::VpolytopeContext::vector() {
  return getRuleContexts<definitionParser::VectorContext>();
}

definitionParser::VectorContext* definitionParser::VpolytopeContext::vector(size_t i) {
  return getRuleContext<definitionParser::VectorContext>(i);
}

tree::TerminalNode* definitionParser::VpolytopeContext::RIGHTCURLYBRACKET() {
  return getToken(definitionParser::RIGHTCURLYBRACKET, 0);
}

std::vector<tree::TerminalNode *> definitionParser::VpolytopeContext::COMMA() {
  return getTokens(definitionParser::COMMA);
}

tree::TerminalNode* definitionParser::VpolytopeContext::COMMA(size_t i) {
  return getToken(definitionParser::COMMA, i);
}


size_t definitionParser::VpolytopeContext::getRuleIndex() const {
  return definitionParser::RuleVpolytope;
}

void definitionParser::VpolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVpolytope(this);
}

void definitionParser::VpolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVpolytope(this);
}


antlrcpp::Any definitionParser::VpolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitVpolytope(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::VpolytopeContext* definitionParser::vpolytope() {
  VpolytopeContext *_localctx = _tracker.createInstance<VpolytopeContext>(_ctx, getState());
  enterRule(_localctx, 6, definitionParser::RuleVpolytope);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(definitionParser::LEFTCURLYBRACKET);
    setState(45);
    vector();
    setState(50); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(47);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == definitionParser::COMMA) {
        setState(46);
        match(definitionParser::COMMA);
      }
      setState(49);
      vector();
      setState(52); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == definitionParser::LEFTROUNDBRACKET

    || _la == definitionParser::COMMA);
    setState(54);
    match(definitionParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatrixContext ------------------------------------------------------------------

definitionParser::MatrixContext::MatrixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* definitionParser::MatrixContext::KEY_MATRIX() {
  return getToken(definitionParser::KEY_MATRIX, 0);
}

tree::TerminalNode* definitionParser::MatrixContext::LEFTCURLYBRACKET() {
  return getToken(definitionParser::LEFTCURLYBRACKET, 0);
}

std::vector<definitionParser::VectorContext *> definitionParser::MatrixContext::vector() {
  return getRuleContexts<definitionParser::VectorContext>();
}

definitionParser::VectorContext* definitionParser::MatrixContext::vector(size_t i) {
  return getRuleContext<definitionParser::VectorContext>(i);
}

tree::TerminalNode* definitionParser::MatrixContext::RIGHTCURLYBRACKET() {
  return getToken(definitionParser::RIGHTCURLYBRACKET, 0);
}

tree::TerminalNode* definitionParser::MatrixContext::KEY_ROW_MAJOR_ORDER() {
  return getToken(definitionParser::KEY_ROW_MAJOR_ORDER, 0);
}

tree::TerminalNode* definitionParser::MatrixContext::KEY_COL_MAJOR_ORDER() {
  return getToken(definitionParser::KEY_COL_MAJOR_ORDER, 0);
}

std::vector<tree::TerminalNode *> definitionParser::MatrixContext::COMMA() {
  return getTokens(definitionParser::COMMA);
}

tree::TerminalNode* definitionParser::MatrixContext::COMMA(size_t i) {
  return getToken(definitionParser::COMMA, i);
}


size_t definitionParser::MatrixContext::getRuleIndex() const {
  return definitionParser::RuleMatrix;
}

void definitionParser::MatrixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrix(this);
}

void definitionParser::MatrixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrix(this);
}


antlrcpp::Any definitionParser::MatrixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitMatrix(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::MatrixContext* definitionParser::matrix() {
  MatrixContext *_localctx = _tracker.createInstance<MatrixContext>(_ctx, getState());
  enterRule(_localctx, 8, definitionParser::RuleMatrix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(definitionParser::KEY_MATRIX);
    setState(57);
    match(definitionParser::LEFTCURLYBRACKET);
    setState(58);
    dynamic_cast<MatrixContext *>(_localctx)->MAJOR_ORDER = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == definitionParser::KEY_ROW_MAJOR_ORDER

    || _la == definitionParser::KEY_COL_MAJOR_ORDER)) {
      dynamic_cast<MatrixContext *>(_localctx)->MAJOR_ORDER = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(59);
    vector();
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == definitionParser::LEFTROUNDBRACKET

    || _la == definitionParser::COMMA) {
      setState(61);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == definitionParser::COMMA) {
        setState(60);
        match(definitionParser::COMMA);
      }
      setState(63);
      vector();
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(69);
    match(definitionParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorContext ------------------------------------------------------------------

definitionParser::VectorContext::VectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* definitionParser::VectorContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

std::vector<tree::TerminalNode *> definitionParser::VectorContext::NUMBER() {
  return getTokens(definitionParser::NUMBER);
}

tree::TerminalNode* definitionParser::VectorContext::NUMBER(size_t i) {
  return getToken(definitionParser::NUMBER, i);
}

tree::TerminalNode* definitionParser::VectorContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

std::vector<tree::TerminalNode *> definitionParser::VectorContext::PLUS() {
  return getTokens(definitionParser::PLUS);
}

tree::TerminalNode* definitionParser::VectorContext::PLUS(size_t i) {
  return getToken(definitionParser::PLUS, i);
}

std::vector<tree::TerminalNode *> definitionParser::VectorContext::MINUS() {
  return getTokens(definitionParser::MINUS);
}

tree::TerminalNode* definitionParser::VectorContext::MINUS(size_t i) {
  return getToken(definitionParser::MINUS, i);
}

std::vector<tree::TerminalNode *> definitionParser::VectorContext::COMMA() {
  return getTokens(definitionParser::COMMA);
}

tree::TerminalNode* definitionParser::VectorContext::COMMA(size_t i) {
  return getToken(definitionParser::COMMA, i);
}


size_t definitionParser::VectorContext::getRuleIndex() const {
  return definitionParser::RuleVector;
}

void definitionParser::VectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVector(this);
}

void definitionParser::VectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVector(this);
}


antlrcpp::Any definitionParser::VectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitVector(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::VectorContext* definitionParser::vector() {
  VectorContext *_localctx = _tracker.createInstance<VectorContext>(_ctx, getState());
  enterRule(_localctx, 10, definitionParser::RuleVector);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(definitionParser::LEFTROUNDBRACKET);
    setState(73);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == definitionParser::PLUS

    || _la == definitionParser::MINUS) {
      setState(72);
      dynamic_cast<VectorContext *>(_localctx)->_tset115 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == definitionParser::PLUS

      || _la == definitionParser::MINUS)) {
        dynamic_cast<VectorContext *>(_localctx)->_tset115 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<VectorContext *>(_localctx)->OP.push_back(dynamic_cast<VectorContext *>(_localctx)->_tset115);
    }
    setState(75);
    match(definitionParser::NUMBER);
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (definitionParser::NUMBER - 59))
      | (1ULL << (definitionParser::COMMA - 59))
      | (1ULL << (definitionParser::PLUS - 59))
      | (1ULL << (definitionParser::MINUS - 59)))) != 0)) {
      setState(77);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == definitionParser::COMMA) {
        setState(76);
        match(definitionParser::COMMA);
      }
      setState(80);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == definitionParser::PLUS

      || _la == definitionParser::MINUS) {
        setState(79);
        dynamic_cast<VectorContext *>(_localctx)->_tset135 = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == definitionParser::PLUS

        || _la == definitionParser::MINUS)) {
          dynamic_cast<VectorContext *>(_localctx)->_tset135 = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        dynamic_cast<VectorContext *>(_localctx)->OP.push_back(dynamic_cast<VectorContext *>(_localctx)->_tset135);
      }
      setState(82);
      match(definitionParser::NUMBER);
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
    match(definitionParser::RIGHTROUNDBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalhullContext ------------------------------------------------------------------

definitionParser::IntervalhullContext::IntervalhullContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* definitionParser::IntervalhullContext::KEY_INTERVAL_HULL() {
  return getToken(definitionParser::KEY_INTERVAL_HULL, 0);
}

tree::TerminalNode* definitionParser::IntervalhullContext::LEFTCURLYBRACKET() {
  return getToken(definitionParser::LEFTCURLYBRACKET, 0);
}

std::vector<definitionParser::IntervalContext *> definitionParser::IntervalhullContext::interval() {
  return getRuleContexts<definitionParser::IntervalContext>();
}

definitionParser::IntervalContext* definitionParser::IntervalhullContext::interval(size_t i) {
  return getRuleContext<definitionParser::IntervalContext>(i);
}

tree::TerminalNode* definitionParser::IntervalhullContext::RIGHTCURLYBRACKET() {
  return getToken(definitionParser::RIGHTCURLYBRACKET, 0);
}

std::vector<tree::TerminalNode *> definitionParser::IntervalhullContext::COMMA() {
  return getTokens(definitionParser::COMMA);
}

tree::TerminalNode* definitionParser::IntervalhullContext::COMMA(size_t i) {
  return getToken(definitionParser::COMMA, i);
}


size_t definitionParser::IntervalhullContext::getRuleIndex() const {
  return definitionParser::RuleIntervalhull;
}

void definitionParser::IntervalhullContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntervalhull(this);
}

void definitionParser::IntervalhullContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntervalhull(this);
}


antlrcpp::Any definitionParser::IntervalhullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitIntervalhull(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::IntervalhullContext* definitionParser::intervalhull() {
  IntervalhullContext *_localctx = _tracker.createInstance<IntervalhullContext>(_ctx, getState());
  enterRule(_localctx, 12, definitionParser::RuleIntervalhull);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(definitionParser::KEY_INTERVAL_HULL);
    setState(91);
    match(definitionParser::LEFTCURLYBRACKET);
    setState(92);
    interval();
    setState(99);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == definitionParser::LEFTSQUAREBRACKET

    || _la == definitionParser::COMMA) {
      setState(94);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == definitionParser::COMMA) {
        setState(93);
        match(definitionParser::COMMA);
      }
      setState(96);
      interval();
      setState(101);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(102);
    match(definitionParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintsContext ------------------------------------------------------------------

definitionParser::ConstraintsContext::ConstraintsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<definitionParser::ConstraintContext *> definitionParser::ConstraintsContext::constraint() {
  return getRuleContexts<definitionParser::ConstraintContext>();
}

definitionParser::ConstraintContext* definitionParser::ConstraintsContext::constraint(size_t i) {
  return getRuleContext<definitionParser::ConstraintContext>(i);
}


size_t definitionParser::ConstraintsContext::getRuleIndex() const {
  return definitionParser::RuleConstraints;
}

void definitionParser::ConstraintsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraints(this);
}

void definitionParser::ConstraintsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraints(this);
}


antlrcpp::Any definitionParser::ConstraintsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitConstraints(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::ConstraintsContext* definitionParser::constraints() {
  ConstraintsContext *_localctx = _tracker.createInstance<ConstraintsContext>(_ctx, getState());
  enterRule(_localctx, 14, definitionParser::RuleConstraints);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(104);
      constraint();
      setState(107); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 29) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 29)) & ((1ULL << (definitionParser::KEY_SIN_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_ARCSIN_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_COS_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_ARCCOS_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_TAN_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_ARCTAN_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_COT_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_ARCCOT_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_LN_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_LOG_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_NATURAL_EXP_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_SINH_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_ARCSINH_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_COSH_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_ARCCOSH_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_TANH_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_ARCTANH_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_COTH_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_ARCCOTH_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_SQR_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_SQRT_FUNCTION - 29))
      | (1ULL << (definitionParser::KEY_POWER_FUNCTION - 29))
      | (1ULL << (definitionParser::SCINUM - 29))
      | (1ULL << (definitionParser::NUMBER - 29))
      | (1ULL << (definitionParser::VARIABLE - 29))
      | (1ULL << (definitionParser::LEFTROUNDBRACKET - 29))
      | (1ULL << (definitionParser::PLUS - 29))
      | (1ULL << (definitionParser::MINUS - 29)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintContext ------------------------------------------------------------------

definitionParser::ConstraintContext::ConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

definitionParser::ExpressionContext* definitionParser::ConstraintContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::ConstraintContext::NUMBER() {
  return getToken(definitionParser::NUMBER, 0);
}

tree::TerminalNode* definitionParser::ConstraintContext::SCINUM() {
  return getToken(definitionParser::SCINUM, 0);
}

tree::TerminalNode* definitionParser::ConstraintContext::EQUAL() {
  return getToken(definitionParser::EQUAL, 0);
}

tree::TerminalNode* definitionParser::ConstraintContext::UNEQUAL() {
  return getToken(definitionParser::UNEQUAL, 0);
}

tree::TerminalNode* definitionParser::ConstraintContext::GEQ() {
  return getToken(definitionParser::GEQ, 0);
}

tree::TerminalNode* definitionParser::ConstraintContext::LEQ() {
  return getToken(definitionParser::LEQ, 0);
}

tree::TerminalNode* definitionParser::ConstraintContext::LSS() {
  return getToken(definitionParser::LSS, 0);
}

tree::TerminalNode* definitionParser::ConstraintContext::GTR() {
  return getToken(definitionParser::GTR, 0);
}

tree::TerminalNode* definitionParser::ConstraintContext::PLUS() {
  return getToken(definitionParser::PLUS, 0);
}

tree::TerminalNode* definitionParser::ConstraintContext::MINUS() {
  return getToken(definitionParser::MINUS, 0);
}


size_t definitionParser::ConstraintContext::getRuleIndex() const {
  return definitionParser::RuleConstraint;
}

void definitionParser::ConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraint(this);
}

void definitionParser::ConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraint(this);
}


antlrcpp::Any definitionParser::ConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitConstraint(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::ConstraintContext* definitionParser::constraint() {
  ConstraintContext *_localctx = _tracker.createInstance<ConstraintContext>(_ctx, getState());
  enterRule(_localctx, 16, definitionParser::RuleConstraint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    expression(0);
    setState(110);
    dynamic_cast<ConstraintContext *>(_localctx)->RELATION = _input->LT(1);
    _la = _input->LA(1);
    if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (definitionParser::EQUAL - 68))
      | (1ULL << (definitionParser::UNEQUAL - 68))
      | (1ULL << (definitionParser::GEQ - 68))
      | (1ULL << (definitionParser::LEQ - 68))
      | (1ULL << (definitionParser::LSS - 68))
      | (1ULL << (definitionParser::GTR - 68)))) != 0))) {
      dynamic_cast<ConstraintContext *>(_localctx)->RELATION = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == definitionParser::PLUS

    || _la == definitionParser::MINUS) {
      setState(111);
      dynamic_cast<ConstraintContext *>(_localctx)->OP = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == definitionParser::PLUS

      || _la == definitionParser::MINUS)) {
        dynamic_cast<ConstraintContext *>(_localctx)->OP = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(114);
    _la = _input->LA(1);
    if (!(_la == definitionParser::SCINUM

    || _la == definitionParser::NUMBER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SystemContext ------------------------------------------------------------------

definitionParser::SystemContext::SystemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<definitionParser::FormulaContext *> definitionParser::SystemContext::formula() {
  return getRuleContexts<definitionParser::FormulaContext>();
}

definitionParser::FormulaContext* definitionParser::SystemContext::formula(size_t i) {
  return getRuleContext<definitionParser::FormulaContext>(i);
}


size_t definitionParser::SystemContext::getRuleIndex() const {
  return definitionParser::RuleSystem;
}

void definitionParser::SystemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSystem(this);
}

void definitionParser::SystemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSystem(this);
}


antlrcpp::Any definitionParser::SystemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitSystem(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::SystemContext* definitionParser::system() {
  SystemContext *_localctx = _tracker.createInstance<SystemContext>(_ctx, getState());
  enterRule(_localctx, 18, definitionParser::RuleSystem);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(116);
      formula();
      setState(119); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == definitionParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

definitionParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* definitionParser::FormulaContext::VARIABLE() {
  return getToken(definitionParser::VARIABLE, 0);
}

tree::TerminalNode* definitionParser::FormulaContext::ASSIGN() {
  return getToken(definitionParser::ASSIGN, 0);
}

definitionParser::ExpressionContext* definitionParser::FormulaContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::FormulaContext::DERIVATIVE() {
  return getToken(definitionParser::DERIVATIVE, 0);
}

definitionParser::IntervalContext* definitionParser::FormulaContext::interval() {
  return getRuleContext<definitionParser::IntervalContext>(0);
}


size_t definitionParser::FormulaContext::getRuleIndex() const {
  return definitionParser::RuleFormula;
}

void definitionParser::FormulaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormula(this);
}

void definitionParser::FormulaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormula(this);
}


antlrcpp::Any definitionParser::FormulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitFormula(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::FormulaContext* definitionParser::formula() {
  FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, getState());
  enterRule(_localctx, 20, definitionParser::RuleFormula);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(definitionParser::VARIABLE);
    setState(123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == definitionParser::DERIVATIVE) {
      setState(122);
      match(definitionParser::DERIVATIVE);
    }
    setState(125);
    match(definitionParser::ASSIGN);
    setState(126);
    expression(0);
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == definitionParser::LEFTSQUAREBRACKET) {
      setState(127);
      interval();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalContext ------------------------------------------------------------------

definitionParser::IntervalContext::IntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* definitionParser::IntervalContext::LEFTSQUAREBRACKET() {
  return getToken(definitionParser::LEFTSQUAREBRACKET, 0);
}

tree::TerminalNode* definitionParser::IntervalContext::COMMA() {
  return getToken(definitionParser::COMMA, 0);
}

tree::TerminalNode* definitionParser::IntervalContext::RIGHTSQUAREBRACKET() {
  return getToken(definitionParser::RIGHTSQUAREBRACKET, 0);
}

std::vector<tree::TerminalNode *> definitionParser::IntervalContext::NUMBER() {
  return getTokens(definitionParser::NUMBER);
}

tree::TerminalNode* definitionParser::IntervalContext::NUMBER(size_t i) {
  return getToken(definitionParser::NUMBER, i);
}

std::vector<tree::TerminalNode *> definitionParser::IntervalContext::SCINUM() {
  return getTokens(definitionParser::SCINUM);
}

tree::TerminalNode* definitionParser::IntervalContext::SCINUM(size_t i) {
  return getToken(definitionParser::SCINUM, i);
}

std::vector<tree::TerminalNode *> definitionParser::IntervalContext::KEY_INFINITY() {
  return getTokens(definitionParser::KEY_INFINITY);
}

tree::TerminalNode* definitionParser::IntervalContext::KEY_INFINITY(size_t i) {
  return getToken(definitionParser::KEY_INFINITY, i);
}

std::vector<tree::TerminalNode *> definitionParser::IntervalContext::PLUS() {
  return getTokens(definitionParser::PLUS);
}

tree::TerminalNode* definitionParser::IntervalContext::PLUS(size_t i) {
  return getToken(definitionParser::PLUS, i);
}

std::vector<tree::TerminalNode *> definitionParser::IntervalContext::MINUS() {
  return getTokens(definitionParser::MINUS);
}

tree::TerminalNode* definitionParser::IntervalContext::MINUS(size_t i) {
  return getToken(definitionParser::MINUS, i);
}


size_t definitionParser::IntervalContext::getRuleIndex() const {
  return definitionParser::RuleInterval;
}

void definitionParser::IntervalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterval(this);
}

void definitionParser::IntervalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterval(this);
}


antlrcpp::Any definitionParser::IntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitInterval(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::IntervalContext* definitionParser::interval() {
  IntervalContext *_localctx = _tracker.createInstance<IntervalContext>(_ctx, getState());
  enterRule(_localctx, 22, definitionParser::RuleInterval);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(definitionParser::LEFTSQUAREBRACKET);
    setState(132);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == definitionParser::PLUS

    || _la == definitionParser::MINUS) {
      setState(131);
      dynamic_cast<IntervalContext *>(_localctx)->_tset270 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == definitionParser::PLUS

      || _la == definitionParser::MINUS)) {
        dynamic_cast<IntervalContext *>(_localctx)->_tset270 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<IntervalContext *>(_localctx)->OP.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset270);
    }
    setState(134);
    dynamic_cast<IntervalContext *>(_localctx)->_tset283 = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << definitionParser::KEY_INFINITY)
      | (1ULL << definitionParser::SCINUM)
      | (1ULL << definitionParser::NUMBER))) != 0))) {
      dynamic_cast<IntervalContext *>(_localctx)->_tset283 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    dynamic_cast<IntervalContext *>(_localctx)->VAL.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset283);
    setState(135);
    match(definitionParser::COMMA);
    setState(137);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == definitionParser::PLUS

    || _la == definitionParser::MINUS) {
      setState(136);
      dynamic_cast<IntervalContext *>(_localctx)->_tset303 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == definitionParser::PLUS

      || _la == definitionParser::MINUS)) {
        dynamic_cast<IntervalContext *>(_localctx)->_tset303 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<IntervalContext *>(_localctx)->OP.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset303);
    }
    setState(139);
    dynamic_cast<IntervalContext *>(_localctx)->_tset316 = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << definitionParser::KEY_INFINITY)
      | (1ULL << definitionParser::SCINUM)
      | (1ULL << definitionParser::NUMBER))) != 0))) {
      dynamic_cast<IntervalContext *>(_localctx)->_tset316 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    dynamic_cast<IntervalContext *>(_localctx)->VAL.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset316);
    setState(140);
    match(definitionParser::RIGHTSQUAREBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

definitionParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t definitionParser::ExpressionContext::getRuleIndex() const {
  return definitionParser::RuleExpression;
}

void definitionParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TanExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::TanExpContext::KEY_TAN_FUNCTION() {
  return getToken(definitionParser::KEY_TAN_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::TanExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::TanExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::TanExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::TanExpContext::TanExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::TanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanExp(this);
}
void definitionParser::TanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanExp(this);
}

antlrcpp::Any definitionParser::TanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitTanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::SqrExpContext::KEY_SQR_FUNCTION() {
  return getToken(definitionParser::KEY_SQR_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::SqrExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::SqrExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::SqrExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::SqrExpContext::SqrExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::SqrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrExp(this);
}
void definitionParser::SqrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrExp(this);
}

antlrcpp::Any definitionParser::SqrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitSqrExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::ConstantContext::NUMBER() {
  return getToken(definitionParser::NUMBER, 0);
}

tree::TerminalNode* definitionParser::ConstantContext::SCINUM() {
  return getToken(definitionParser::SCINUM, 0);
}

definitionParser::ConstantContext::ConstantContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}
void definitionParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}

antlrcpp::Any definitionParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinhExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::AsinhExpContext::KEY_ARCSINH_FUNCTION() {
  return getToken(definitionParser::KEY_ARCSINH_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::AsinhExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::AsinhExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::AsinhExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::AsinhExpContext::AsinhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::AsinhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinhExp(this);
}
void definitionParser::AsinhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinhExp(this);
}

antlrcpp::Any definitionParser::AsinhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitAsinhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcosExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::AcosExpContext::KEY_ARCCOS_FUNCTION() {
  return getToken(definitionParser::KEY_ARCCOS_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::AcosExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::AcosExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::AcosExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::AcosExpContext::AcosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::AcosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcosExp(this);
}
void definitionParser::AcosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcosExp(this);
}

antlrcpp::Any definitionParser::AcosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitAcosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcothExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::AcothExpContext::KEY_ARCCOTH_FUNCTION() {
  return getToken(definitionParser::KEY_ARCCOTH_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::AcothExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::AcothExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::AcothExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::AcothExpContext::AcothExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::AcothExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcothExp(this);
}
void definitionParser::AcothExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcothExp(this);
}

antlrcpp::Any definitionParser::AcothExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitAcothExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcoshExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::AcoshExpContext::KEY_ARCCOSH_FUNCTION() {
  return getToken(definitionParser::KEY_ARCCOSH_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::AcoshExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::AcoshExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::AcoshExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::AcoshExpContext::AcoshExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::AcoshExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcoshExp(this);
}
void definitionParser::AcoshExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcoshExp(this);
}

antlrcpp::Any definitionParser::AcoshExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitAcoshExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CosExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::CosExpContext::KEY_COS_FUNCTION() {
  return getToken(definitionParser::KEY_COS_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::CosExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::CosExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::CosExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::CosExpContext::CosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::CosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCosExp(this);
}
void definitionParser::CosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCosExp(this);
}

antlrcpp::Any definitionParser::CosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitCosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::PowExpContext::KEY_POWER_FUNCTION() {
  return getToken(definitionParser::KEY_POWER_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::PowExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

std::vector<definitionParser::ExpressionContext *> definitionParser::PowExpContext::expression() {
  return getRuleContexts<definitionParser::ExpressionContext>();
}

definitionParser::ExpressionContext* definitionParser::PowExpContext::expression(size_t i) {
  return getRuleContext<definitionParser::ExpressionContext>(i);
}

tree::TerminalNode* definitionParser::PowExpContext::COMMA() {
  return getToken(definitionParser::COMMA, 0);
}

tree::TerminalNode* definitionParser::PowExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::PowExpContext::PowExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::PowExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowExp(this);
}
void definitionParser::PowExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowExp(this);
}

antlrcpp::Any definitionParser::PowExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitPowExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CothExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::CothExpContext::KEY_COTH_FUNCTION() {
  return getToken(definitionParser::KEY_COTH_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::CothExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::CothExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::CothExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::CothExpContext::CothExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::CothExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCothExp(this);
}
void definitionParser::CothExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCothExp(this);
}

antlrcpp::Any definitionParser::CothExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitCothExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PosExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::PosExpContext::PLUS() {
  return getToken(definitionParser::PLUS, 0);
}

definitionParser::ExpressionContext* definitionParser::PosExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

definitionParser::PosExpContext::PosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::PosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosExp(this);
}
void definitionParser::PosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosExp(this);
}

antlrcpp::Any definitionParser::PosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitPosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::NegExpContext::MINUS() {
  return getToken(definitionParser::MINUS, 0);
}

definitionParser::ExpressionContext* definitionParser::NegExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

definitionParser::NegExpContext::NegExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::NegExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegExp(this);
}
void definitionParser::NegExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegExp(this);
}

antlrcpp::Any definitionParser::NegExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitNegExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpBraContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::ExpBraContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::ExpBraContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::ExpBraContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::ExpBraContext::ExpBraContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::ExpBraContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpBra(this);
}
void definitionParser::ExpBraContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpBra(this);
}

antlrcpp::Any definitionParser::ExpBraContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitExpBra(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanhExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::AtanhExpContext::KEY_ARCTANH_FUNCTION() {
  return getToken(definitionParser::KEY_ARCTANH_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::AtanhExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::AtanhExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::AtanhExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::AtanhExpContext::AtanhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::AtanhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanhExp(this);
}
void definitionParser::AtanhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanhExp(this);
}

antlrcpp::Any definitionParser::AtanhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitAtanhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::SinExpContext::KEY_SIN_FUNCTION() {
  return getToken(definitionParser::KEY_SIN_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::SinExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::SinExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::SinExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::SinExpContext::SinExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::SinExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinExp(this);
}
void definitionParser::SinExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinExp(this);
}

antlrcpp::Any definitionParser::SinExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitSinExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LnExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::LnExpContext::KEY_LN_FUNCTION() {
  return getToken(definitionParser::KEY_LN_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::LnExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::LnExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::LnExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::LnExpContext::LnExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::LnExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLnExp(this);
}
void definitionParser::LnExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLnExp(this);
}

antlrcpp::Any definitionParser::LnExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitLnExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TanhExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::TanhExpContext::KEY_TANH_FUNCTION() {
  return getToken(definitionParser::KEY_TANH_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::TanhExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::TanhExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::TanhExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::TanhExpContext::TanhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::TanhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanhExp(this);
}
void definitionParser::TanhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanhExp(this);
}

antlrcpp::Any definitionParser::TanhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitTanhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrtExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::SqrtExpContext::KEY_SQRT_FUNCTION() {
  return getToken(definitionParser::KEY_SQRT_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::SqrtExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::SqrtExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::SqrtExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::SqrtExpContext::SqrtExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::SqrtExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrtExp(this);
}
void definitionParser::SqrtExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrtExp(this);
}

antlrcpp::Any definitionParser::SqrtExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitSqrtExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpMulDivContext ------------------------------------------------------------------

std::vector<definitionParser::ExpressionContext *> definitionParser::ExpMulDivContext::expression() {
  return getRuleContexts<definitionParser::ExpressionContext>();
}

definitionParser::ExpressionContext* definitionParser::ExpMulDivContext::expression(size_t i) {
  return getRuleContext<definitionParser::ExpressionContext>(i);
}

tree::TerminalNode* definitionParser::ExpMulDivContext::MULTIPLY() {
  return getToken(definitionParser::MULTIPLY, 0);
}

tree::TerminalNode* definitionParser::ExpMulDivContext::DIVIDE() {
  return getToken(definitionParser::DIVIDE, 0);
}

definitionParser::ExpMulDivContext::ExpMulDivContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::ExpMulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpMulDiv(this);
}
void definitionParser::ExpMulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpMulDiv(this);
}

antlrcpp::Any definitionParser::ExpMulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitExpMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::AtanExpContext::KEY_ARCTAN_FUNCTION() {
  return getToken(definitionParser::KEY_ARCTAN_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::AtanExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::AtanExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::AtanExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::AtanExpContext::AtanExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::AtanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanExp(this);
}
void definitionParser::AtanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanExp(this);
}

antlrcpp::Any definitionParser::AtanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitAtanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcotExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::AcotExpContext::KEY_ARCCOT_FUNCTION() {
  return getToken(definitionParser::KEY_ARCCOT_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::AcotExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::AcotExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::AcotExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::AcotExpContext::AcotExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::AcotExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcotExp(this);
}
void definitionParser::AcotExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcotExp(this);
}

antlrcpp::Any definitionParser::AcotExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitAcotExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpExpContext ------------------------------------------------------------------

std::vector<definitionParser::ExpressionContext *> definitionParser::ExpExpContext::expression() {
  return getRuleContexts<definitionParser::ExpressionContext>();
}

definitionParser::ExpressionContext* definitionParser::ExpExpContext::expression(size_t i) {
  return getRuleContext<definitionParser::ExpressionContext>(i);
}

tree::TerminalNode* definitionParser::ExpExpContext::EXPONENT() {
  return getToken(definitionParser::EXPONENT, 0);
}

definitionParser::ExpExpContext::ExpExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::ExpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpExp(this);
}
void definitionParser::ExpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpExp(this);
}

antlrcpp::Any definitionParser::ExpExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitExpExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CoshExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::CoshExpContext::KEY_COSH_FUNCTION() {
  return getToken(definitionParser::KEY_COSH_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::CoshExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::CoshExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::CoshExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::CoshExpContext::CoshExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::CoshExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoshExp(this);
}
void definitionParser::CoshExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoshExp(this);
}

antlrcpp::Any definitionParser::CoshExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitCoshExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::LogExpContext::KEY_LOG_FUNCTION() {
  return getToken(definitionParser::KEY_LOG_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::LogExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::LogExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::LogExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::LogExpContext::LogExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::LogExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogExp(this);
}
void definitionParser::LogExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogExp(this);
}

antlrcpp::Any definitionParser::LogExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitLogExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::AsinExpContext::KEY_ARCSIN_FUNCTION() {
  return getToken(definitionParser::KEY_ARCSIN_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::AsinExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::AsinExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::AsinExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::AsinExpContext::AsinExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::AsinExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinExp(this);
}
void definitionParser::AsinExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinExp(this);
}

antlrcpp::Any definitionParser::AsinExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitAsinExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CotExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::CotExpContext::KEY_COT_FUNCTION() {
  return getToken(definitionParser::KEY_COT_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::CotExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::CotExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::CotExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::CotExpContext::CotExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::CotExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCotExp(this);
}
void definitionParser::CotExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCotExp(this);
}

antlrcpp::Any definitionParser::CotExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitCotExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::VariableContext::VARIABLE() {
  return getToken(definitionParser::VARIABLE, 0);
}

definitionParser::VariableContext::VariableContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}
void definitionParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

antlrcpp::Any definitionParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinhExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::SinhExpContext::KEY_SINH_FUNCTION() {
  return getToken(definitionParser::KEY_SINH_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::SinhExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::SinhExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::SinhExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::SinhExpContext::SinhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::SinhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinhExp(this);
}
void definitionParser::SinhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinhExp(this);
}

antlrcpp::Any definitionParser::SinhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitSinhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NexpExpContext ------------------------------------------------------------------

tree::TerminalNode* definitionParser::NexpExpContext::KEY_NATURAL_EXP_FUNCTION() {
  return getToken(definitionParser::KEY_NATURAL_EXP_FUNCTION, 0);
}

tree::TerminalNode* definitionParser::NexpExpContext::LEFTROUNDBRACKET() {
  return getToken(definitionParser::LEFTROUNDBRACKET, 0);
}

definitionParser::ExpressionContext* definitionParser::NexpExpContext::expression() {
  return getRuleContext<definitionParser::ExpressionContext>(0);
}

tree::TerminalNode* definitionParser::NexpExpContext::RIGHTROUNDBRACKET() {
  return getToken(definitionParser::RIGHTROUNDBRACKET, 0);
}

definitionParser::NexpExpContext::NexpExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::NexpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNexpExp(this);
}
void definitionParser::NexpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNexpExp(this);
}

antlrcpp::Any definitionParser::NexpExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitNexpExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpAddSubContext ------------------------------------------------------------------

std::vector<definitionParser::ExpressionContext *> definitionParser::ExpAddSubContext::expression() {
  return getRuleContexts<definitionParser::ExpressionContext>();
}

definitionParser::ExpressionContext* definitionParser::ExpAddSubContext::expression(size_t i) {
  return getRuleContext<definitionParser::ExpressionContext>(i);
}

tree::TerminalNode* definitionParser::ExpAddSubContext::PLUS() {
  return getToken(definitionParser::PLUS, 0);
}

tree::TerminalNode* definitionParser::ExpAddSubContext::MINUS() {
  return getToken(definitionParser::MINUS, 0);
}

definitionParser::ExpAddSubContext::ExpAddSubContext(ExpressionContext *ctx) { copyFrom(ctx); }

void definitionParser::ExpAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpAddSub(this);
}
void definitionParser::ExpAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<definitionListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpAddSub(this);
}

antlrcpp::Any definitionParser::ExpAddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<definitionVisitor*>(visitor))
    return parserVisitor->visitExpAddSub(this);
  else
    return visitor->visitChildren(this);
}

definitionParser::ExpressionContext* definitionParser::expression() {
   return expression(0);
}

definitionParser::ExpressionContext* definitionParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  definitionParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  definitionParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, definitionParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(265);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case definitionParser::PLUS: {
        _localctx = _tracker.createInstance<PosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(143);
        match(definitionParser::PLUS);
        setState(144);
        expression(29);
        break;
      }

      case definitionParser::MINUS: {
        _localctx = _tracker.createInstance<NegExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(145);
        match(definitionParser::MINUS);
        setState(146);
        expression(28);
        break;
      }

      case definitionParser::LEFTROUNDBRACKET: {
        _localctx = _tracker.createInstance<ExpBraContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(147);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(148);
        expression(0);
        setState(149);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_SIN_FUNCTION: {
        _localctx = _tracker.createInstance<SinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(151);
        match(definitionParser::KEY_SIN_FUNCTION);
        setState(152);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(153);
        expression(0);
        setState(154);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_ARCSIN_FUNCTION: {
        _localctx = _tracker.createInstance<AsinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(156);
        match(definitionParser::KEY_ARCSIN_FUNCTION);
        setState(157);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(158);
        expression(0);
        setState(159);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_COS_FUNCTION: {
        _localctx = _tracker.createInstance<CosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(161);
        match(definitionParser::KEY_COS_FUNCTION);
        setState(162);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(163);
        expression(0);
        setState(164);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_ARCCOS_FUNCTION: {
        _localctx = _tracker.createInstance<AcosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(166);
        match(definitionParser::KEY_ARCCOS_FUNCTION);
        setState(167);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(168);
        expression(0);
        setState(169);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_TAN_FUNCTION: {
        _localctx = _tracker.createInstance<TanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(171);
        match(definitionParser::KEY_TAN_FUNCTION);
        setState(172);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(173);
        expression(0);
        setState(174);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_ARCTAN_FUNCTION: {
        _localctx = _tracker.createInstance<AtanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(176);
        match(definitionParser::KEY_ARCTAN_FUNCTION);
        setState(177);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(178);
        expression(0);
        setState(179);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_COT_FUNCTION: {
        _localctx = _tracker.createInstance<CotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(181);
        match(definitionParser::KEY_COT_FUNCTION);
        setState(182);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(183);
        expression(0);
        setState(184);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_ARCCOT_FUNCTION: {
        _localctx = _tracker.createInstance<AcotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(186);
        match(definitionParser::KEY_ARCCOT_FUNCTION);
        setState(187);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(188);
        expression(0);
        setState(189);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_SINH_FUNCTION: {
        _localctx = _tracker.createInstance<SinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(191);
        match(definitionParser::KEY_SINH_FUNCTION);
        setState(192);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(193);
        expression(0);
        setState(194);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_ARCSINH_FUNCTION: {
        _localctx = _tracker.createInstance<AsinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(196);
        match(definitionParser::KEY_ARCSINH_FUNCTION);
        setState(197);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(198);
        expression(0);
        setState(199);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_COSH_FUNCTION: {
        _localctx = _tracker.createInstance<CoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(201);
        match(definitionParser::KEY_COSH_FUNCTION);
        setState(202);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(203);
        expression(0);
        setState(204);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_ARCCOSH_FUNCTION: {
        _localctx = _tracker.createInstance<AcoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(206);
        match(definitionParser::KEY_ARCCOSH_FUNCTION);
        setState(207);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(208);
        expression(0);
        setState(209);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_TANH_FUNCTION: {
        _localctx = _tracker.createInstance<TanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(211);
        match(definitionParser::KEY_TANH_FUNCTION);
        setState(212);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(213);
        expression(0);
        setState(214);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_ARCTANH_FUNCTION: {
        _localctx = _tracker.createInstance<AtanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(216);
        match(definitionParser::KEY_ARCTANH_FUNCTION);
        setState(217);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(218);
        expression(0);
        setState(219);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_COTH_FUNCTION: {
        _localctx = _tracker.createInstance<CothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(221);
        match(definitionParser::KEY_COTH_FUNCTION);
        setState(222);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(223);
        expression(0);
        setState(224);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_ARCCOTH_FUNCTION: {
        _localctx = _tracker.createInstance<AcothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(226);
        match(definitionParser::KEY_ARCCOTH_FUNCTION);
        setState(227);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(228);
        expression(0);
        setState(229);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_LN_FUNCTION: {
        _localctx = _tracker.createInstance<LnExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(231);
        match(definitionParser::KEY_LN_FUNCTION);
        setState(232);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(233);
        expression(0);
        setState(234);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_LOG_FUNCTION: {
        _localctx = _tracker.createInstance<LogExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(236);
        match(definitionParser::KEY_LOG_FUNCTION);
        setState(237);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(238);
        expression(0);
        setState(239);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_NATURAL_EXP_FUNCTION: {
        _localctx = _tracker.createInstance<NexpExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(241);
        match(definitionParser::KEY_NATURAL_EXP_FUNCTION);
        setState(242);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(243);
        expression(0);
        setState(244);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_SQR_FUNCTION: {
        _localctx = _tracker.createInstance<SqrExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(246);
        match(definitionParser::KEY_SQR_FUNCTION);
        setState(247);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(248);
        expression(0);
        setState(249);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_SQRT_FUNCTION: {
        _localctx = _tracker.createInstance<SqrtExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(251);
        match(definitionParser::KEY_SQRT_FUNCTION);
        setState(252);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(253);
        expression(0);
        setState(254);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::KEY_POWER_FUNCTION: {
        _localctx = _tracker.createInstance<PowExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(256);
        match(definitionParser::KEY_POWER_FUNCTION);
        setState(257);
        match(definitionParser::LEFTROUNDBRACKET);
        setState(258);
        expression(0);
        setState(259);
        match(definitionParser::COMMA);
        setState(260);
        expression(0);
        setState(261);
        match(definitionParser::RIGHTROUNDBRACKET);
        break;
      }

      case definitionParser::SCINUM:
      case definitionParser::NUMBER: {
        _localctx = _tracker.createInstance<ConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(263);
        _la = _input->LA(1);
        if (!(_la == definitionParser::SCINUM

        || _la == definitionParser::NUMBER)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case definitionParser::VARIABLE: {
        _localctx = _tracker.createInstance<VariableContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(264);
        match(definitionParser::VARIABLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(278);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(276);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpExpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(267);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(268);
          match(definitionParser::EXPONENT);
          setState(269);
          expression(31);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExpMulDivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(270);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(271);
          dynamic_cast<ExpMulDivContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == definitionParser::MULTIPLY

          || _la == definitionParser::DIVIDE)) {
            dynamic_cast<ExpMulDivContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(272);
          expression(28);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExpAddSubContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(273);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(274);
          dynamic_cast<ExpAddSubContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == definitionParser::PLUS

          || _la == definitionParser::MINUS)) {
            dynamic_cast<ExpAddSubContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(275);
          expression(27);
          break;
        }

        } 
      }
      setState(280);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool definitionParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool definitionParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 30);
    case 1: return precpred(_ctx, 27);
    case 2: return precpred(_ctx, 26);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> definitionParser::_decisionToDFA;
atn::PredictionContextCache definitionParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN definitionParser::_atn;
std::vector<uint16_t> definitionParser::_serializedATN;

std::vector<std::string> definitionParser::_ruleNames = {
  "condition", "polytope", "hpolytope", "vpolytope", "matrix", "vector", 
  "intervalhull", "constraints", "constraint", "system", "formula", "interval", 
  "expression"
};

std::vector<std::string> definitionParser::_literalNames = {
  "", "'LOCATIONS'", "'MODEL'", "'FLOWS'", "'INVARIANT_CONDITIONS'", "'SETTINGS'", 
  "'ANALYSIS'", "'FORWARD'", "'BACKWARD'", "'TIME_HORIZON'", "'STEP'", "'GEOMETRY'", 
  "'PLOT'", "'PRINT'", "'MAX_JUMP'", "'START_MODEL_ID'", "'INITIAL_CONDITION'", 
  "'TRANSITIONS'", "'URGENT'", "'JUMP'", "'DIRECTION'", "'GUARD_CONDITIONS'", 
  "'RESET_MAP'", "'INTERVAL_HULL'", "'POLYTOPE'", "'CONDITION'", "'MATRIX'", 
  "'ROW_MAJOR'", "'COL_MAJOR'", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "'NAME'", "'ON'", 
  "'OFF'", "'TRUE'", "'FALSE'", "", "", "", "", "'{'", "'}'", "'('", "')'", 
  "'['", "']'", "','", "'=='", "'!='", "'>='", "'<='", "'<'", "'>'", "':='", 
  "", "'='", "'+'", "'-'", "'*'", "'/'", "'^'", "'''"
};

std::vector<std::string> definitionParser::_symbolicNames = {
  "", "KEY_LOCATIONS", "KEY_MODEL", "KEY_FLOWS", "KEY_INVARIANT_CONDITIONS", 
  "KEY_SETTINGS", "KEY_ANALYSIS", "KEY_ANALYSIS_FORWARD", "KEY_ANALYSIS_BACKWARD", 
  "KEY_TIME_HORIZON", "KEY_STEP", "KEY_GEOMETRY", "KEY_PLOT_FLAG", "KEY_PRINT_FLAG", 
  "KEY_MAX_JUMP", "KEY_START_MODEL_ID", "KEY_INITIAL_CONDITION", "KEY_TRANSITIONS", 
  "KEY_URGENT", "KEY_JUMP", "KEY_DIRECTION", "KEY_GUARD_CONDITIONS", "KEY_RESET_MAP", 
  "KEY_INTERVAL_HULL", "KEY_POLYTOPE", "KEY_CONDITION", "KEY_MATRIX", "KEY_ROW_MAJOR_ORDER", 
  "KEY_COL_MAJOR_ORDER", "KEY_SIN_FUNCTION", "KEY_ARCSIN_FUNCTION", "KEY_COS_FUNCTION", 
  "KEY_ARCCOS_FUNCTION", "KEY_TAN_FUNCTION", "KEY_ARCTAN_FUNCTION", "KEY_COT_FUNCTION", 
  "KEY_ARCCOT_FUNCTION", "KEY_LN_FUNCTION", "KEY_LOG_FUNCTION", "KEY_NATURAL_EXP_FUNCTION", 
  "KEY_SINH_FUNCTION", "KEY_ARCSINH_FUNCTION", "KEY_COSH_FUNCTION", "KEY_ARCCOSH_FUNCTION", 
  "KEY_TANH_FUNCTION", "KEY_ARCTANH_FUNCTION", "KEY_COTH_FUNCTION", "KEY_ARCCOTH_FUNCTION", 
  "KEY_SQR_FUNCTION", "KEY_SQRT_FUNCTION", "KEY_ABS_FUNCTION", "KEY_POWER_FUNCTION", 
  "KEY_NAME", "KEY_SWITCH_ON", "KEY_SWITCH_OFF", "KEY_BOOL_TRUE", "KEY_BOOL_FALSE", 
  "KEY_INFINITY", "SCINUM", "NUMBER", "VARIABLE", "LEFTCURLYBRACKET", "RIGHTCURLYBRACKET", 
  "LEFTROUNDBRACKET", "RIGHTROUNDBRACKET", "LEFTSQUAREBRACKET", "RIGHTSQUAREBRACKET", 
  "COMMA", "EQUAL", "UNEQUAL", "GEQ", "LEQ", "LSS", "GTR", "DEFINE", "FROMTO", 
  "ASSIGN", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "EXPONENT", "DERIVATIVE", 
  "COMMENT", "WS"
};

dfa::Vocabulary definitionParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> definitionParser::_tokenNames;

definitionParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x56, 0x11c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x21, 0xa, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x28, 0xa, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x32, 0xa, 0x5, 0x3, 0x5, 0x6, 0x5, 0x35, 0xa, 0x5, 
    0xd, 0x5, 0xe, 0x5, 0x36, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x40, 0xa, 0x6, 0x3, 0x6, 0x7, 0x6, 
    0x43, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x46, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x4c, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x50, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0x53, 0xa, 0x7, 0x3, 0x7, 0x7, 
    0x7, 0x56, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x59, 0xb, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x61, 0xa, 0x8, 
    0x3, 0x8, 0x7, 0x8, 0x64, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x67, 0xb, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 0x9, 0x6c, 0xa, 0x9, 0xd, 0x9, 0xe, 
    0x9, 0x6d, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x73, 0xa, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x6, 0xb, 0x78, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 
    0x79, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x7e, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0x83, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x87, 
    0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x8c, 0xa, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x10c, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x117, 0xa, 0xe, 0xc, 
    0xe, 0xe, 0xe, 0x11a, 0xb, 0xe, 0x3, 0xe, 0x2, 0x3, 0x1a, 0xf, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x2, 
    0x8, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x46, 0x4b, 
    0x3, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x3b, 0x3d, 0x3, 0x2, 0x51, 0x52, 0x2, 
    0x13e, 0x2, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x24, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x29, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x49, 0x3, 0x2, 0x2, 0x2, 0xe, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x77, 0x3, 0x2, 0x2, 0x2, 0x16, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x84, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x1d, 0x7, 0x1b, 0x2, 0x2, 0x1d, 0x20, 0x7, 0x3f, 0x2, 0x2, 0x1e, 0x21, 
    0x5, 0xe, 0x8, 0x2, 0x1f, 0x21, 0x5, 0x4, 0x3, 0x2, 0x20, 0x1e, 0x3, 
    0x2, 0x2, 0x2, 0x20, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x23, 0x7, 0x40, 0x2, 0x2, 0x23, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x27, 0x7, 0x1a, 0x2, 0x2, 0x25, 0x28, 0x5, 0x6, 0x4, 0x2, 
    0x26, 0x28, 0x5, 0x8, 0x5, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x5, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 
    0x7, 0x3f, 0x2, 0x2, 0x2a, 0x2b, 0x5, 0xa, 0x6, 0x2, 0x2b, 0x2c, 0x5, 
    0xc, 0x7, 0x2, 0x2c, 0x2d, 0x7, 0x40, 0x2, 0x2, 0x2d, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x2f, 0x7, 0x3f, 0x2, 0x2, 0x2f, 0x34, 0x5, 0xc, 0x7, 
    0x2, 0x30, 0x32, 0x7, 0x45, 0x2, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x35, 0x5, 0xc, 0x7, 0x2, 0x34, 0x31, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0x40, 
    0x2, 0x2, 0x39, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x1c, 0x2, 
    0x2, 0x3b, 0x3c, 0x7, 0x3f, 0x2, 0x2, 0x3c, 0x3d, 0x9, 0x2, 0x2, 0x2, 
    0x3d, 0x44, 0x5, 0xc, 0x7, 0x2, 0x3e, 0x40, 0x7, 0x45, 0x2, 0x2, 0x3f, 
    0x3e, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x41, 0x43, 0x5, 0xc, 0x7, 0x2, 0x42, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0x40, 0x2, 0x2, 
    0x48, 0xb, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x7, 0x41, 0x2, 0x2, 0x4a, 
    0x4c, 0x9, 0x3, 0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x57, 0x7, 
    0x3d, 0x2, 0x2, 0x4e, 0x50, 0x7, 0x45, 0x2, 0x2, 0x4f, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0x53, 0x9, 0x3, 0x2, 0x2, 0x52, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x56, 0x7, 0x3d, 0x2, 0x2, 0x55, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x56, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x5b, 0x7, 0x42, 0x2, 0x2, 0x5b, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x5c, 0x5d, 0x7, 0x19, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x3f, 0x2, 0x2, 
    0x5e, 0x65, 0x5, 0x18, 0xd, 0x2, 0x5f, 0x61, 0x7, 0x45, 0x2, 0x2, 0x60, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x64, 0x5, 0x18, 0xd, 0x2, 0x63, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0x40, 0x2, 0x2, 
    0x69, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x12, 0xa, 0x2, 0x6b, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0x70, 0x5, 0x1a, 0xe, 0x2, 0x70, 0x72, 0x9, 0x4, 
    0x2, 0x2, 0x71, 0x73, 0x9, 0x3, 0x2, 0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x75, 0x9, 0x5, 0x2, 0x2, 0x75, 0x13, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x78, 0x5, 0x16, 0xc, 0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x7, 0x3e, 
    0x2, 0x2, 0x7c, 0x7e, 0x7, 0x54, 0x2, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x80, 0x7, 0x4e, 0x2, 0x2, 0x80, 0x82, 0x5, 0x1a, 0xe, 0x2, 0x81, 
    0x83, 0x5, 0x18, 0xd, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x83, 0x17, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x7, 
    0x43, 0x2, 0x2, 0x85, 0x87, 0x9, 0x3, 0x2, 0x2, 0x86, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x89, 0x9, 0x6, 0x2, 0x2, 0x89, 0x8b, 0x7, 0x45, 0x2, 0x2, 
    0x8a, 0x8c, 0x9, 0x3, 0x2, 0x2, 0x8b, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 
    0x9, 0x6, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x44, 0x2, 0x2, 0x8f, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x91, 0x8, 0xe, 0x1, 0x2, 0x91, 0x92, 0x7, 0x4f, 
    0x2, 0x2, 0x92, 0x10c, 0x5, 0x1a, 0xe, 0x1f, 0x93, 0x94, 0x7, 0x50, 
    0x2, 0x2, 0x94, 0x10c, 0x5, 0x1a, 0xe, 0x1e, 0x95, 0x96, 0x7, 0x41, 
    0x2, 0x2, 0x96, 0x97, 0x5, 0x1a, 0xe, 0x2, 0x97, 0x98, 0x7, 0x42, 0x2, 
    0x2, 0x98, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x1f, 0x2, 0x2, 
    0x9a, 0x9b, 0x7, 0x41, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x1a, 0xe, 0x2, 0x9c, 
    0x9d, 0x7, 0x42, 0x2, 0x2, 0x9d, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 
    0x7, 0x20, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x41, 0x2, 0x2, 0xa0, 0xa1, 0x5, 
    0x1a, 0xe, 0x2, 0xa1, 0xa2, 0x7, 0x42, 0x2, 0x2, 0xa2, 0x10c, 0x3, 0x2, 
    0x2, 0x2, 0xa3, 0xa4, 0x7, 0x21, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x41, 0x2, 
    0x2, 0xa5, 0xa6, 0x5, 0x1a, 0xe, 0x2, 0xa6, 0xa7, 0x7, 0x42, 0x2, 0x2, 
    0xa7, 0x10c, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x22, 0x2, 0x2, 0xa9, 
    0xaa, 0x7, 0x41, 0x2, 0x2, 0xaa, 0xab, 0x5, 0x1a, 0xe, 0x2, 0xab, 0xac, 
    0x7, 0x42, 0x2, 0x2, 0xac, 0x10c, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 
    0x23, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x41, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x1a, 
    0xe, 0x2, 0xb0, 0xb1, 0x7, 0x42, 0x2, 0x2, 0xb1, 0x10c, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xb3, 0x7, 0x24, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x41, 0x2, 0x2, 
    0xb4, 0xb5, 0x5, 0x1a, 0xe, 0x2, 0xb5, 0xb6, 0x7, 0x42, 0x2, 0x2, 0xb6, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x25, 0x2, 0x2, 0xb8, 0xb9, 
    0x7, 0x41, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x1a, 0xe, 0x2, 0xba, 0xbb, 0x7, 
    0x42, 0x2, 0x2, 0xbb, 0x10c, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x26, 
    0x2, 0x2, 0xbd, 0xbe, 0x7, 0x41, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0x1a, 0xe, 
    0x2, 0xbf, 0xc0, 0x7, 0x42, 0x2, 0x2, 0xc0, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0xc1, 0xc2, 0x7, 0x2a, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x41, 0x2, 0x2, 0xc3, 
    0xc4, 0x5, 0x1a, 0xe, 0x2, 0xc4, 0xc5, 0x7, 0x42, 0x2, 0x2, 0xc5, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x2b, 0x2, 0x2, 0xc7, 0xc8, 0x7, 
    0x41, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x1a, 0xe, 0x2, 0xc9, 0xca, 0x7, 0x42, 
    0x2, 0x2, 0xca, 0x10c, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x2c, 0x2, 
    0x2, 0xcc, 0xcd, 0x7, 0x41, 0x2, 0x2, 0xcd, 0xce, 0x5, 0x1a, 0xe, 0x2, 
    0xce, 0xcf, 0x7, 0x42, 0x2, 0x2, 0xcf, 0x10c, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xd1, 0x7, 0x2d, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x41, 0x2, 0x2, 0xd2, 0xd3, 
    0x5, 0x1a, 0xe, 0x2, 0xd3, 0xd4, 0x7, 0x42, 0x2, 0x2, 0xd4, 0x10c, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x2e, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x41, 
    0x2, 0x2, 0xd7, 0xd8, 0x5, 0x1a, 0xe, 0x2, 0xd8, 0xd9, 0x7, 0x42, 0x2, 
    0x2, 0xd9, 0x10c, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x2f, 0x2, 0x2, 
    0xdb, 0xdc, 0x7, 0x41, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x1a, 0xe, 0x2, 0xdd, 
    0xde, 0x7, 0x42, 0x2, 0x2, 0xde, 0x10c, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 
    0x7, 0x30, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x41, 0x2, 0x2, 0xe1, 0xe2, 0x5, 
    0x1a, 0xe, 0x2, 0xe2, 0xe3, 0x7, 0x42, 0x2, 0x2, 0xe3, 0x10c, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xe5, 0x7, 0x31, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x41, 0x2, 
    0x2, 0xe6, 0xe7, 0x5, 0x1a, 0xe, 0x2, 0xe7, 0xe8, 0x7, 0x42, 0x2, 0x2, 
    0xe8, 0x10c, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x27, 0x2, 0x2, 0xea, 
    0xeb, 0x7, 0x41, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x1a, 0xe, 0x2, 0xec, 0xed, 
    0x7, 0x42, 0x2, 0x2, 0xed, 0x10c, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x7, 
    0x28, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x41, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x1a, 
    0xe, 0x2, 0xf1, 0xf2, 0x7, 0x42, 0x2, 0x2, 0xf2, 0x10c, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf4, 0x7, 0x29, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x41, 0x2, 0x2, 
    0xf5, 0xf6, 0x5, 0x1a, 0xe, 0x2, 0xf6, 0xf7, 0x7, 0x42, 0x2, 0x2, 0xf7, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x32, 0x2, 0x2, 0xf9, 0xfa, 
    0x7, 0x41, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x1a, 0xe, 0x2, 0xfb, 0xfc, 0x7, 
    0x42, 0x2, 0x2, 0xfc, 0x10c, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x33, 
    0x2, 0x2, 0xfe, 0xff, 0x7, 0x41, 0x2, 0x2, 0xff, 0x100, 0x5, 0x1a, 0xe, 
    0x2, 0x100, 0x101, 0x7, 0x42, 0x2, 0x2, 0x101, 0x10c, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0x103, 0x7, 0x35, 0x2, 0x2, 0x103, 0x104, 0x7, 0x41, 0x2, 
    0x2, 0x104, 0x105, 0x5, 0x1a, 0xe, 0x2, 0x105, 0x106, 0x7, 0x45, 0x2, 
    0x2, 0x106, 0x107, 0x5, 0x1a, 0xe, 0x2, 0x107, 0x108, 0x7, 0x42, 0x2, 
    0x2, 0x108, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10c, 0x9, 0x5, 0x2, 
    0x2, 0x10a, 0x10c, 0x7, 0x3e, 0x2, 0x2, 0x10b, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x10b, 0x93, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0xa3, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xad, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0x10b, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xcb, 0x3, 0x2, 0x2, 
    0x2, 0x10b, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xd5, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0xda, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0xe4, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0x10b, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x102, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10a, 0x3, 0x2, 
    0x2, 0x2, 0x10c, 0x118, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0xc, 0x20, 
    0x2, 0x2, 0x10e, 0x10f, 0x7, 0x53, 0x2, 0x2, 0x10f, 0x117, 0x5, 0x1a, 
    0xe, 0x21, 0x110, 0x111, 0xc, 0x1d, 0x2, 0x2, 0x111, 0x112, 0x9, 0x7, 
    0x2, 0x2, 0x112, 0x117, 0x5, 0x1a, 0xe, 0x1e, 0x113, 0x114, 0xc, 0x1c, 
    0x2, 0x2, 0x114, 0x115, 0x9, 0x3, 0x2, 0x2, 0x115, 0x117, 0x5, 0x1a, 
    0xe, 0x1d, 0x116, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x116, 0x110, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x113, 0x3, 0x2, 0x2, 0x2, 0x117, 0x11a, 0x3, 0x2, 
    0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x119, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 
    0x2, 0x18, 0x20, 0x27, 0x31, 0x36, 0x3f, 0x44, 0x4b, 0x4f, 0x52, 0x57, 
    0x60, 0x65, 0x6d, 0x72, 0x79, 0x7d, 0x82, 0x86, 0x8b, 0x10b, 0x116, 
    0x118, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

definitionParser::Initializer definitionParser::_init;
