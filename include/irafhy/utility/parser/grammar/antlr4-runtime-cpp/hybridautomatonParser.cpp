
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/hybridautomaton.g4 by ANTLR 4.7.2


#include "hybridautomatonListener.h"
#include "hybridautomatonVisitor.h"

#include "hybridautomatonParser.h"


using namespace antlrcpp;
using namespace antlr4;

hybridautomatonParser::hybridautomatonParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

hybridautomatonParser::~hybridautomatonParser() {
  delete _interpreter;
}

std::string hybridautomatonParser::getGrammarFileName() const {
  return "hybridautomaton.g4";
}

const std::vector<std::string>& hybridautomatonParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& hybridautomatonParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- HybridautomatonidContext ------------------------------------------------------------------

hybridautomatonParser::HybridautomatonidContext::HybridautomatonidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::HybridautomatonidContext::KEY_NAME() {
  return getToken(hybridautomatonParser::KEY_NAME, 0);
}

std::vector<tree::TerminalNode *> hybridautomatonParser::HybridautomatonidContext::VARIABLE() {
  return getTokens(hybridautomatonParser::VARIABLE);
}

tree::TerminalNode* hybridautomatonParser::HybridautomatonidContext::VARIABLE(size_t i) {
  return getToken(hybridautomatonParser::VARIABLE, i);
}


size_t hybridautomatonParser::HybridautomatonidContext::getRuleIndex() const {
  return hybridautomatonParser::RuleHybridautomatonid;
}

void hybridautomatonParser::HybridautomatonidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHybridautomatonid(this);
}

void hybridautomatonParser::HybridautomatonidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHybridautomatonid(this);
}


antlrcpp::Any hybridautomatonParser::HybridautomatonidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitHybridautomatonid(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::HybridautomatonidContext* hybridautomatonParser::hybridautomatonid() {
  HybridautomatonidContext *_localctx = _tracker.createInstance<HybridautomatonidContext>(_ctx, getState());
  enterRule(_localctx, 0, hybridautomatonParser::RuleHybridautomatonid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(hybridautomatonParser::KEY_NAME);
    setState(58); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(57);
      match(hybridautomatonParser::VARIABLE);
      setState(60); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hybridautomatonParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariablesContext ------------------------------------------------------------------

hybridautomatonParser::VariablesContext::VariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::VariablesContext::KEY_VARIABLES() {
  return getToken(hybridautomatonParser::KEY_VARIABLES, 0);
}

tree::TerminalNode* hybridautomatonParser::VariablesContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* hybridautomatonParser::VariablesContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}

std::vector<tree::TerminalNode *> hybridautomatonParser::VariablesContext::VARIABLE() {
  return getTokens(hybridautomatonParser::VARIABLE);
}

tree::TerminalNode* hybridautomatonParser::VariablesContext::VARIABLE(size_t i) {
  return getToken(hybridautomatonParser::VARIABLE, i);
}

std::vector<tree::TerminalNode *> hybridautomatonParser::VariablesContext::COMMA() {
  return getTokens(hybridautomatonParser::COMMA);
}

tree::TerminalNode* hybridautomatonParser::VariablesContext::COMMA(size_t i) {
  return getToken(hybridautomatonParser::COMMA, i);
}


size_t hybridautomatonParser::VariablesContext::getRuleIndex() const {
  return hybridautomatonParser::RuleVariables;
}

void hybridautomatonParser::VariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariables(this);
}

void hybridautomatonParser::VariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariables(this);
}


antlrcpp::Any hybridautomatonParser::VariablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitVariables(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::VariablesContext* hybridautomatonParser::variables() {
  VariablesContext *_localctx = _tracker.createInstance<VariablesContext>(_ctx, getState());
  enterRule(_localctx, 2, hybridautomatonParser::RuleVariables);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(hybridautomatonParser::KEY_VARIABLES);
    setState(63);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(65);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(64);
      match(hybridautomatonParser::VARIABLE);
      break;
    }

    }
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hybridautomatonParser::VARIABLE

    || _la == hybridautomatonParser::COMMA) {
      setState(68);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == hybridautomatonParser::COMMA) {
        setState(67);
        match(hybridautomatonParser::COMMA);
      }
      setState(70);
      match(hybridautomatonParser::VARIABLE);
      setState(75);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(76);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HybridautomatonContext ------------------------------------------------------------------

hybridautomatonParser::HybridautomatonContext::HybridautomatonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::HybridautomatonContext::KEY_HYBRID_AUTOMATON() {
  return getToken(hybridautomatonParser::KEY_HYBRID_AUTOMATON, 0);
}

tree::TerminalNode* hybridautomatonParser::HybridautomatonContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

hybridautomatonParser::HybridautomatonidContext* hybridautomatonParser::HybridautomatonContext::hybridautomatonid() {
  return getRuleContext<hybridautomatonParser::HybridautomatonidContext>(0);
}

hybridautomatonParser::VariablesContext* hybridautomatonParser::HybridautomatonContext::variables() {
  return getRuleContext<hybridautomatonParser::VariablesContext>(0);
}

hybridautomatonParser::LocationsContext* hybridautomatonParser::HybridautomatonContext::locations() {
  return getRuleContext<hybridautomatonParser::LocationsContext>(0);
}

hybridautomatonParser::TransitionsContext* hybridautomatonParser::HybridautomatonContext::transitions() {
  return getRuleContext<hybridautomatonParser::TransitionsContext>(0);
}

tree::TerminalNode* hybridautomatonParser::HybridautomatonContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}


size_t hybridautomatonParser::HybridautomatonContext::getRuleIndex() const {
  return hybridautomatonParser::RuleHybridautomaton;
}

void hybridautomatonParser::HybridautomatonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHybridautomaton(this);
}

void hybridautomatonParser::HybridautomatonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHybridautomaton(this);
}


antlrcpp::Any hybridautomatonParser::HybridautomatonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitHybridautomaton(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::HybridautomatonContext* hybridautomatonParser::hybridautomaton() {
  HybridautomatonContext *_localctx = _tracker.createInstance<HybridautomatonContext>(_ctx, getState());
  enterRule(_localctx, 4, hybridautomatonParser::RuleHybridautomaton);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(hybridautomatonParser::KEY_HYBRID_AUTOMATON);
    setState(79);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(80);
    hybridautomatonid();
    setState(81);
    variables();
    setState(82);
    locations();
    setState(83);
    transitions();
    setState(84);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

hybridautomatonParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::ConditionContext::KEY_CONDITION() {
  return getToken(hybridautomatonParser::KEY_CONDITION, 0);
}

tree::TerminalNode* hybridautomatonParser::ConditionContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* hybridautomatonParser::ConditionContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}

hybridautomatonParser::IntervalhullContext* hybridautomatonParser::ConditionContext::intervalhull() {
  return getRuleContext<hybridautomatonParser::IntervalhullContext>(0);
}

hybridautomatonParser::PolytopeContext* hybridautomatonParser::ConditionContext::polytope() {
  return getRuleContext<hybridautomatonParser::PolytopeContext>(0);
}


size_t hybridautomatonParser::ConditionContext::getRuleIndex() const {
  return hybridautomatonParser::RuleCondition;
}

void hybridautomatonParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void hybridautomatonParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any hybridautomatonParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::ConditionContext* hybridautomatonParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 6, hybridautomatonParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(hybridautomatonParser::KEY_CONDITION);
    setState(87);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(90);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hybridautomatonParser::KEY_INTERVAL_HULL: {
        setState(88);
        intervalhull();
        break;
      }

      case hybridautomatonParser::KEY_POLYTOPE: {
        setState(89);
        polytope();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(92);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PolytopeContext ------------------------------------------------------------------

hybridautomatonParser::PolytopeContext::PolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::PolytopeContext::KEY_POLYTOPE() {
  return getToken(hybridautomatonParser::KEY_POLYTOPE, 0);
}

hybridautomatonParser::HpolytopeContext* hybridautomatonParser::PolytopeContext::hpolytope() {
  return getRuleContext<hybridautomatonParser::HpolytopeContext>(0);
}

hybridautomatonParser::VpolytopeContext* hybridautomatonParser::PolytopeContext::vpolytope() {
  return getRuleContext<hybridautomatonParser::VpolytopeContext>(0);
}


size_t hybridautomatonParser::PolytopeContext::getRuleIndex() const {
  return hybridautomatonParser::RulePolytope;
}

void hybridautomatonParser::PolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPolytope(this);
}

void hybridautomatonParser::PolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPolytope(this);
}


antlrcpp::Any hybridautomatonParser::PolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitPolytope(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::PolytopeContext* hybridautomatonParser::polytope() {
  PolytopeContext *_localctx = _tracker.createInstance<PolytopeContext>(_ctx, getState());
  enterRule(_localctx, 8, hybridautomatonParser::RulePolytope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(hybridautomatonParser::KEY_POLYTOPE);
    setState(97);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(95);
      hpolytope();
      break;
    }

    case 2: {
      setState(96);
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

hybridautomatonParser::HpolytopeContext::HpolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::HpolytopeContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

hybridautomatonParser::MatrixContext* hybridautomatonParser::HpolytopeContext::matrix() {
  return getRuleContext<hybridautomatonParser::MatrixContext>(0);
}

hybridautomatonParser::VectorContext* hybridautomatonParser::HpolytopeContext::vector() {
  return getRuleContext<hybridautomatonParser::VectorContext>(0);
}

tree::TerminalNode* hybridautomatonParser::HpolytopeContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}


size_t hybridautomatonParser::HpolytopeContext::getRuleIndex() const {
  return hybridautomatonParser::RuleHpolytope;
}

void hybridautomatonParser::HpolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHpolytope(this);
}

void hybridautomatonParser::HpolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHpolytope(this);
}


antlrcpp::Any hybridautomatonParser::HpolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitHpolytope(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::HpolytopeContext* hybridautomatonParser::hpolytope() {
  HpolytopeContext *_localctx = _tracker.createInstance<HpolytopeContext>(_ctx, getState());
  enterRule(_localctx, 10, hybridautomatonParser::RuleHpolytope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(100);
    matrix();
    setState(101);
    vector();
    setState(102);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VpolytopeContext ------------------------------------------------------------------

hybridautomatonParser::VpolytopeContext::VpolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::VpolytopeContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

std::vector<hybridautomatonParser::VectorContext *> hybridautomatonParser::VpolytopeContext::vector() {
  return getRuleContexts<hybridautomatonParser::VectorContext>();
}

hybridautomatonParser::VectorContext* hybridautomatonParser::VpolytopeContext::vector(size_t i) {
  return getRuleContext<hybridautomatonParser::VectorContext>(i);
}

tree::TerminalNode* hybridautomatonParser::VpolytopeContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}

std::vector<tree::TerminalNode *> hybridautomatonParser::VpolytopeContext::COMMA() {
  return getTokens(hybridautomatonParser::COMMA);
}

tree::TerminalNode* hybridautomatonParser::VpolytopeContext::COMMA(size_t i) {
  return getToken(hybridautomatonParser::COMMA, i);
}


size_t hybridautomatonParser::VpolytopeContext::getRuleIndex() const {
  return hybridautomatonParser::RuleVpolytope;
}

void hybridautomatonParser::VpolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVpolytope(this);
}

void hybridautomatonParser::VpolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVpolytope(this);
}


antlrcpp::Any hybridautomatonParser::VpolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitVpolytope(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::VpolytopeContext* hybridautomatonParser::vpolytope() {
  VpolytopeContext *_localctx = _tracker.createInstance<VpolytopeContext>(_ctx, getState());
  enterRule(_localctx, 12, hybridautomatonParser::RuleVpolytope);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(105);
    vector();
    setState(110); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(107);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == hybridautomatonParser::COMMA) {
        setState(106);
        match(hybridautomatonParser::COMMA);
      }
      setState(109);
      vector();
      setState(112); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hybridautomatonParser::LEFTROUNDBRACKET

    || _la == hybridautomatonParser::COMMA);
    setState(114);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatrixContext ------------------------------------------------------------------

hybridautomatonParser::MatrixContext::MatrixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::MatrixContext::KEY_MATRIX() {
  return getToken(hybridautomatonParser::KEY_MATRIX, 0);
}

tree::TerminalNode* hybridautomatonParser::MatrixContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

std::vector<hybridautomatonParser::VectorContext *> hybridautomatonParser::MatrixContext::vector() {
  return getRuleContexts<hybridautomatonParser::VectorContext>();
}

hybridautomatonParser::VectorContext* hybridautomatonParser::MatrixContext::vector(size_t i) {
  return getRuleContext<hybridautomatonParser::VectorContext>(i);
}

tree::TerminalNode* hybridautomatonParser::MatrixContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}

tree::TerminalNode* hybridautomatonParser::MatrixContext::KEY_ROW_MAJOR_ORDER() {
  return getToken(hybridautomatonParser::KEY_ROW_MAJOR_ORDER, 0);
}

tree::TerminalNode* hybridautomatonParser::MatrixContext::KEY_COL_MAJOR_ORDER() {
  return getToken(hybridautomatonParser::KEY_COL_MAJOR_ORDER, 0);
}

std::vector<tree::TerminalNode *> hybridautomatonParser::MatrixContext::COMMA() {
  return getTokens(hybridautomatonParser::COMMA);
}

tree::TerminalNode* hybridautomatonParser::MatrixContext::COMMA(size_t i) {
  return getToken(hybridautomatonParser::COMMA, i);
}


size_t hybridautomatonParser::MatrixContext::getRuleIndex() const {
  return hybridautomatonParser::RuleMatrix;
}

void hybridautomatonParser::MatrixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrix(this);
}

void hybridautomatonParser::MatrixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrix(this);
}


antlrcpp::Any hybridautomatonParser::MatrixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitMatrix(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::MatrixContext* hybridautomatonParser::matrix() {
  MatrixContext *_localctx = _tracker.createInstance<MatrixContext>(_ctx, getState());
  enterRule(_localctx, 14, hybridautomatonParser::RuleMatrix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(hybridautomatonParser::KEY_MATRIX);
    setState(117);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(118);
    dynamic_cast<MatrixContext *>(_localctx)->MAJOR_ORDER = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == hybridautomatonParser::KEY_ROW_MAJOR_ORDER

    || _la == hybridautomatonParser::KEY_COL_MAJOR_ORDER)) {
      dynamic_cast<MatrixContext *>(_localctx)->MAJOR_ORDER = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(119);
    vector();
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hybridautomatonParser::LEFTROUNDBRACKET

    || _la == hybridautomatonParser::COMMA) {
      setState(121);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == hybridautomatonParser::COMMA) {
        setState(120);
        match(hybridautomatonParser::COMMA);
      }
      setState(123);
      vector();
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(129);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorContext ------------------------------------------------------------------

hybridautomatonParser::VectorContext::VectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::VectorContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

std::vector<hybridautomatonParser::Const_expressionContext *> hybridautomatonParser::VectorContext::const_expression() {
  return getRuleContexts<hybridautomatonParser::Const_expressionContext>();
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::VectorContext::const_expression(size_t i) {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(i);
}

tree::TerminalNode* hybridautomatonParser::VectorContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

std::vector<tree::TerminalNode *> hybridautomatonParser::VectorContext::COMMA() {
  return getTokens(hybridautomatonParser::COMMA);
}

tree::TerminalNode* hybridautomatonParser::VectorContext::COMMA(size_t i) {
  return getToken(hybridautomatonParser::COMMA, i);
}


size_t hybridautomatonParser::VectorContext::getRuleIndex() const {
  return hybridautomatonParser::RuleVector;
}

void hybridautomatonParser::VectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVector(this);
}

void hybridautomatonParser::VectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVector(this);
}


antlrcpp::Any hybridautomatonParser::VectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitVector(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::VectorContext* hybridautomatonParser::vector() {
  VectorContext *_localctx = _tracker.createInstance<VectorContext>(_ctx, getState());
  enterRule(_localctx, 16, hybridautomatonParser::RuleVector);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(hybridautomatonParser::LEFTROUNDBRACKET);
    setState(132);
    const_expression(0);
    setState(137);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hybridautomatonParser::COMMA) {
      setState(133);
      match(hybridautomatonParser::COMMA);
      setState(134);
      const_expression(0);
      setState(139);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(140);
    match(hybridautomatonParser::RIGHTROUNDBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalhullContext ------------------------------------------------------------------

hybridautomatonParser::IntervalhullContext::IntervalhullContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::IntervalhullContext::KEY_INTERVAL_HULL() {
  return getToken(hybridautomatonParser::KEY_INTERVAL_HULL, 0);
}

tree::TerminalNode* hybridautomatonParser::IntervalhullContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

std::vector<hybridautomatonParser::IntervalContext *> hybridautomatonParser::IntervalhullContext::interval() {
  return getRuleContexts<hybridautomatonParser::IntervalContext>();
}

hybridautomatonParser::IntervalContext* hybridautomatonParser::IntervalhullContext::interval(size_t i) {
  return getRuleContext<hybridautomatonParser::IntervalContext>(i);
}

tree::TerminalNode* hybridautomatonParser::IntervalhullContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}

std::vector<tree::TerminalNode *> hybridautomatonParser::IntervalhullContext::COMMA() {
  return getTokens(hybridautomatonParser::COMMA);
}

tree::TerminalNode* hybridautomatonParser::IntervalhullContext::COMMA(size_t i) {
  return getToken(hybridautomatonParser::COMMA, i);
}


size_t hybridautomatonParser::IntervalhullContext::getRuleIndex() const {
  return hybridautomatonParser::RuleIntervalhull;
}

void hybridautomatonParser::IntervalhullContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntervalhull(this);
}

void hybridautomatonParser::IntervalhullContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntervalhull(this);
}


antlrcpp::Any hybridautomatonParser::IntervalhullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitIntervalhull(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::IntervalhullContext* hybridautomatonParser::intervalhull() {
  IntervalhullContext *_localctx = _tracker.createInstance<IntervalhullContext>(_ctx, getState());
  enterRule(_localctx, 18, hybridautomatonParser::RuleIntervalhull);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(hybridautomatonParser::KEY_INTERVAL_HULL);
    setState(143);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(144);
    interval();
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hybridautomatonParser::LEFTSQUAREBRACKET

    || _la == hybridautomatonParser::COMMA) {
      setState(146);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == hybridautomatonParser::COMMA) {
        setState(145);
        match(hybridautomatonParser::COMMA);
      }
      setState(148);
      interval();
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintsContext ------------------------------------------------------------------

hybridautomatonParser::ConstraintsContext::ConstraintsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hybridautomatonParser::ConstraintContext *> hybridautomatonParser::ConstraintsContext::constraint() {
  return getRuleContexts<hybridautomatonParser::ConstraintContext>();
}

hybridautomatonParser::ConstraintContext* hybridautomatonParser::ConstraintsContext::constraint(size_t i) {
  return getRuleContext<hybridautomatonParser::ConstraintContext>(i);
}


size_t hybridautomatonParser::ConstraintsContext::getRuleIndex() const {
  return hybridautomatonParser::RuleConstraints;
}

void hybridautomatonParser::ConstraintsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraints(this);
}

void hybridautomatonParser::ConstraintsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraints(this);
}


antlrcpp::Any hybridautomatonParser::ConstraintsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitConstraints(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::ConstraintsContext* hybridautomatonParser::constraints() {
  ConstraintsContext *_localctx = _tracker.createInstance<ConstraintsContext>(_ctx, getState());
  enterRule(_localctx, 20, hybridautomatonParser::RuleConstraints);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(156);
      constraint();
      setState(159); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 31) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 31)) & ((1ULL << (hybridautomatonParser::KEY_SIN_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_ARCSIN_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_COS_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_ARCCOS_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_TAN_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_ARCTAN_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_COT_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_ARCCOT_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_LN_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_LOG_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_NATURAL_EXP_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_SINH_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_ARCSINH_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_COSH_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_ARCCOSH_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_TANH_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_ARCTANH_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_COTH_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_ARCCOTH_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_SQR_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_SQRT_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::KEY_POWER_FUNCTION - 31))
      | (1ULL << (hybridautomatonParser::SCINUM - 31))
      | (1ULL << (hybridautomatonParser::NUMBER - 31))
      | (1ULL << (hybridautomatonParser::VARIABLE - 31))
      | (1ULL << (hybridautomatonParser::LEFTROUNDBRACKET - 31))
      | (1ULL << (hybridautomatonParser::PLUS - 31))
      | (1ULL << (hybridautomatonParser::MINUS - 31)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintContext ------------------------------------------------------------------

hybridautomatonParser::ConstraintContext::ConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::ConstraintContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::ConstraintContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::ConstraintContext::EQUAL() {
  return getToken(hybridautomatonParser::EQUAL, 0);
}

tree::TerminalNode* hybridautomatonParser::ConstraintContext::UNEQUAL() {
  return getToken(hybridautomatonParser::UNEQUAL, 0);
}

tree::TerminalNode* hybridautomatonParser::ConstraintContext::GEQ() {
  return getToken(hybridautomatonParser::GEQ, 0);
}

tree::TerminalNode* hybridautomatonParser::ConstraintContext::LEQ() {
  return getToken(hybridautomatonParser::LEQ, 0);
}

tree::TerminalNode* hybridautomatonParser::ConstraintContext::LSS() {
  return getToken(hybridautomatonParser::LSS, 0);
}

tree::TerminalNode* hybridautomatonParser::ConstraintContext::GTR() {
  return getToken(hybridautomatonParser::GTR, 0);
}


size_t hybridautomatonParser::ConstraintContext::getRuleIndex() const {
  return hybridautomatonParser::RuleConstraint;
}

void hybridautomatonParser::ConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraint(this);
}

void hybridautomatonParser::ConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraint(this);
}


antlrcpp::Any hybridautomatonParser::ConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitConstraint(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::ConstraintContext* hybridautomatonParser::constraint() {
  ConstraintContext *_localctx = _tracker.createInstance<ConstraintContext>(_ctx, getState());
  enterRule(_localctx, 22, hybridautomatonParser::RuleConstraint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    expression(0);
    setState(162);
    dynamic_cast<ConstraintContext *>(_localctx)->RELATION = _input->LT(1);
    _la = _input->LA(1);
    if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (hybridautomatonParser::EQUAL - 70))
      | (1ULL << (hybridautomatonParser::UNEQUAL - 70))
      | (1ULL << (hybridautomatonParser::GEQ - 70))
      | (1ULL << (hybridautomatonParser::LEQ - 70))
      | (1ULL << (hybridautomatonParser::LSS - 70))
      | (1ULL << (hybridautomatonParser::GTR - 70)))) != 0))) {
      dynamic_cast<ConstraintContext *>(_localctx)->RELATION = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(163);
    const_expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SystemContext ------------------------------------------------------------------

hybridautomatonParser::SystemContext::SystemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hybridautomatonParser::FormulaContext *> hybridautomatonParser::SystemContext::formula() {
  return getRuleContexts<hybridautomatonParser::FormulaContext>();
}

hybridautomatonParser::FormulaContext* hybridautomatonParser::SystemContext::formula(size_t i) {
  return getRuleContext<hybridautomatonParser::FormulaContext>(i);
}


size_t hybridautomatonParser::SystemContext::getRuleIndex() const {
  return hybridautomatonParser::RuleSystem;
}

void hybridautomatonParser::SystemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSystem(this);
}

void hybridautomatonParser::SystemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSystem(this);
}


antlrcpp::Any hybridautomatonParser::SystemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitSystem(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::SystemContext* hybridautomatonParser::system() {
  SystemContext *_localctx = _tracker.createInstance<SystemContext>(_ctx, getState());
  enterRule(_localctx, 24, hybridautomatonParser::RuleSystem);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(165);
      formula();
      setState(168); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hybridautomatonParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

hybridautomatonParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::FormulaContext::VARIABLE() {
  return getToken(hybridautomatonParser::VARIABLE, 0);
}

tree::TerminalNode* hybridautomatonParser::FormulaContext::ASSIGN() {
  return getToken(hybridautomatonParser::ASSIGN, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::FormulaContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::FormulaContext::DERIVATIVE() {
  return getToken(hybridautomatonParser::DERIVATIVE, 0);
}

hybridautomatonParser::IntervalContext* hybridautomatonParser::FormulaContext::interval() {
  return getRuleContext<hybridautomatonParser::IntervalContext>(0);
}


size_t hybridautomatonParser::FormulaContext::getRuleIndex() const {
  return hybridautomatonParser::RuleFormula;
}

void hybridautomatonParser::FormulaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormula(this);
}

void hybridautomatonParser::FormulaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormula(this);
}


antlrcpp::Any hybridautomatonParser::FormulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitFormula(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::FormulaContext* hybridautomatonParser::formula() {
  FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, getState());
  enterRule(_localctx, 26, hybridautomatonParser::RuleFormula);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(hybridautomatonParser::VARIABLE);
    setState(172);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == hybridautomatonParser::DERIVATIVE) {
      setState(171);
      match(hybridautomatonParser::DERIVATIVE);
    }
    setState(174);
    match(hybridautomatonParser::ASSIGN);
    setState(175);
    expression(0);
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == hybridautomatonParser::LEFTSQUAREBRACKET) {
      setState(176);
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

hybridautomatonParser::IntervalContext::IntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::IntervalContext::LEFTSQUAREBRACKET() {
  return getToken(hybridautomatonParser::LEFTSQUAREBRACKET, 0);
}

std::vector<hybridautomatonParser::Const_expressionContext *> hybridautomatonParser::IntervalContext::const_expression() {
  return getRuleContexts<hybridautomatonParser::Const_expressionContext>();
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::IntervalContext::const_expression(size_t i) {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(i);
}

tree::TerminalNode* hybridautomatonParser::IntervalContext::COMMA() {
  return getToken(hybridautomatonParser::COMMA, 0);
}

tree::TerminalNode* hybridautomatonParser::IntervalContext::RIGHTSQUAREBRACKET() {
  return getToken(hybridautomatonParser::RIGHTSQUAREBRACKET, 0);
}


size_t hybridautomatonParser::IntervalContext::getRuleIndex() const {
  return hybridautomatonParser::RuleInterval;
}

void hybridautomatonParser::IntervalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterval(this);
}

void hybridautomatonParser::IntervalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterval(this);
}


antlrcpp::Any hybridautomatonParser::IntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitInterval(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::IntervalContext* hybridautomatonParser::interval() {
  IntervalContext *_localctx = _tracker.createInstance<IntervalContext>(_ctx, getState());
  enterRule(_localctx, 28, hybridautomatonParser::RuleInterval);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(hybridautomatonParser::LEFTSQUAREBRACKET);
    setState(180);
    const_expression(0);
    setState(181);
    match(hybridautomatonParser::COMMA);
    setState(182);
    const_expression(0);
    setState(183);
    match(hybridautomatonParser::RIGHTSQUAREBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_expressionContext ------------------------------------------------------------------

hybridautomatonParser::Const_expressionContext::Const_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t hybridautomatonParser::Const_expressionContext::getRuleIndex() const {
  return hybridautomatonParser::RuleConst_expression;
}

void hybridautomatonParser::Const_expressionContext::copyFrom(Const_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SqrtConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::SqrtConstExpContext::KEY_SQRT_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_SQRT_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::SqrtConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::SqrtConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::SqrtConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::SqrtConstExpContext::SqrtConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::SqrtConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrtConstExp(this);
}
void hybridautomatonParser::SqrtConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrtConstExp(this);
}

antlrcpp::Any hybridautomatonParser::SqrtConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitSqrtConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcothConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AcothConstExpContext::KEY_COTH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_COTH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AcothConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::AcothConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AcothConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AcothConstExpContext::AcothConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AcothConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcothConstExp(this);
}
void hybridautomatonParser::AcothConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcothConstExp(this);
}

antlrcpp::Any hybridautomatonParser::AcothConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAcothConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::LogConstExpContext::KEY_LOG_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_LOG_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::LogConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::LogConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::LogConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::LogConstExpContext::LogConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::LogConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogConstExp(this);
}
void hybridautomatonParser::LogConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogConstExp(this);
}

antlrcpp::Any hybridautomatonParser::LogConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitLogConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TanhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::TanhConstExpContext::KEY_TANH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_TANH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::TanhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::TanhConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::TanhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::TanhConstExpContext::TanhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::TanhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanhConstExp(this);
}
void hybridautomatonParser::TanhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanhConstExp(this);
}

antlrcpp::Any hybridautomatonParser::TanhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitTanhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::PowConstExpContext::KEY_POWER_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_POWER_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::PowConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

std::vector<hybridautomatonParser::Const_expressionContext *> hybridautomatonParser::PowConstExpContext::const_expression() {
  return getRuleContexts<hybridautomatonParser::Const_expressionContext>();
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::PowConstExpContext::const_expression(size_t i) {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(i);
}

tree::TerminalNode* hybridautomatonParser::PowConstExpContext::COMMA() {
  return getToken(hybridautomatonParser::COMMA, 0);
}

tree::TerminalNode* hybridautomatonParser::PowConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::PowConstExpContext::PowConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::PowConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowConstExp(this);
}
void hybridautomatonParser::PowConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowConstExp(this);
}

antlrcpp::Any hybridautomatonParser::PowConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitPowConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PosConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::PosConstExpContext::PLUS() {
  return getToken(hybridautomatonParser::PLUS, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::PosConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

hybridautomatonParser::PosConstExpContext::PosConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::PosConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosConstExp(this);
}
void hybridautomatonParser::PosConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosConstExp(this);
}

antlrcpp::Any hybridautomatonParser::PosConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitPosConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AtanhConstExpContext::KEY_ARCTANH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCTANH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AtanhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::AtanhConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AtanhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AtanhConstExpContext::AtanhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AtanhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanhConstExp(this);
}
void hybridautomatonParser::AtanhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanhConstExp(this);
}

antlrcpp::Any hybridautomatonParser::AtanhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAtanhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::SqrConstExpContext::KEY_SQR_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_SQR_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::SqrConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::SqrConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::SqrConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::SqrConstExpContext::SqrConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::SqrConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrConstExp(this);
}
void hybridautomatonParser::SqrConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrConstExp(this);
}

antlrcpp::Any hybridautomatonParser::SqrConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitSqrConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpBraContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::ConstExpBraContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::ConstExpBraContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::ConstExpBraContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::ConstExpBraContext::ConstExpBraContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::ConstExpBraContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExpBra(this);
}
void hybridautomatonParser::ConstExpBraContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExpBra(this);
}

antlrcpp::Any hybridautomatonParser::ConstExpBraContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitConstExpBra(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::SinhConstExpContext::KEY_SINH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_SINH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::SinhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::SinhConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::SinhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::SinhConstExpContext::SinhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::SinhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinhConstExp(this);
}
void hybridautomatonParser::SinhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinhConstExp(this);
}

antlrcpp::Any hybridautomatonParser::SinhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitSinhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AtanConstExpContext::KEY_ARCTAN_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCTAN_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AtanConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::AtanConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AtanConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AtanConstExpContext::AtanConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AtanConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanConstExp(this);
}
void hybridautomatonParser::AtanConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanConstExp(this);
}

antlrcpp::Any hybridautomatonParser::AtanConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAtanConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AsinhConstExpContext::KEY_ARCSINH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCSINH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AsinhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::AsinhConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AsinhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AsinhConstExpContext::AsinhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AsinhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinhConstExp(this);
}
void hybridautomatonParser::AsinhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinhConstExp(this);
}

antlrcpp::Any hybridautomatonParser::AsinhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAsinhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::ConstExpContext::NUMBER() {
  return getToken(hybridautomatonParser::NUMBER, 0);
}

tree::TerminalNode* hybridautomatonParser::ConstExpContext::SCINUM() {
  return getToken(hybridautomatonParser::SCINUM, 0);
}

tree::TerminalNode* hybridautomatonParser::ConstExpContext::KEY_INFINITY() {
  return getToken(hybridautomatonParser::KEY_INFINITY, 0);
}

hybridautomatonParser::ConstExpContext::ConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::ConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExp(this);
}
void hybridautomatonParser::ConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExp(this);
}

antlrcpp::Any hybridautomatonParser::ConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::NegConstExpContext::MINUS() {
  return getToken(hybridautomatonParser::MINUS, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::NegConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

hybridautomatonParser::NegConstExpContext::NegConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::NegConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegConstExp(this);
}
void hybridautomatonParser::NegConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegConstExp(this);
}

antlrcpp::Any hybridautomatonParser::NegConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitNegConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AsinConstExpContext::KEY_ARCSIN_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCSIN_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AsinConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::AsinConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AsinConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AsinConstExpContext::AsinConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AsinConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinConstExp(this);
}
void hybridautomatonParser::AsinConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinConstExp(this);
}

antlrcpp::Any hybridautomatonParser::AsinConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAsinConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TanConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::TanConstExpContext::KEY_TAN_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_TAN_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::TanConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::TanConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::TanConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::TanConstExpContext::TanConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::TanConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanConstExp(this);
}
void hybridautomatonParser::TanConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanConstExp(this);
}

antlrcpp::Any hybridautomatonParser::TanConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitTanConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NexpConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::NexpConstExpContext::KEY_NATURAL_EXP_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_NATURAL_EXP_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::NexpConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::NexpConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::NexpConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::NexpConstExpContext::NexpConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::NexpConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNexpConstExp(this);
}
void hybridautomatonParser::NexpConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNexpConstExp(this);
}

antlrcpp::Any hybridautomatonParser::NexpConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitNexpConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CosConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::CosConstExpContext::KEY_COS_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_COS_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::CosConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::CosConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::CosConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::CosConstExpContext::CosConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::CosConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCosConstExp(this);
}
void hybridautomatonParser::CosConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCosConstExp(this);
}

antlrcpp::Any hybridautomatonParser::CosConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitCosConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpMulDivContext ------------------------------------------------------------------

std::vector<hybridautomatonParser::Const_expressionContext *> hybridautomatonParser::ConstExpMulDivContext::const_expression() {
  return getRuleContexts<hybridautomatonParser::Const_expressionContext>();
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::ConstExpMulDivContext::const_expression(size_t i) {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(i);
}

tree::TerminalNode* hybridautomatonParser::ConstExpMulDivContext::MULTIPLY() {
  return getToken(hybridautomatonParser::MULTIPLY, 0);
}

tree::TerminalNode* hybridautomatonParser::ConstExpMulDivContext::DIVIDE() {
  return getToken(hybridautomatonParser::DIVIDE, 0);
}

hybridautomatonParser::ConstExpMulDivContext::ConstExpMulDivContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::ConstExpMulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExpMulDiv(this);
}
void hybridautomatonParser::ConstExpMulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExpMulDiv(this);
}

antlrcpp::Any hybridautomatonParser::ConstExpMulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitConstExpMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpConstExpContext ------------------------------------------------------------------

std::vector<hybridautomatonParser::Const_expressionContext *> hybridautomatonParser::ExpConstExpContext::const_expression() {
  return getRuleContexts<hybridautomatonParser::Const_expressionContext>();
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::ExpConstExpContext::const_expression(size_t i) {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(i);
}

tree::TerminalNode* hybridautomatonParser::ExpConstExpContext::EXPONENT() {
  return getToken(hybridautomatonParser::EXPONENT, 0);
}

hybridautomatonParser::ExpConstExpContext::ExpConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::ExpConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpConstExp(this);
}
void hybridautomatonParser::ExpConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpConstExp(this);
}

antlrcpp::Any hybridautomatonParser::ExpConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitExpConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CotConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::CotConstExpContext::KEY_COT_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_COT_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::CotConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::CotConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::CotConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::CotConstExpContext::CotConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::CotConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCotConstExp(this);
}
void hybridautomatonParser::CotConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCotConstExp(this);
}

antlrcpp::Any hybridautomatonParser::CotConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitCotConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CoshConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::CoshConstExpContext::KEY_COSH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_COSH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::CoshConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::CoshConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::CoshConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::CoshConstExpContext::CoshConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::CoshConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoshConstExp(this);
}
void hybridautomatonParser::CoshConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoshConstExp(this);
}

antlrcpp::Any hybridautomatonParser::CoshConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitCoshConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcoshConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AcoshConstExpContext::KEY_ARCCOSH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCCOSH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AcoshConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::AcoshConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AcoshConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AcoshConstExpContext::AcoshConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AcoshConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcoshConstExp(this);
}
void hybridautomatonParser::AcoshConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcoshConstExp(this);
}

antlrcpp::Any hybridautomatonParser::AcoshConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAcoshConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::SinConstExpContext::KEY_SIN_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_SIN_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::SinConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::SinConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::SinConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::SinConstExpContext::SinConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::SinConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinConstExp(this);
}
void hybridautomatonParser::SinConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinConstExp(this);
}

antlrcpp::Any hybridautomatonParser::SinConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitSinConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcosConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AcosConstExpContext::KEY_ARCCOS_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCCOS_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AcosConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::AcosConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AcosConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AcosConstExpContext::AcosConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AcosConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcosConstExp(this);
}
void hybridautomatonParser::AcosConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcosConstExp(this);
}

antlrcpp::Any hybridautomatonParser::AcosConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAcosConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpAddSubContext ------------------------------------------------------------------

std::vector<hybridautomatonParser::Const_expressionContext *> hybridautomatonParser::ConstExpAddSubContext::const_expression() {
  return getRuleContexts<hybridautomatonParser::Const_expressionContext>();
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::ConstExpAddSubContext::const_expression(size_t i) {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(i);
}

tree::TerminalNode* hybridautomatonParser::ConstExpAddSubContext::PLUS() {
  return getToken(hybridautomatonParser::PLUS, 0);
}

tree::TerminalNode* hybridautomatonParser::ConstExpAddSubContext::MINUS() {
  return getToken(hybridautomatonParser::MINUS, 0);
}

hybridautomatonParser::ConstExpAddSubContext::ConstExpAddSubContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::ConstExpAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExpAddSub(this);
}
void hybridautomatonParser::ConstExpAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExpAddSub(this);
}

antlrcpp::Any hybridautomatonParser::ConstExpAddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitConstExpAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LnConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::LnConstExpContext::KEY_LN_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_LN_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::LnConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::LnConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::LnConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::LnConstExpContext::LnConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::LnConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLnConstExp(this);
}
void hybridautomatonParser::LnConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLnConstExp(this);
}

antlrcpp::Any hybridautomatonParser::LnConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitLnConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcotConstExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AcotConstExpContext::KEY_ARCCOT_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCCOT_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AcotConstExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::AcotConstExpContext::const_expression() {
  return getRuleContext<hybridautomatonParser::Const_expressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AcotConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AcotConstExpContext::AcotConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AcotConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcotConstExp(this);
}
void hybridautomatonParser::AcotConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcotConstExp(this);
}

antlrcpp::Any hybridautomatonParser::AcotConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAcotConstExp(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::const_expression() {
   return const_expression(0);
}

hybridautomatonParser::Const_expressionContext* hybridautomatonParser::const_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  hybridautomatonParser::Const_expressionContext *_localctx = _tracker.createInstance<Const_expressionContext>(_ctx, parentState);
  hybridautomatonParser::Const_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, hybridautomatonParser::RuleConst_expression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(302);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hybridautomatonParser::PLUS: {
        _localctx = _tracker.createInstance<PosConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(186);
        match(hybridautomatonParser::PLUS);
        setState(187);
        const_expression(27);
        break;
      }

      case hybridautomatonParser::MINUS: {
        _localctx = _tracker.createInstance<NegConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(188);
        match(hybridautomatonParser::MINUS);
        setState(189);
        const_expression(26);
        break;
      }

      case hybridautomatonParser::LEFTROUNDBRACKET: {
        _localctx = _tracker.createInstance<ConstExpBraContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(190);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(191);
        const_expression(0);
        setState(192);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_SIN_FUNCTION: {
        _localctx = _tracker.createInstance<SinConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(194);
        match(hybridautomatonParser::KEY_SIN_FUNCTION);
        setState(195);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(196);
        const_expression(0);
        setState(197);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCSIN_FUNCTION: {
        _localctx = _tracker.createInstance<AsinConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(199);
        match(hybridautomatonParser::KEY_ARCSIN_FUNCTION);
        setState(200);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(201);
        const_expression(0);
        setState(202);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_COS_FUNCTION: {
        _localctx = _tracker.createInstance<CosConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(204);
        match(hybridautomatonParser::KEY_COS_FUNCTION);
        setState(205);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(206);
        const_expression(0);
        setState(207);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCCOS_FUNCTION: {
        _localctx = _tracker.createInstance<AcosConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(209);
        match(hybridautomatonParser::KEY_ARCCOS_FUNCTION);
        setState(210);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(211);
        const_expression(0);
        setState(212);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_TAN_FUNCTION: {
        _localctx = _tracker.createInstance<TanConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(214);
        match(hybridautomatonParser::KEY_TAN_FUNCTION);
        setState(215);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(216);
        const_expression(0);
        setState(217);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCTAN_FUNCTION: {
        _localctx = _tracker.createInstance<AtanConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(219);
        match(hybridautomatonParser::KEY_ARCTAN_FUNCTION);
        setState(220);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(221);
        const_expression(0);
        setState(222);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_COT_FUNCTION: {
        _localctx = _tracker.createInstance<CotConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(224);
        match(hybridautomatonParser::KEY_COT_FUNCTION);
        setState(225);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(226);
        const_expression(0);
        setState(227);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCCOT_FUNCTION: {
        _localctx = _tracker.createInstance<AcotConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(229);
        match(hybridautomatonParser::KEY_ARCCOT_FUNCTION);
        setState(230);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(231);
        const_expression(0);
        setState(232);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_SINH_FUNCTION: {
        _localctx = _tracker.createInstance<SinhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(234);
        match(hybridautomatonParser::KEY_SINH_FUNCTION);
        setState(235);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(236);
        const_expression(0);
        setState(237);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCSINH_FUNCTION: {
        _localctx = _tracker.createInstance<AsinhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(239);
        match(hybridautomatonParser::KEY_ARCSINH_FUNCTION);
        setState(240);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(241);
        const_expression(0);
        setState(242);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_COSH_FUNCTION: {
        _localctx = _tracker.createInstance<CoshConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(244);
        match(hybridautomatonParser::KEY_COSH_FUNCTION);
        setState(245);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(246);
        const_expression(0);
        setState(247);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCCOSH_FUNCTION: {
        _localctx = _tracker.createInstance<AcoshConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(249);
        match(hybridautomatonParser::KEY_ARCCOSH_FUNCTION);
        setState(250);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(251);
        const_expression(0);
        setState(252);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_TANH_FUNCTION: {
        _localctx = _tracker.createInstance<TanhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(254);
        match(hybridautomatonParser::KEY_TANH_FUNCTION);
        setState(255);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(256);
        const_expression(0);
        setState(257);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCTANH_FUNCTION: {
        _localctx = _tracker.createInstance<AtanhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(259);
        match(hybridautomatonParser::KEY_ARCTANH_FUNCTION);
        setState(260);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(261);
        const_expression(0);
        setState(262);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_COTH_FUNCTION: {
        _localctx = _tracker.createInstance<AcothConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(264);
        match(hybridautomatonParser::KEY_COTH_FUNCTION);
        setState(265);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(266);
        const_expression(0);
        setState(267);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_LN_FUNCTION: {
        _localctx = _tracker.createInstance<LnConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(269);
        match(hybridautomatonParser::KEY_LN_FUNCTION);
        setState(270);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(271);
        const_expression(0);
        setState(272);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_LOG_FUNCTION: {
        _localctx = _tracker.createInstance<LogConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(274);
        match(hybridautomatonParser::KEY_LOG_FUNCTION);
        setState(275);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(276);
        const_expression(0);
        setState(277);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_NATURAL_EXP_FUNCTION: {
        _localctx = _tracker.createInstance<NexpConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(279);
        match(hybridautomatonParser::KEY_NATURAL_EXP_FUNCTION);
        setState(280);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(281);
        const_expression(0);
        setState(282);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_SQR_FUNCTION: {
        _localctx = _tracker.createInstance<SqrConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(284);
        match(hybridautomatonParser::KEY_SQR_FUNCTION);
        setState(285);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(286);
        const_expression(0);
        setState(287);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_SQRT_FUNCTION: {
        _localctx = _tracker.createInstance<SqrtConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(289);
        match(hybridautomatonParser::KEY_SQRT_FUNCTION);
        setState(290);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(291);
        const_expression(0);
        setState(292);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_POWER_FUNCTION: {
        _localctx = _tracker.createInstance<PowConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(294);
        match(hybridautomatonParser::KEY_POWER_FUNCTION);
        setState(295);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(296);
        const_expression(0);
        setState(297);
        match(hybridautomatonParser::COMMA);
        setState(298);
        const_expression(0);
        setState(299);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_INFINITY:
      case hybridautomatonParser::SCINUM:
      case hybridautomatonParser::NUMBER: {
        _localctx = _tracker.createInstance<ConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(301);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << hybridautomatonParser::KEY_INFINITY)
          | (1ULL << hybridautomatonParser::SCINUM)
          | (1ULL << hybridautomatonParser::NUMBER))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(315);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(313);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpConstExpContext>(_tracker.createInstance<Const_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleConst_expression);
          setState(304);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(305);
          match(hybridautomatonParser::EXPONENT);
          setState(306);
          const_expression(29);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ConstExpMulDivContext>(_tracker.createInstance<Const_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleConst_expression);
          setState(307);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(308);
          dynamic_cast<ConstExpMulDivContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == hybridautomatonParser::MULTIPLY

          || _la == hybridautomatonParser::DIVIDE)) {
            dynamic_cast<ConstExpMulDivContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(309);
          const_expression(26);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ConstExpAddSubContext>(_tracker.createInstance<Const_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleConst_expression);
          setState(310);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(311);
          dynamic_cast<ConstExpAddSubContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == hybridautomatonParser::PLUS

          || _la == hybridautomatonParser::MINUS)) {
            dynamic_cast<ConstExpAddSubContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(312);
          const_expression(25);
          break;
        }

        } 
      }
      setState(317);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

hybridautomatonParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t hybridautomatonParser::ExpressionContext::getRuleIndex() const {
  return hybridautomatonParser::RuleExpression;
}

void hybridautomatonParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TanExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::TanExpContext::KEY_TAN_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_TAN_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::TanExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::TanExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::TanExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::TanExpContext::TanExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::TanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanExp(this);
}
void hybridautomatonParser::TanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanExp(this);
}

antlrcpp::Any hybridautomatonParser::TanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitTanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::SqrExpContext::KEY_SQR_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_SQR_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::SqrExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::SqrExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::SqrExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::SqrExpContext::SqrExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::SqrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrExp(this);
}
void hybridautomatonParser::SqrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrExp(this);
}

antlrcpp::Any hybridautomatonParser::SqrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitSqrExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::ConstantContext::NUMBER() {
  return getToken(hybridautomatonParser::NUMBER, 0);
}

tree::TerminalNode* hybridautomatonParser::ConstantContext::SCINUM() {
  return getToken(hybridautomatonParser::SCINUM, 0);
}

hybridautomatonParser::ConstantContext::ConstantContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}
void hybridautomatonParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}

antlrcpp::Any hybridautomatonParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinhExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AsinhExpContext::KEY_ARCSINH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCSINH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AsinhExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::AsinhExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AsinhExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AsinhExpContext::AsinhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AsinhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinhExp(this);
}
void hybridautomatonParser::AsinhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinhExp(this);
}

antlrcpp::Any hybridautomatonParser::AsinhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAsinhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcosExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AcosExpContext::KEY_ARCCOS_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCCOS_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AcosExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::AcosExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AcosExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AcosExpContext::AcosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AcosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcosExp(this);
}
void hybridautomatonParser::AcosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcosExp(this);
}

antlrcpp::Any hybridautomatonParser::AcosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAcosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcothExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AcothExpContext::KEY_ARCCOTH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCCOTH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AcothExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::AcothExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AcothExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AcothExpContext::AcothExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AcothExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcothExp(this);
}
void hybridautomatonParser::AcothExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcothExp(this);
}

antlrcpp::Any hybridautomatonParser::AcothExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAcothExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcoshExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AcoshExpContext::KEY_ARCCOSH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCCOSH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AcoshExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::AcoshExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AcoshExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AcoshExpContext::AcoshExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AcoshExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcoshExp(this);
}
void hybridautomatonParser::AcoshExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcoshExp(this);
}

antlrcpp::Any hybridautomatonParser::AcoshExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAcoshExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CosExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::CosExpContext::KEY_COS_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_COS_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::CosExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::CosExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::CosExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::CosExpContext::CosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::CosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCosExp(this);
}
void hybridautomatonParser::CosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCosExp(this);
}

antlrcpp::Any hybridautomatonParser::CosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitCosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::PowExpContext::KEY_POWER_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_POWER_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::PowExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

std::vector<hybridautomatonParser::ExpressionContext *> hybridautomatonParser::PowExpContext::expression() {
  return getRuleContexts<hybridautomatonParser::ExpressionContext>();
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::PowExpContext::expression(size_t i) {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(i);
}

tree::TerminalNode* hybridautomatonParser::PowExpContext::COMMA() {
  return getToken(hybridautomatonParser::COMMA, 0);
}

tree::TerminalNode* hybridautomatonParser::PowExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::PowExpContext::PowExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::PowExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowExp(this);
}
void hybridautomatonParser::PowExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowExp(this);
}

antlrcpp::Any hybridautomatonParser::PowExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitPowExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CothExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::CothExpContext::KEY_COTH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_COTH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::CothExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::CothExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::CothExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::CothExpContext::CothExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::CothExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCothExp(this);
}
void hybridautomatonParser::CothExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCothExp(this);
}

antlrcpp::Any hybridautomatonParser::CothExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitCothExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PosExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::PosExpContext::PLUS() {
  return getToken(hybridautomatonParser::PLUS, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::PosExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

hybridautomatonParser::PosExpContext::PosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::PosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosExp(this);
}
void hybridautomatonParser::PosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosExp(this);
}

antlrcpp::Any hybridautomatonParser::PosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitPosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::NegExpContext::MINUS() {
  return getToken(hybridautomatonParser::MINUS, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::NegExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

hybridautomatonParser::NegExpContext::NegExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::NegExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegExp(this);
}
void hybridautomatonParser::NegExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegExp(this);
}

antlrcpp::Any hybridautomatonParser::NegExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitNegExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpBraContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::ExpBraContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::ExpBraContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::ExpBraContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpBraContext::ExpBraContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::ExpBraContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpBra(this);
}
void hybridautomatonParser::ExpBraContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpBra(this);
}

antlrcpp::Any hybridautomatonParser::ExpBraContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitExpBra(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanhExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AtanhExpContext::KEY_ARCTANH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCTANH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AtanhExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::AtanhExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AtanhExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AtanhExpContext::AtanhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AtanhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanhExp(this);
}
void hybridautomatonParser::AtanhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanhExp(this);
}

antlrcpp::Any hybridautomatonParser::AtanhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAtanhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::SinExpContext::KEY_SIN_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_SIN_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::SinExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::SinExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::SinExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::SinExpContext::SinExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::SinExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinExp(this);
}
void hybridautomatonParser::SinExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinExp(this);
}

antlrcpp::Any hybridautomatonParser::SinExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitSinExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LnExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::LnExpContext::KEY_LN_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_LN_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::LnExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::LnExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::LnExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::LnExpContext::LnExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::LnExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLnExp(this);
}
void hybridautomatonParser::LnExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLnExp(this);
}

antlrcpp::Any hybridautomatonParser::LnExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitLnExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TanhExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::TanhExpContext::KEY_TANH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_TANH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::TanhExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::TanhExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::TanhExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::TanhExpContext::TanhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::TanhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanhExp(this);
}
void hybridautomatonParser::TanhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanhExp(this);
}

antlrcpp::Any hybridautomatonParser::TanhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitTanhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrtExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::SqrtExpContext::KEY_SQRT_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_SQRT_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::SqrtExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::SqrtExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::SqrtExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::SqrtExpContext::SqrtExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::SqrtExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrtExp(this);
}
void hybridautomatonParser::SqrtExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrtExp(this);
}

antlrcpp::Any hybridautomatonParser::SqrtExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitSqrtExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpMulDivContext ------------------------------------------------------------------

std::vector<hybridautomatonParser::ExpressionContext *> hybridautomatonParser::ExpMulDivContext::expression() {
  return getRuleContexts<hybridautomatonParser::ExpressionContext>();
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::ExpMulDivContext::expression(size_t i) {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(i);
}

tree::TerminalNode* hybridautomatonParser::ExpMulDivContext::MULTIPLY() {
  return getToken(hybridautomatonParser::MULTIPLY, 0);
}

tree::TerminalNode* hybridautomatonParser::ExpMulDivContext::DIVIDE() {
  return getToken(hybridautomatonParser::DIVIDE, 0);
}

hybridautomatonParser::ExpMulDivContext::ExpMulDivContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::ExpMulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpMulDiv(this);
}
void hybridautomatonParser::ExpMulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpMulDiv(this);
}

antlrcpp::Any hybridautomatonParser::ExpMulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitExpMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AtanExpContext::KEY_ARCTAN_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCTAN_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AtanExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::AtanExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AtanExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AtanExpContext::AtanExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AtanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanExp(this);
}
void hybridautomatonParser::AtanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanExp(this);
}

antlrcpp::Any hybridautomatonParser::AtanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAtanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcotExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AcotExpContext::KEY_ARCCOT_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCCOT_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AcotExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::AcotExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AcotExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AcotExpContext::AcotExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AcotExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcotExp(this);
}
void hybridautomatonParser::AcotExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcotExp(this);
}

antlrcpp::Any hybridautomatonParser::AcotExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAcotExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpExpContext ------------------------------------------------------------------

std::vector<hybridautomatonParser::ExpressionContext *> hybridautomatonParser::ExpExpContext::expression() {
  return getRuleContexts<hybridautomatonParser::ExpressionContext>();
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::ExpExpContext::expression(size_t i) {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(i);
}

tree::TerminalNode* hybridautomatonParser::ExpExpContext::EXPONENT() {
  return getToken(hybridautomatonParser::EXPONENT, 0);
}

hybridautomatonParser::ExpExpContext::ExpExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::ExpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpExp(this);
}
void hybridautomatonParser::ExpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpExp(this);
}

antlrcpp::Any hybridautomatonParser::ExpExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitExpExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CoshExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::CoshExpContext::KEY_COSH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_COSH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::CoshExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::CoshExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::CoshExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::CoshExpContext::CoshExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::CoshExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoshExp(this);
}
void hybridautomatonParser::CoshExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoshExp(this);
}

antlrcpp::Any hybridautomatonParser::CoshExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitCoshExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::LogExpContext::KEY_LOG_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_LOG_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::LogExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::LogExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::LogExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::LogExpContext::LogExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::LogExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogExp(this);
}
void hybridautomatonParser::LogExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogExp(this);
}

antlrcpp::Any hybridautomatonParser::LogExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitLogExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::AsinExpContext::KEY_ARCSIN_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_ARCSIN_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::AsinExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::AsinExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::AsinExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::AsinExpContext::AsinExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::AsinExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinExp(this);
}
void hybridautomatonParser::AsinExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinExp(this);
}

antlrcpp::Any hybridautomatonParser::AsinExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitAsinExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CotExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::CotExpContext::KEY_COT_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_COT_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::CotExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::CotExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::CotExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::CotExpContext::CotExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::CotExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCotExp(this);
}
void hybridautomatonParser::CotExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCotExp(this);
}

antlrcpp::Any hybridautomatonParser::CotExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitCotExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::VariableContext::VARIABLE() {
  return getToken(hybridautomatonParser::VARIABLE, 0);
}

hybridautomatonParser::VariableContext::VariableContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}
void hybridautomatonParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

antlrcpp::Any hybridautomatonParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinhExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::SinhExpContext::KEY_SINH_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_SINH_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::SinhExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::SinhExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::SinhExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::SinhExpContext::SinhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::SinhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinhExp(this);
}
void hybridautomatonParser::SinhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinhExp(this);
}

antlrcpp::Any hybridautomatonParser::SinhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitSinhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NexpExpContext ------------------------------------------------------------------

tree::TerminalNode* hybridautomatonParser::NexpExpContext::KEY_NATURAL_EXP_FUNCTION() {
  return getToken(hybridautomatonParser::KEY_NATURAL_EXP_FUNCTION, 0);
}

tree::TerminalNode* hybridautomatonParser::NexpExpContext::LEFTROUNDBRACKET() {
  return getToken(hybridautomatonParser::LEFTROUNDBRACKET, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::NexpExpContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::NexpExpContext::RIGHTROUNDBRACKET() {
  return getToken(hybridautomatonParser::RIGHTROUNDBRACKET, 0);
}

hybridautomatonParser::NexpExpContext::NexpExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::NexpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNexpExp(this);
}
void hybridautomatonParser::NexpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNexpExp(this);
}

antlrcpp::Any hybridautomatonParser::NexpExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitNexpExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpAddSubContext ------------------------------------------------------------------

std::vector<hybridautomatonParser::ExpressionContext *> hybridautomatonParser::ExpAddSubContext::expression() {
  return getRuleContexts<hybridautomatonParser::ExpressionContext>();
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::ExpAddSubContext::expression(size_t i) {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(i);
}

tree::TerminalNode* hybridautomatonParser::ExpAddSubContext::PLUS() {
  return getToken(hybridautomatonParser::PLUS, 0);
}

tree::TerminalNode* hybridautomatonParser::ExpAddSubContext::MINUS() {
  return getToken(hybridautomatonParser::MINUS, 0);
}

hybridautomatonParser::ExpAddSubContext::ExpAddSubContext(ExpressionContext *ctx) { copyFrom(ctx); }

void hybridautomatonParser::ExpAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpAddSub(this);
}
void hybridautomatonParser::ExpAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpAddSub(this);
}

antlrcpp::Any hybridautomatonParser::ExpAddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitExpAddSub(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::expression() {
   return expression(0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  hybridautomatonParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  hybridautomatonParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, hybridautomatonParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(441);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hybridautomatonParser::PLUS: {
        _localctx = _tracker.createInstance<PosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(319);
        match(hybridautomatonParser::PLUS);
        setState(320);
        expression(29);
        break;
      }

      case hybridautomatonParser::MINUS: {
        _localctx = _tracker.createInstance<NegExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(321);
        match(hybridautomatonParser::MINUS);
        setState(322);
        expression(28);
        break;
      }

      case hybridautomatonParser::LEFTROUNDBRACKET: {
        _localctx = _tracker.createInstance<ExpBraContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(323);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(324);
        expression(0);
        setState(325);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_SIN_FUNCTION: {
        _localctx = _tracker.createInstance<SinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(327);
        match(hybridautomatonParser::KEY_SIN_FUNCTION);
        setState(328);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(329);
        expression(0);
        setState(330);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCSIN_FUNCTION: {
        _localctx = _tracker.createInstance<AsinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(332);
        match(hybridautomatonParser::KEY_ARCSIN_FUNCTION);
        setState(333);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(334);
        expression(0);
        setState(335);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_COS_FUNCTION: {
        _localctx = _tracker.createInstance<CosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(337);
        match(hybridautomatonParser::KEY_COS_FUNCTION);
        setState(338);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(339);
        expression(0);
        setState(340);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCCOS_FUNCTION: {
        _localctx = _tracker.createInstance<AcosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(342);
        match(hybridautomatonParser::KEY_ARCCOS_FUNCTION);
        setState(343);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(344);
        expression(0);
        setState(345);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_TAN_FUNCTION: {
        _localctx = _tracker.createInstance<TanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(347);
        match(hybridautomatonParser::KEY_TAN_FUNCTION);
        setState(348);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(349);
        expression(0);
        setState(350);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCTAN_FUNCTION: {
        _localctx = _tracker.createInstance<AtanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(352);
        match(hybridautomatonParser::KEY_ARCTAN_FUNCTION);
        setState(353);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(354);
        expression(0);
        setState(355);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_COT_FUNCTION: {
        _localctx = _tracker.createInstance<CotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(357);
        match(hybridautomatonParser::KEY_COT_FUNCTION);
        setState(358);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(359);
        expression(0);
        setState(360);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCCOT_FUNCTION: {
        _localctx = _tracker.createInstance<AcotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(362);
        match(hybridautomatonParser::KEY_ARCCOT_FUNCTION);
        setState(363);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(364);
        expression(0);
        setState(365);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_SINH_FUNCTION: {
        _localctx = _tracker.createInstance<SinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(367);
        match(hybridautomatonParser::KEY_SINH_FUNCTION);
        setState(368);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(369);
        expression(0);
        setState(370);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCSINH_FUNCTION: {
        _localctx = _tracker.createInstance<AsinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(372);
        match(hybridautomatonParser::KEY_ARCSINH_FUNCTION);
        setState(373);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(374);
        expression(0);
        setState(375);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_COSH_FUNCTION: {
        _localctx = _tracker.createInstance<CoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(377);
        match(hybridautomatonParser::KEY_COSH_FUNCTION);
        setState(378);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(379);
        expression(0);
        setState(380);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCCOSH_FUNCTION: {
        _localctx = _tracker.createInstance<AcoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(382);
        match(hybridautomatonParser::KEY_ARCCOSH_FUNCTION);
        setState(383);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(384);
        expression(0);
        setState(385);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_TANH_FUNCTION: {
        _localctx = _tracker.createInstance<TanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(387);
        match(hybridautomatonParser::KEY_TANH_FUNCTION);
        setState(388);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(389);
        expression(0);
        setState(390);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCTANH_FUNCTION: {
        _localctx = _tracker.createInstance<AtanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(392);
        match(hybridautomatonParser::KEY_ARCTANH_FUNCTION);
        setState(393);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(394);
        expression(0);
        setState(395);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_COTH_FUNCTION: {
        _localctx = _tracker.createInstance<CothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(397);
        match(hybridautomatonParser::KEY_COTH_FUNCTION);
        setState(398);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(399);
        expression(0);
        setState(400);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_ARCCOTH_FUNCTION: {
        _localctx = _tracker.createInstance<AcothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(402);
        match(hybridautomatonParser::KEY_ARCCOTH_FUNCTION);
        setState(403);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(404);
        expression(0);
        setState(405);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_LN_FUNCTION: {
        _localctx = _tracker.createInstance<LnExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(407);
        match(hybridautomatonParser::KEY_LN_FUNCTION);
        setState(408);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(409);
        expression(0);
        setState(410);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_LOG_FUNCTION: {
        _localctx = _tracker.createInstance<LogExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(412);
        match(hybridautomatonParser::KEY_LOG_FUNCTION);
        setState(413);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(414);
        expression(0);
        setState(415);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_NATURAL_EXP_FUNCTION: {
        _localctx = _tracker.createInstance<NexpExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(417);
        match(hybridautomatonParser::KEY_NATURAL_EXP_FUNCTION);
        setState(418);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(419);
        expression(0);
        setState(420);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_SQR_FUNCTION: {
        _localctx = _tracker.createInstance<SqrExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(422);
        match(hybridautomatonParser::KEY_SQR_FUNCTION);
        setState(423);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(424);
        expression(0);
        setState(425);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_SQRT_FUNCTION: {
        _localctx = _tracker.createInstance<SqrtExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(427);
        match(hybridautomatonParser::KEY_SQRT_FUNCTION);
        setState(428);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(429);
        expression(0);
        setState(430);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::KEY_POWER_FUNCTION: {
        _localctx = _tracker.createInstance<PowExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(432);
        match(hybridautomatonParser::KEY_POWER_FUNCTION);
        setState(433);
        match(hybridautomatonParser::LEFTROUNDBRACKET);
        setState(434);
        expression(0);
        setState(435);
        match(hybridautomatonParser::COMMA);
        setState(436);
        expression(0);
        setState(437);
        match(hybridautomatonParser::RIGHTROUNDBRACKET);
        break;
      }

      case hybridautomatonParser::SCINUM:
      case hybridautomatonParser::NUMBER: {
        _localctx = _tracker.createInstance<ConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(439);
        _la = _input->LA(1);
        if (!(_la == hybridautomatonParser::SCINUM

        || _la == hybridautomatonParser::NUMBER)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case hybridautomatonParser::VARIABLE: {
        _localctx = _tracker.createInstance<VariableContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(440);
        match(hybridautomatonParser::VARIABLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(454);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(452);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpExpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(443);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(444);
          match(hybridautomatonParser::EXPONENT);
          setState(445);
          expression(31);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExpMulDivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(446);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(447);
          dynamic_cast<ExpMulDivContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == hybridautomatonParser::MULTIPLY

          || _la == hybridautomatonParser::DIVIDE)) {
            dynamic_cast<ExpMulDivContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(448);
          expression(28);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExpAddSubContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(449);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(450);
          dynamic_cast<ExpAddSubContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == hybridautomatonParser::PLUS

          || _la == hybridautomatonParser::MINUS)) {
            dynamic_cast<ExpAddSubContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(451);
          expression(27);
          break;
        }

        } 
      }
      setState(456);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ModelidContext ------------------------------------------------------------------

hybridautomatonParser::ModelidContext::ModelidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::ModelidContext::KEY_NAME() {
  return getToken(hybridautomatonParser::KEY_NAME, 0);
}

tree::TerminalNode* hybridautomatonParser::ModelidContext::VARIABLE() {
  return getToken(hybridautomatonParser::VARIABLE, 0);
}


size_t hybridautomatonParser::ModelidContext::getRuleIndex() const {
  return hybridautomatonParser::RuleModelid;
}

void hybridautomatonParser::ModelidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModelid(this);
}

void hybridautomatonParser::ModelidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModelid(this);
}


antlrcpp::Any hybridautomatonParser::ModelidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitModelid(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::ModelidContext* hybridautomatonParser::modelid() {
  ModelidContext *_localctx = _tracker.createInstance<ModelidContext>(_ctx, getState());
  enterRule(_localctx, 34, hybridautomatonParser::RuleModelid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    match(hybridautomatonParser::KEY_NAME);
    setState(458);
    match(hybridautomatonParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FlowsContext ------------------------------------------------------------------

hybridautomatonParser::FlowsContext::FlowsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::FlowsContext::KEY_FLOWS() {
  return getToken(hybridautomatonParser::KEY_FLOWS, 0);
}

tree::TerminalNode* hybridautomatonParser::FlowsContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

hybridautomatonParser::SystemContext* hybridautomatonParser::FlowsContext::system() {
  return getRuleContext<hybridautomatonParser::SystemContext>(0);
}

tree::TerminalNode* hybridautomatonParser::FlowsContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}


size_t hybridautomatonParser::FlowsContext::getRuleIndex() const {
  return hybridautomatonParser::RuleFlows;
}

void hybridautomatonParser::FlowsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlows(this);
}

void hybridautomatonParser::FlowsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlows(this);
}


antlrcpp::Any hybridautomatonParser::FlowsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitFlows(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::FlowsContext* hybridautomatonParser::flows() {
  FlowsContext *_localctx = _tracker.createInstance<FlowsContext>(_ctx, getState());
  enterRule(_localctx, 36, hybridautomatonParser::RuleFlows);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(460);
    match(hybridautomatonParser::KEY_FLOWS);
    setState(461);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(462);
    system();
    setState(463);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InvariantconditionContext ------------------------------------------------------------------

hybridautomatonParser::InvariantconditionContext::InvariantconditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::InvariantconditionContext::KEY_INVARIANT_CONDITIONS() {
  return getToken(hybridautomatonParser::KEY_INVARIANT_CONDITIONS, 0);
}

tree::TerminalNode* hybridautomatonParser::InvariantconditionContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* hybridautomatonParser::InvariantconditionContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}

hybridautomatonParser::ConditionContext* hybridautomatonParser::InvariantconditionContext::condition() {
  return getRuleContext<hybridautomatonParser::ConditionContext>(0);
}


size_t hybridautomatonParser::InvariantconditionContext::getRuleIndex() const {
  return hybridautomatonParser::RuleInvariantcondition;
}

void hybridautomatonParser::InvariantconditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInvariantcondition(this);
}

void hybridautomatonParser::InvariantconditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInvariantcondition(this);
}


antlrcpp::Any hybridautomatonParser::InvariantconditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitInvariantcondition(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::InvariantconditionContext* hybridautomatonParser::invariantcondition() {
  InvariantconditionContext *_localctx = _tracker.createInstance<InvariantconditionContext>(_ctx, getState());
  enterRule(_localctx, 38, hybridautomatonParser::RuleInvariantcondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    match(hybridautomatonParser::KEY_INVARIANT_CONDITIONS);
    setState(466);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == hybridautomatonParser::KEY_CONDITION) {
      setState(467);
      condition();
    }
    setState(470);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModelContext ------------------------------------------------------------------

hybridautomatonParser::ModelContext::ModelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::ModelContext::KEY_MODEL() {
  return getToken(hybridautomatonParser::KEY_MODEL, 0);
}

tree::TerminalNode* hybridautomatonParser::ModelContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

hybridautomatonParser::ModelidContext* hybridautomatonParser::ModelContext::modelid() {
  return getRuleContext<hybridautomatonParser::ModelidContext>(0);
}

hybridautomatonParser::FlowsContext* hybridautomatonParser::ModelContext::flows() {
  return getRuleContext<hybridautomatonParser::FlowsContext>(0);
}

hybridautomatonParser::InvariantconditionContext* hybridautomatonParser::ModelContext::invariantcondition() {
  return getRuleContext<hybridautomatonParser::InvariantconditionContext>(0);
}

tree::TerminalNode* hybridautomatonParser::ModelContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}


size_t hybridautomatonParser::ModelContext::getRuleIndex() const {
  return hybridautomatonParser::RuleModel;
}

void hybridautomatonParser::ModelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModel(this);
}

void hybridautomatonParser::ModelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModel(this);
}


antlrcpp::Any hybridautomatonParser::ModelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitModel(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::ModelContext* hybridautomatonParser::model() {
  ModelContext *_localctx = _tracker.createInstance<ModelContext>(_ctx, getState());
  enterRule(_localctx, 40, hybridautomatonParser::RuleModel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(472);
    match(hybridautomatonParser::KEY_MODEL);
    setState(473);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(474);
    modelid();
    setState(475);
    flows();
    setState(476);
    invariantcondition();
    setState(477);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocationsContext ------------------------------------------------------------------

hybridautomatonParser::LocationsContext::LocationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::LocationsContext::KEY_LOCATIONS() {
  return getToken(hybridautomatonParser::KEY_LOCATIONS, 0);
}

tree::TerminalNode* hybridautomatonParser::LocationsContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* hybridautomatonParser::LocationsContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}

std::vector<hybridautomatonParser::ModelContext *> hybridautomatonParser::LocationsContext::model() {
  return getRuleContexts<hybridautomatonParser::ModelContext>();
}

hybridautomatonParser::ModelContext* hybridautomatonParser::LocationsContext::model(size_t i) {
  return getRuleContext<hybridautomatonParser::ModelContext>(i);
}


size_t hybridautomatonParser::LocationsContext::getRuleIndex() const {
  return hybridautomatonParser::RuleLocations;
}

void hybridautomatonParser::LocationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocations(this);
}

void hybridautomatonParser::LocationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocations(this);
}


antlrcpp::Any hybridautomatonParser::LocationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitLocations(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::LocationsContext* hybridautomatonParser::locations() {
  LocationsContext *_localctx = _tracker.createInstance<LocationsContext>(_ctx, getState());
  enterRule(_localctx, 42, hybridautomatonParser::RuleLocations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    match(hybridautomatonParser::KEY_LOCATIONS);
    setState(480);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(482); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(481);
      model();
      setState(484); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == hybridautomatonParser::KEY_MODEL);
    setState(486);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectionContext ------------------------------------------------------------------

hybridautomatonParser::DirectionContext::DirectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::DirectionContext::KEY_DIRECTION() {
  return getToken(hybridautomatonParser::KEY_DIRECTION, 0);
}

std::vector<tree::TerminalNode *> hybridautomatonParser::DirectionContext::VARIABLE() {
  return getTokens(hybridautomatonParser::VARIABLE);
}

tree::TerminalNode* hybridautomatonParser::DirectionContext::VARIABLE(size_t i) {
  return getToken(hybridautomatonParser::VARIABLE, i);
}

tree::TerminalNode* hybridautomatonParser::DirectionContext::FROMTO() {
  return getToken(hybridautomatonParser::FROMTO, 0);
}


size_t hybridautomatonParser::DirectionContext::getRuleIndex() const {
  return hybridautomatonParser::RuleDirection;
}

void hybridautomatonParser::DirectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirection(this);
}

void hybridautomatonParser::DirectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirection(this);
}


antlrcpp::Any hybridautomatonParser::DirectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitDirection(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::DirectionContext* hybridautomatonParser::direction() {
  DirectionContext *_localctx = _tracker.createInstance<DirectionContext>(_ctx, getState());
  enterRule(_localctx, 44, hybridautomatonParser::RuleDirection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(488);
    match(hybridautomatonParser::KEY_DIRECTION);
    setState(489);
    match(hybridautomatonParser::VARIABLE);
    setState(490);
    match(hybridautomatonParser::FROMTO);
    setState(491);
    match(hybridautomatonParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GuardconditionContext ------------------------------------------------------------------

hybridautomatonParser::GuardconditionContext::GuardconditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::GuardconditionContext::KEY_GUARD_CONDITIONS() {
  return getToken(hybridautomatonParser::KEY_GUARD_CONDITIONS, 0);
}

tree::TerminalNode* hybridautomatonParser::GuardconditionContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* hybridautomatonParser::GuardconditionContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}

hybridautomatonParser::ConditionContext* hybridautomatonParser::GuardconditionContext::condition() {
  return getRuleContext<hybridautomatonParser::ConditionContext>(0);
}


size_t hybridautomatonParser::GuardconditionContext::getRuleIndex() const {
  return hybridautomatonParser::RuleGuardcondition;
}

void hybridautomatonParser::GuardconditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGuardcondition(this);
}

void hybridautomatonParser::GuardconditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGuardcondition(this);
}


antlrcpp::Any hybridautomatonParser::GuardconditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitGuardcondition(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::GuardconditionContext* hybridautomatonParser::guardcondition() {
  GuardconditionContext *_localctx = _tracker.createInstance<GuardconditionContext>(_ctx, getState());
  enterRule(_localctx, 46, hybridautomatonParser::RuleGuardcondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    match(hybridautomatonParser::KEY_GUARD_CONDITIONS);
    setState(494);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(496);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == hybridautomatonParser::KEY_CONDITION) {
      setState(495);
      condition();
    }
    setState(498);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpdatefunctionContext ------------------------------------------------------------------

hybridautomatonParser::UpdatefunctionContext::UpdatefunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::UpdatefunctionContext::VARIABLE() {
  return getToken(hybridautomatonParser::VARIABLE, 0);
}

tree::TerminalNode* hybridautomatonParser::UpdatefunctionContext::DEFINE() {
  return getToken(hybridautomatonParser::DEFINE, 0);
}

hybridautomatonParser::ExpressionContext* hybridautomatonParser::UpdatefunctionContext::expression() {
  return getRuleContext<hybridautomatonParser::ExpressionContext>(0);
}


size_t hybridautomatonParser::UpdatefunctionContext::getRuleIndex() const {
  return hybridautomatonParser::RuleUpdatefunction;
}

void hybridautomatonParser::UpdatefunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdatefunction(this);
}

void hybridautomatonParser::UpdatefunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdatefunction(this);
}


antlrcpp::Any hybridautomatonParser::UpdatefunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitUpdatefunction(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::UpdatefunctionContext* hybridautomatonParser::updatefunction() {
  UpdatefunctionContext *_localctx = _tracker.createInstance<UpdatefunctionContext>(_ctx, getState());
  enterRule(_localctx, 48, hybridautomatonParser::RuleUpdatefunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    match(hybridautomatonParser::VARIABLE);
    setState(501);
    match(hybridautomatonParser::DEFINE);
    setState(502);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResetmapContext ------------------------------------------------------------------

hybridautomatonParser::ResetmapContext::ResetmapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::ResetmapContext::KEY_RESET_MAP() {
  return getToken(hybridautomatonParser::KEY_RESET_MAP, 0);
}

tree::TerminalNode* hybridautomatonParser::ResetmapContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* hybridautomatonParser::ResetmapContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}

std::vector<hybridautomatonParser::UpdatefunctionContext *> hybridautomatonParser::ResetmapContext::updatefunction() {
  return getRuleContexts<hybridautomatonParser::UpdatefunctionContext>();
}

hybridautomatonParser::UpdatefunctionContext* hybridautomatonParser::ResetmapContext::updatefunction(size_t i) {
  return getRuleContext<hybridautomatonParser::UpdatefunctionContext>(i);
}


size_t hybridautomatonParser::ResetmapContext::getRuleIndex() const {
  return hybridautomatonParser::RuleResetmap;
}

void hybridautomatonParser::ResetmapContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResetmap(this);
}

void hybridautomatonParser::ResetmapContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResetmap(this);
}


antlrcpp::Any hybridautomatonParser::ResetmapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitResetmap(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::ResetmapContext* hybridautomatonParser::resetmap() {
  ResetmapContext *_localctx = _tracker.createInstance<ResetmapContext>(_ctx, getState());
  enterRule(_localctx, 50, hybridautomatonParser::RuleResetmap);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    match(hybridautomatonParser::KEY_RESET_MAP);
    setState(505);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(509);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hybridautomatonParser::VARIABLE) {
      setState(506);
      updatefunction();
      setState(511);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(512);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpContext ------------------------------------------------------------------

hybridautomatonParser::JumpContext::JumpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::JumpContext::KEY_JUMP() {
  return getToken(hybridautomatonParser::KEY_JUMP, 0);
}

tree::TerminalNode* hybridautomatonParser::JumpContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

hybridautomatonParser::DirectionContext* hybridautomatonParser::JumpContext::direction() {
  return getRuleContext<hybridautomatonParser::DirectionContext>(0);
}

hybridautomatonParser::GuardconditionContext* hybridautomatonParser::JumpContext::guardcondition() {
  return getRuleContext<hybridautomatonParser::GuardconditionContext>(0);
}

hybridautomatonParser::ResetmapContext* hybridautomatonParser::JumpContext::resetmap() {
  return getRuleContext<hybridautomatonParser::ResetmapContext>(0);
}

tree::TerminalNode* hybridautomatonParser::JumpContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}


size_t hybridautomatonParser::JumpContext::getRuleIndex() const {
  return hybridautomatonParser::RuleJump;
}

void hybridautomatonParser::JumpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJump(this);
}

void hybridautomatonParser::JumpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJump(this);
}


antlrcpp::Any hybridautomatonParser::JumpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitJump(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::JumpContext* hybridautomatonParser::jump() {
  JumpContext *_localctx = _tracker.createInstance<JumpContext>(_ctx, getState());
  enterRule(_localctx, 52, hybridautomatonParser::RuleJump);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    match(hybridautomatonParser::KEY_JUMP);
    setState(515);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(516);
    direction();
    setState(517);
    guardcondition();
    setState(518);
    resetmap();
    setState(519);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TransitionsContext ------------------------------------------------------------------

hybridautomatonParser::TransitionsContext::TransitionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hybridautomatonParser::TransitionsContext::KEY_TRANSITIONS() {
  return getToken(hybridautomatonParser::KEY_TRANSITIONS, 0);
}

tree::TerminalNode* hybridautomatonParser::TransitionsContext::LEFTCURLYBRACKET() {
  return getToken(hybridautomatonParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* hybridautomatonParser::TransitionsContext::RIGHTCURLYBRACKET() {
  return getToken(hybridautomatonParser::RIGHTCURLYBRACKET, 0);
}

std::vector<hybridautomatonParser::JumpContext *> hybridautomatonParser::TransitionsContext::jump() {
  return getRuleContexts<hybridautomatonParser::JumpContext>();
}

hybridautomatonParser::JumpContext* hybridautomatonParser::TransitionsContext::jump(size_t i) {
  return getRuleContext<hybridautomatonParser::JumpContext>(i);
}


size_t hybridautomatonParser::TransitionsContext::getRuleIndex() const {
  return hybridautomatonParser::RuleTransitions;
}

void hybridautomatonParser::TransitionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTransitions(this);
}

void hybridautomatonParser::TransitionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<hybridautomatonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTransitions(this);
}


antlrcpp::Any hybridautomatonParser::TransitionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hybridautomatonVisitor*>(visitor))
    return parserVisitor->visitTransitions(this);
  else
    return visitor->visitChildren(this);
}

hybridautomatonParser::TransitionsContext* hybridautomatonParser::transitions() {
  TransitionsContext *_localctx = _tracker.createInstance<TransitionsContext>(_ctx, getState());
  enterRule(_localctx, 54, hybridautomatonParser::RuleTransitions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(521);
    match(hybridautomatonParser::KEY_TRANSITIONS);
    setState(522);
    match(hybridautomatonParser::LEFTCURLYBRACKET);
    setState(526);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hybridautomatonParser::KEY_JUMP) {
      setState(523);
      jump();
      setState(528);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(529);
    match(hybridautomatonParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool hybridautomatonParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 15: return const_expressionSempred(dynamic_cast<Const_expressionContext *>(context), predicateIndex);
    case 16: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool hybridautomatonParser::const_expressionSempred(Const_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 28);
    case 1: return precpred(_ctx, 25);
    case 2: return precpred(_ctx, 24);

  default:
    break;
  }
  return true;
}

bool hybridautomatonParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 30);
    case 4: return precpred(_ctx, 27);
    case 5: return precpred(_ctx, 26);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> hybridautomatonParser::_decisionToDFA;
atn::PredictionContextCache hybridautomatonParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN hybridautomatonParser::_atn;
std::vector<uint16_t> hybridautomatonParser::_serializedATN;

std::vector<std::string> hybridautomatonParser::_ruleNames = {
  "hybridautomatonid", "variables", "hybridautomaton", "condition", "polytope", 
  "hpolytope", "vpolytope", "matrix", "vector", "intervalhull", "constraints", 
  "constraint", "system", "formula", "interval", "const_expression", "expression", 
  "modelid", "flows", "invariantcondition", "model", "locations", "direction", 
  "guardcondition", "updatefunction", "resetmap", "jump", "transitions"
};

std::vector<std::string> hybridautomatonParser::_literalNames = {
  "", "'HYBRID_AUTOMATON'", "'VARIABLES'", "'LOCATIONS'", "'MODEL'", "'FLOWS'", 
  "'INVARIANT_CONDITIONS'", "'SETTINGS'", "'ANALYSIS'", "'FORWARD'", "'BACKWARD'", 
  "'TIME_HORIZON'", "'STEP'", "'GEOMETRY'", "'PLOT'", "'PRINT'", "'MAX_JUMP'", 
  "'START_MODEL_ID'", "'INITIAL_CONDITION'", "'TRANSITIONS'", "'URGENT'", 
  "'JUMP'", "'DIRECTION'", "'GUARD_CONDITIONS'", "'RESET_MAP'", "'INTERVAL_HULL'", 
  "'POLYTOPE'", "'CONDITION'", "'MATRIX'", "'ROW_MAJOR'", "'COL_MAJOR'", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "'NAME'", "'ON'", "'OFF'", "'TRUE'", "'FALSE'", "", 
  "", "", "", "'{'", "'}'", "'('", "')'", "'['", "']'", "','", "'=='", "'!='", 
  "'>='", "'<='", "'<'", "'>'", "':='", "", "'='", "'+'", "'-'", "'*'", 
  "'/'", "'^'", "'''"
};

std::vector<std::string> hybridautomatonParser::_symbolicNames = {
  "", "KEY_HYBRID_AUTOMATON", "KEY_VARIABLES", "KEY_LOCATIONS", "KEY_MODEL", 
  "KEY_FLOWS", "KEY_INVARIANT_CONDITIONS", "KEY_SETTINGS", "KEY_ANALYSIS", 
  "KEY_ANALYSIS_FORWARD", "KEY_ANALYSIS_BACKWARD", "KEY_TIME_HORIZON", "KEY_STEP", 
  "KEY_GEOMETRY", "KEY_PLOT_FLAG", "KEY_PRINT_FLAG", "KEY_MAX_JUMP", "KEY_START_MODEL_ID", 
  "KEY_INITIAL_CONDITION", "KEY_TRANSITIONS", "KEY_URGENT", "KEY_JUMP", 
  "KEY_DIRECTION", "KEY_GUARD_CONDITIONS", "KEY_RESET_MAP", "KEY_INTERVAL_HULL", 
  "KEY_POLYTOPE", "KEY_CONDITION", "KEY_MATRIX", "KEY_ROW_MAJOR_ORDER", 
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

dfa::Vocabulary hybridautomatonParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> hybridautomatonParser::_tokenNames;

hybridautomatonParser::Initializer::Initializer() {
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
    0x3, 0x58, 0x216, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x3, 0x2, 0x3, 0x2, 0x6, 
    0x2, 0x3d, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x3e, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x44, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0x47, 0xa, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x4a, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x4d, 0xb, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x5d, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x64, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x6e, 0xa, 0x8, 0x3, 0x8, 
    0x6, 0x8, 0x71, 0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 0x72, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x7c, 0xa, 
    0x9, 0x3, 0x9, 0x7, 0x9, 0x7f, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x82, 0xb, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 
    0xa, 0x8a, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x8d, 0xb, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x95, 0xa, 0xb, 
    0x3, 0xb, 0x7, 0xb, 0x98, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x9b, 0xb, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x6, 0xc, 0xa0, 0xa, 0xc, 0xd, 0xc, 0xe, 
    0xc, 0xa1, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x6, 0xe, 
    0xa9, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0xaa, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
    0xaf, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xb4, 0xa, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x131, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x13c, 
    0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x13f, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x1bc, 0xa, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x1c7, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0x1ca, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x5, 0x15, 0x1d7, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x6, 0x17, 0x1e5, 0xa, 0x17, 0xd, 0x17, 
    0xe, 0x17, 0x1e6, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1f3, 
    0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x1fe, 0xa, 0x1b, 
    0xc, 0x1b, 0xe, 0x1b, 0x201, 0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x20f, 0xa, 0x1d, 0xc, 0x1d, 
    0xe, 0x1d, 0x212, 0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x2, 0x4, 
    0x20, 0x22, 0x1e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x2, 0x8, 0x3, 0x2, 0x1f, 0x20, 
    0x3, 0x2, 0x48, 0x4d, 0x3, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x53, 0x54, 0x3, 
    0x2, 0x51, 0x52, 0x3, 0x2, 0x3e, 0x3f, 0x2, 0x247, 0x2, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x40, 0x3, 0x2, 0x2, 0x2, 0x6, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x58, 0x3, 0x2, 0x2, 0x2, 0xa, 0x60, 0x3, 0x2, 0x2, 0x2, 0xc, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x10, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x85, 0x3, 0x2, 0x2, 0x2, 0x14, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xac, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x20, 0x130, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x1bb, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1ce, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1da, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1ea, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1f6, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x36, 0x204, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3c, 0x7, 0x38, 0x2, 0x2, 0x3b, 
    0x3d, 0x7, 0x40, 0x2, 0x2, 0x3c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x4, 
    0x2, 0x2, 0x41, 0x43, 0x7, 0x41, 0x2, 0x2, 0x42, 0x44, 0x7, 0x40, 0x2, 
    0x2, 0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 0x7, 0x47, 0x2, 0x2, 0x46, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x4a, 0x7, 0x40, 0x2, 0x2, 0x49, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x42, 0x2, 0x2, 
    0x4f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x7, 0x3, 0x2, 0x2, 0x51, 
    0x52, 0x7, 0x41, 0x2, 0x2, 0x52, 0x53, 0x5, 0x2, 0x2, 0x2, 0x53, 0x54, 
    0x5, 0x4, 0x3, 0x2, 0x54, 0x55, 0x5, 0x2c, 0x17, 0x2, 0x55, 0x56, 0x5, 
    0x38, 0x1d, 0x2, 0x56, 0x57, 0x7, 0x42, 0x2, 0x2, 0x57, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x59, 0x7, 0x1d, 0x2, 0x2, 0x59, 0x5c, 0x7, 0x41, 0x2, 
    0x2, 0x5a, 0x5d, 0x5, 0x14, 0xb, 0x2, 0x5b, 0x5d, 0x5, 0xa, 0x6, 0x2, 
    0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x42, 0x2, 0x2, 0x5f, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x63, 0x7, 0x1c, 0x2, 0x2, 0x61, 0x64, 0x5, 
    0xc, 0x7, 0x2, 0x62, 0x64, 0x5, 0xe, 0x8, 0x2, 0x63, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x66, 0x7, 0x41, 0x2, 0x2, 0x66, 0x67, 0x5, 0x10, 0x9, 0x2, 
    0x67, 0x68, 0x5, 0x12, 0xa, 0x2, 0x68, 0x69, 0x7, 0x42, 0x2, 0x2, 0x69, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x41, 0x2, 0x2, 0x6b, 0x70, 
    0x5, 0x12, 0xa, 0x2, 0x6c, 0x6e, 0x7, 0x47, 0x2, 0x2, 0x6d, 0x6c, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x71, 0x5, 0x12, 0xa, 0x2, 0x70, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x75, 0x7, 0x42, 0x2, 0x2, 0x75, 0xf, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 
    0x7, 0x1e, 0x2, 0x2, 0x77, 0x78, 0x7, 0x41, 0x2, 0x2, 0x78, 0x79, 0x9, 
    0x2, 0x2, 0x2, 0x79, 0x80, 0x5, 0x12, 0xa, 0x2, 0x7a, 0x7c, 0x7, 0x47, 
    0x2, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7f, 0x5, 0x12, 0xa, 0x2, 
    0x7e, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 
    0x42, 0x2, 0x2, 0x84, 0x11, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x43, 
    0x2, 0x2, 0x86, 0x8b, 0x5, 0x20, 0x11, 0x2, 0x87, 0x88, 0x7, 0x47, 0x2, 
    0x2, 0x88, 0x8a, 0x5, 0x20, 0x11, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x44, 0x2, 0x2, 0x8f, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0x1b, 0x2, 0x2, 0x91, 0x92, 0x7, 0x41, 
    0x2, 0x2, 0x92, 0x99, 0x5, 0x1e, 0x10, 0x2, 0x93, 0x95, 0x7, 0x47, 0x2, 
    0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x98, 0x5, 0x1e, 0x10, 0x2, 0x97, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9c, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x42, 
    0x2, 0x2, 0x9d, 0x15, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0x18, 0xd, 
    0x2, 0x9f, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0x22, 0x12, 0x2, 0xa4, 0xa5, 
    0x9, 0x3, 0x2, 0x2, 0xa5, 0xa6, 0x5, 0x20, 0x11, 0x2, 0xa6, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0xa7, 0xa9, 0x5, 0x1c, 0xf, 0x2, 0xa8, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0xae, 0x7, 0x40, 0x2, 0x2, 0xad, 0xaf, 0x7, 0x56, 0x2, 0x2, 0xae, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0x50, 0x2, 0x2, 0xb1, 0xb3, 0x5, 
    0x22, 0x12, 0x2, 0xb2, 0xb4, 0x5, 0x1e, 0x10, 0x2, 0xb3, 0xb2, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb6, 0x7, 0x45, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0x20, 0x11, 
    0x2, 0xb7, 0xb8, 0x7, 0x47, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x20, 0x11, 0x2, 
    0xb9, 0xba, 0x7, 0x46, 0x2, 0x2, 0xba, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xbc, 0x8, 0x11, 0x1, 0x2, 0xbc, 0xbd, 0x7, 0x51, 0x2, 0x2, 0xbd, 0x131, 
    0x5, 0x20, 0x11, 0x1d, 0xbe, 0xbf, 0x7, 0x52, 0x2, 0x2, 0xbf, 0x131, 
    0x5, 0x20, 0x11, 0x1c, 0xc0, 0xc1, 0x7, 0x43, 0x2, 0x2, 0xc1, 0xc2, 
    0x5, 0x20, 0x11, 0x2, 0xc2, 0xc3, 0x7, 0x44, 0x2, 0x2, 0xc3, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x21, 0x2, 0x2, 0xc5, 0xc6, 0x7, 
    0x43, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x20, 0x11, 0x2, 0xc7, 0xc8, 0x7, 0x44, 
    0x2, 0x2, 0xc8, 0x131, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x22, 0x2, 
    0x2, 0xca, 0xcb, 0x7, 0x43, 0x2, 0x2, 0xcb, 0xcc, 0x5, 0x20, 0x11, 0x2, 
    0xcc, 0xcd, 0x7, 0x44, 0x2, 0x2, 0xcd, 0x131, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0xcf, 0x7, 0x23, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x43, 0x2, 0x2, 0xd0, 0xd1, 
    0x5, 0x20, 0x11, 0x2, 0xd1, 0xd2, 0x7, 0x44, 0x2, 0x2, 0xd2, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x24, 0x2, 0x2, 0xd4, 0xd5, 0x7, 
    0x43, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0x20, 0x11, 0x2, 0xd6, 0xd7, 0x7, 0x44, 
    0x2, 0x2, 0xd7, 0x131, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x25, 0x2, 
    0x2, 0xd9, 0xda, 0x7, 0x43, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x20, 0x11, 0x2, 
    0xdb, 0xdc, 0x7, 0x44, 0x2, 0x2, 0xdc, 0x131, 0x3, 0x2, 0x2, 0x2, 0xdd, 
    0xde, 0x7, 0x26, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x43, 0x2, 0x2, 0xdf, 0xe0, 
    0x5, 0x20, 0x11, 0x2, 0xe0, 0xe1, 0x7, 0x44, 0x2, 0x2, 0xe1, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x27, 0x2, 0x2, 0xe3, 0xe4, 0x7, 
    0x43, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x20, 0x11, 0x2, 0xe5, 0xe6, 0x7, 0x44, 
    0x2, 0x2, 0xe6, 0x131, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x28, 0x2, 
    0x2, 0xe8, 0xe9, 0x7, 0x43, 0x2, 0x2, 0xe9, 0xea, 0x5, 0x20, 0x11, 0x2, 
    0xea, 0xeb, 0x7, 0x44, 0x2, 0x2, 0xeb, 0x131, 0x3, 0x2, 0x2, 0x2, 0xec, 
    0xed, 0x7, 0x2c, 0x2, 0x2, 0xed, 0xee, 0x7, 0x43, 0x2, 0x2, 0xee, 0xef, 
    0x5, 0x20, 0x11, 0x2, 0xef, 0xf0, 0x7, 0x44, 0x2, 0x2, 0xf0, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x2d, 0x2, 0x2, 0xf2, 0xf3, 0x7, 
    0x43, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0x20, 0x11, 0x2, 0xf4, 0xf5, 0x7, 0x44, 
    0x2, 0x2, 0xf5, 0x131, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x2e, 0x2, 
    0x2, 0xf7, 0xf8, 0x7, 0x43, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x20, 0x11, 0x2, 
    0xf9, 0xfa, 0x7, 0x44, 0x2, 0x2, 0xfa, 0x131, 0x3, 0x2, 0x2, 0x2, 0xfb, 
    0xfc, 0x7, 0x2f, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x43, 0x2, 0x2, 0xfd, 0xfe, 
    0x5, 0x20, 0x11, 0x2, 0xfe, 0xff, 0x7, 0x44, 0x2, 0x2, 0xff, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x7, 0x30, 0x2, 0x2, 0x101, 0x102, 
    0x7, 0x43, 0x2, 0x2, 0x102, 0x103, 0x5, 0x20, 0x11, 0x2, 0x103, 0x104, 
    0x7, 0x44, 0x2, 0x2, 0x104, 0x131, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 
    0x7, 0x31, 0x2, 0x2, 0x106, 0x107, 0x7, 0x43, 0x2, 0x2, 0x107, 0x108, 
    0x5, 0x20, 0x11, 0x2, 0x108, 0x109, 0x7, 0x44, 0x2, 0x2, 0x109, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0x32, 0x2, 0x2, 0x10b, 0x10c, 
    0x7, 0x43, 0x2, 0x2, 0x10c, 0x10d, 0x5, 0x20, 0x11, 0x2, 0x10d, 0x10e, 
    0x7, 0x44, 0x2, 0x2, 0x10e, 0x131, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 
    0x7, 0x29, 0x2, 0x2, 0x110, 0x111, 0x7, 0x43, 0x2, 0x2, 0x111, 0x112, 
    0x5, 0x20, 0x11, 0x2, 0x112, 0x113, 0x7, 0x44, 0x2, 0x2, 0x113, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x7, 0x2a, 0x2, 0x2, 0x115, 0x116, 
    0x7, 0x43, 0x2, 0x2, 0x116, 0x117, 0x5, 0x20, 0x11, 0x2, 0x117, 0x118, 
    0x7, 0x44, 0x2, 0x2, 0x118, 0x131, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 
    0x7, 0x2b, 0x2, 0x2, 0x11a, 0x11b, 0x7, 0x43, 0x2, 0x2, 0x11b, 0x11c, 
    0x5, 0x20, 0x11, 0x2, 0x11c, 0x11d, 0x7, 0x44, 0x2, 0x2, 0x11d, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x34, 0x2, 0x2, 0x11f, 0x120, 
    0x7, 0x43, 0x2, 0x2, 0x120, 0x121, 0x5, 0x20, 0x11, 0x2, 0x121, 0x122, 
    0x7, 0x44, 0x2, 0x2, 0x122, 0x131, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 
    0x7, 0x35, 0x2, 0x2, 0x124, 0x125, 0x7, 0x43, 0x2, 0x2, 0x125, 0x126, 
    0x5, 0x20, 0x11, 0x2, 0x126, 0x127, 0x7, 0x44, 0x2, 0x2, 0x127, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x7, 0x37, 0x2, 0x2, 0x129, 0x12a, 
    0x7, 0x43, 0x2, 0x2, 0x12a, 0x12b, 0x5, 0x20, 0x11, 0x2, 0x12b, 0x12c, 
    0x7, 0x47, 0x2, 0x2, 0x12c, 0x12d, 0x5, 0x20, 0x11, 0x2, 0x12d, 0x12e, 
    0x7, 0x44, 0x2, 0x2, 0x12e, 0x131, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x131, 
    0x9, 0x4, 0x2, 0x2, 0x130, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x130, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x130, 0xc4, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x130, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x130, 0xd8, 0x3, 0x2, 0x2, 0x2, 
    0x130, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x130, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x130, 
    0xe7, 0x3, 0x2, 0x2, 0x2, 0x130, 0xec, 0x3, 0x2, 0x2, 0x2, 0x130, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0x130, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x130, 0xfb, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0x100, 0x3, 0x2, 0x2, 0x2, 0x130, 0x105, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x130, 0x10f, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0x114, 0x3, 0x2, 0x2, 0x2, 0x130, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x123, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0x128, 0x3, 0x2, 0x2, 0x2, 0x130, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0xc, 
    0x1e, 0x2, 0x2, 0x133, 0x134, 0x7, 0x55, 0x2, 0x2, 0x134, 0x13c, 0x5, 
    0x20, 0x11, 0x1f, 0x135, 0x136, 0xc, 0x1b, 0x2, 0x2, 0x136, 0x137, 0x9, 
    0x5, 0x2, 0x2, 0x137, 0x13c, 0x5, 0x20, 0x11, 0x1c, 0x138, 0x139, 0xc, 
    0x1a, 0x2, 0x2, 0x139, 0x13a, 0x9, 0x6, 0x2, 0x2, 0x13a, 0x13c, 0x5, 
    0x20, 0x11, 0x1b, 0x13b, 0x132, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x13b, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13f, 0x3, 
    0x2, 0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 
    0x2, 0x2, 0x2, 0x13e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x140, 0x141, 0x8, 0x12, 0x1, 0x2, 0x141, 0x142, 0x7, 0x51, 
    0x2, 0x2, 0x142, 0x1bc, 0x5, 0x22, 0x12, 0x1f, 0x143, 0x144, 0x7, 0x52, 
    0x2, 0x2, 0x144, 0x1bc, 0x5, 0x22, 0x12, 0x1e, 0x145, 0x146, 0x7, 0x43, 
    0x2, 0x2, 0x146, 0x147, 0x5, 0x22, 0x12, 0x2, 0x147, 0x148, 0x7, 0x44, 
    0x2, 0x2, 0x148, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x21, 
    0x2, 0x2, 0x14a, 0x14b, 0x7, 0x43, 0x2, 0x2, 0x14b, 0x14c, 0x5, 0x22, 
    0x12, 0x2, 0x14c, 0x14d, 0x7, 0x44, 0x2, 0x2, 0x14d, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x14f, 0x7, 0x22, 0x2, 0x2, 0x14f, 0x150, 0x7, 0x43, 
    0x2, 0x2, 0x150, 0x151, 0x5, 0x22, 0x12, 0x2, 0x151, 0x152, 0x7, 0x44, 
    0x2, 0x2, 0x152, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x7, 0x23, 
    0x2, 0x2, 0x154, 0x155, 0x7, 0x43, 0x2, 0x2, 0x155, 0x156, 0x5, 0x22, 
    0x12, 0x2, 0x156, 0x157, 0x7, 0x44, 0x2, 0x2, 0x157, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x158, 0x159, 0x7, 0x24, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x43, 
    0x2, 0x2, 0x15a, 0x15b, 0x5, 0x22, 0x12, 0x2, 0x15b, 0x15c, 0x7, 0x44, 
    0x2, 0x2, 0x15c, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x7, 0x25, 
    0x2, 0x2, 0x15e, 0x15f, 0x7, 0x43, 0x2, 0x2, 0x15f, 0x160, 0x5, 0x22, 
    0x12, 0x2, 0x160, 0x161, 0x7, 0x44, 0x2, 0x2, 0x161, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x163, 0x7, 0x26, 0x2, 0x2, 0x163, 0x164, 0x7, 0x43, 
    0x2, 0x2, 0x164, 0x165, 0x5, 0x22, 0x12, 0x2, 0x165, 0x166, 0x7, 0x44, 
    0x2, 0x2, 0x166, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x7, 0x27, 
    0x2, 0x2, 0x168, 0x169, 0x7, 0x43, 0x2, 0x2, 0x169, 0x16a, 0x5, 0x22, 
    0x12, 0x2, 0x16a, 0x16b, 0x7, 0x44, 0x2, 0x2, 0x16b, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16d, 0x7, 0x28, 0x2, 0x2, 0x16d, 0x16e, 0x7, 0x43, 
    0x2, 0x2, 0x16e, 0x16f, 0x5, 0x22, 0x12, 0x2, 0x16f, 0x170, 0x7, 0x44, 
    0x2, 0x2, 0x170, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x7, 0x2c, 
    0x2, 0x2, 0x172, 0x173, 0x7, 0x43, 0x2, 0x2, 0x173, 0x174, 0x5, 0x22, 
    0x12, 0x2, 0x174, 0x175, 0x7, 0x44, 0x2, 0x2, 0x175, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x176, 0x177, 0x7, 0x2d, 0x2, 0x2, 0x177, 0x178, 0x7, 0x43, 
    0x2, 0x2, 0x178, 0x179, 0x5, 0x22, 0x12, 0x2, 0x179, 0x17a, 0x7, 0x44, 
    0x2, 0x2, 0x17a, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x7, 0x2e, 
    0x2, 0x2, 0x17c, 0x17d, 0x7, 0x43, 0x2, 0x2, 0x17d, 0x17e, 0x5, 0x22, 
    0x12, 0x2, 0x17e, 0x17f, 0x7, 0x44, 0x2, 0x2, 0x17f, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x180, 0x181, 0x7, 0x2f, 0x2, 0x2, 0x181, 0x182, 0x7, 0x43, 
    0x2, 0x2, 0x182, 0x183, 0x5, 0x22, 0x12, 0x2, 0x183, 0x184, 0x7, 0x44, 
    0x2, 0x2, 0x184, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x7, 0x30, 
    0x2, 0x2, 0x186, 0x187, 0x7, 0x43, 0x2, 0x2, 0x187, 0x188, 0x5, 0x22, 
    0x12, 0x2, 0x188, 0x189, 0x7, 0x44, 0x2, 0x2, 0x189, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x18a, 0x18b, 0x7, 0x31, 0x2, 0x2, 0x18b, 0x18c, 0x7, 0x43, 
    0x2, 0x2, 0x18c, 0x18d, 0x5, 0x22, 0x12, 0x2, 0x18d, 0x18e, 0x7, 0x44, 
    0x2, 0x2, 0x18e, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x32, 
    0x2, 0x2, 0x190, 0x191, 0x7, 0x43, 0x2, 0x2, 0x191, 0x192, 0x5, 0x22, 
    0x12, 0x2, 0x192, 0x193, 0x7, 0x44, 0x2, 0x2, 0x193, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x194, 0x195, 0x7, 0x33, 0x2, 0x2, 0x195, 0x196, 0x7, 0x43, 
    0x2, 0x2, 0x196, 0x197, 0x5, 0x22, 0x12, 0x2, 0x197, 0x198, 0x7, 0x44, 
    0x2, 0x2, 0x198, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x7, 0x29, 
    0x2, 0x2, 0x19a, 0x19b, 0x7, 0x43, 0x2, 0x2, 0x19b, 0x19c, 0x5, 0x22, 
    0x12, 0x2, 0x19c, 0x19d, 0x7, 0x44, 0x2, 0x2, 0x19d, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x19e, 0x19f, 0x7, 0x2a, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 0x43, 
    0x2, 0x2, 0x1a0, 0x1a1, 0x5, 0x22, 0x12, 0x2, 0x1a1, 0x1a2, 0x7, 0x44, 
    0x2, 0x2, 0x1a2, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 0x2b, 
    0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x43, 0x2, 0x2, 0x1a5, 0x1a6, 0x5, 0x22, 
    0x12, 0x2, 0x1a6, 0x1a7, 0x7, 0x44, 0x2, 0x2, 0x1a7, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x1a8, 0x1a9, 0x7, 0x34, 0x2, 0x2, 0x1a9, 0x1aa, 0x7, 0x43, 
    0x2, 0x2, 0x1aa, 0x1ab, 0x5, 0x22, 0x12, 0x2, 0x1ab, 0x1ac, 0x7, 0x44, 
    0x2, 0x2, 0x1ac, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x35, 
    0x2, 0x2, 0x1ae, 0x1af, 0x7, 0x43, 0x2, 0x2, 0x1af, 0x1b0, 0x5, 0x22, 
    0x12, 0x2, 0x1b0, 0x1b1, 0x7, 0x44, 0x2, 0x2, 0x1b1, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x1b2, 0x1b3, 0x7, 0x37, 0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0x43, 
    0x2, 0x2, 0x1b4, 0x1b5, 0x5, 0x22, 0x12, 0x2, 0x1b5, 0x1b6, 0x7, 0x47, 
    0x2, 0x2, 0x1b6, 0x1b7, 0x5, 0x22, 0x12, 0x2, 0x1b7, 0x1b8, 0x7, 0x44, 
    0x2, 0x2, 0x1b8, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1bc, 0x9, 0x7, 
    0x2, 0x2, 0x1ba, 0x1bc, 0x7, 0x40, 0x2, 0x2, 0x1bb, 0x140, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x143, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x149, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x14e, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x153, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x158, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x167, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x16c, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x171, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x176, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x185, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x18a, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x194, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x199, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x19e, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1a8, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b2, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1ba, 0x3, 0x2, 
    0x2, 0x2, 0x1bc, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0xc, 0x20, 
    0x2, 0x2, 0x1be, 0x1bf, 0x7, 0x55, 0x2, 0x2, 0x1bf, 0x1c7, 0x5, 0x22, 
    0x12, 0x21, 0x1c0, 0x1c1, 0xc, 0x1d, 0x2, 0x2, 0x1c1, 0x1c2, 0x9, 0x5, 
    0x2, 0x2, 0x1c2, 0x1c7, 0x5, 0x22, 0x12, 0x1e, 0x1c3, 0x1c4, 0xc, 0x1c, 
    0x2, 0x2, 0x1c4, 0x1c5, 0x9, 0x6, 0x2, 0x2, 0x1c5, 0x1c7, 0x5, 0x22, 
    0x12, 0x1d, 0x1c6, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c0, 0x3, 0x2, 
    0x2, 0x2, 0x1c6, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1ca, 0x3, 0x2, 
    0x2, 0x2, 0x1c8, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x3, 0x2, 
    0x2, 0x2, 0x1c9, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 
    0x2, 0x1cb, 0x1cc, 0x7, 0x38, 0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x40, 0x2, 
    0x2, 0x1cd, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x7, 0x7, 0x2, 0x2, 
    0x1cf, 0x1d0, 0x7, 0x41, 0x2, 0x2, 0x1d0, 0x1d1, 0x5, 0x1a, 0xe, 0x2, 
    0x1d1, 0x1d2, 0x7, 0x42, 0x2, 0x2, 0x1d2, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x1d3, 0x1d4, 0x7, 0x8, 0x2, 0x2, 0x1d4, 0x1d6, 0x7, 0x41, 0x2, 0x2, 
    0x1d5, 0x1d7, 0x5, 0x8, 0x5, 0x2, 0x1d6, 0x1d5, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 
    0x1d8, 0x1d9, 0x7, 0x42, 0x2, 0x2, 0x1d9, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x1da, 0x1db, 0x7, 0x6, 0x2, 0x2, 0x1db, 0x1dc, 0x7, 0x41, 0x2, 0x2, 
    0x1dc, 0x1dd, 0x5, 0x24, 0x13, 0x2, 0x1dd, 0x1de, 0x5, 0x26, 0x14, 0x2, 
    0x1de, 0x1df, 0x5, 0x28, 0x15, 0x2, 0x1df, 0x1e0, 0x7, 0x42, 0x2, 0x2, 
    0x1e0, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x5, 0x2, 0x2, 0x1e2, 
    0x1e4, 0x7, 0x41, 0x2, 0x2, 0x1e3, 0x1e5, 0x5, 0x2a, 0x16, 0x2, 0x1e4, 
    0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e7, 
    0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x42, 0x2, 0x2, 0x1e9, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x7, 0x18, 0x2, 0x2, 0x1eb, 
    0x1ec, 0x7, 0x40, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 0x4f, 0x2, 0x2, 0x1ed, 
    0x1ee, 0x7, 0x40, 0x2, 0x2, 0x1ee, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1ef, 
    0x1f0, 0x7, 0x19, 0x2, 0x2, 0x1f0, 0x1f2, 0x7, 0x41, 0x2, 0x2, 0x1f1, 
    0x1f3, 0x5, 0x8, 0x5, 0x2, 0x1f2, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
    0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f4, 
    0x1f5, 0x7, 0x42, 0x2, 0x2, 0x1f5, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1f6, 
    0x1f7, 0x7, 0x40, 0x2, 0x2, 0x1f7, 0x1f8, 0x7, 0x4e, 0x2, 0x2, 0x1f8, 
    0x1f9, 0x5, 0x22, 0x12, 0x2, 0x1f9, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1fa, 
    0x1fb, 0x7, 0x1a, 0x2, 0x2, 0x1fb, 0x1ff, 0x7, 0x41, 0x2, 0x2, 0x1fc, 
    0x1fe, 0x5, 0x32, 0x1a, 0x2, 0x1fd, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fe, 
    0x201, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 
    0x200, 0x3, 0x2, 0x2, 0x2, 0x200, 0x202, 0x3, 0x2, 0x2, 0x2, 0x201, 
    0x1ff, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x7, 0x42, 0x2, 0x2, 0x203, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x7, 0x17, 0x2, 0x2, 0x205, 
    0x206, 0x7, 0x41, 0x2, 0x2, 0x206, 0x207, 0x5, 0x2e, 0x18, 0x2, 0x207, 
    0x208, 0x5, 0x30, 0x19, 0x2, 0x208, 0x209, 0x5, 0x34, 0x1b, 0x2, 0x209, 
    0x20a, 0x7, 0x42, 0x2, 0x2, 0x20a, 0x37, 0x3, 0x2, 0x2, 0x2, 0x20b, 
    0x20c, 0x7, 0x15, 0x2, 0x2, 0x20c, 0x210, 0x7, 0x41, 0x2, 0x2, 0x20d, 
    0x20f, 0x5, 0x36, 0x1c, 0x2, 0x20e, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20f, 
    0x212, 0x3, 0x2, 0x2, 0x2, 0x210, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x210, 
    0x211, 0x3, 0x2, 0x2, 0x2, 0x211, 0x213, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x210, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x7, 0x42, 0x2, 0x2, 0x214, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x3e, 0x43, 0x46, 0x4b, 0x5c, 0x63, 
    0x6d, 0x72, 0x7b, 0x80, 0x8b, 0x94, 0x99, 0xa1, 0xaa, 0xae, 0xb3, 0x130, 
    0x13b, 0x13d, 0x1bb, 0x1c6, 0x1c8, 0x1d6, 0x1e6, 0x1f2, 0x1ff, 0x210, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

hybridautomatonParser::Initializer hybridautomatonParser::_init;
