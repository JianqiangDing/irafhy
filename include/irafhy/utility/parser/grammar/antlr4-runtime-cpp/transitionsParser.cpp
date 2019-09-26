
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/transitions.g4 by ANTLR 4.7.2


#include "transitionsListener.h"
#include "transitionsVisitor.h"

#include "transitionsParser.h"


using namespace antlrcpp;
using namespace antlr4;

transitionsParser::transitionsParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

transitionsParser::~transitionsParser() {
  delete _interpreter;
}

std::string transitionsParser::getGrammarFileName() const {
  return "transitions.g4";
}

const std::vector<std::string>& transitionsParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& transitionsParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- DirectionContext ------------------------------------------------------------------

transitionsParser::DirectionContext::DirectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::DirectionContext::KEY_DIRECTION() {
  return getToken(transitionsParser::KEY_DIRECTION, 0);
}

std::vector<tree::TerminalNode *> transitionsParser::DirectionContext::VARIABLE() {
  return getTokens(transitionsParser::VARIABLE);
}

tree::TerminalNode* transitionsParser::DirectionContext::VARIABLE(size_t i) {
  return getToken(transitionsParser::VARIABLE, i);
}

tree::TerminalNode* transitionsParser::DirectionContext::FROMTO() {
  return getToken(transitionsParser::FROMTO, 0);
}


size_t transitionsParser::DirectionContext::getRuleIndex() const {
  return transitionsParser::RuleDirection;
}

void transitionsParser::DirectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirection(this);
}

void transitionsParser::DirectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirection(this);
}


antlrcpp::Any transitionsParser::DirectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitDirection(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::DirectionContext* transitionsParser::direction() {
  DirectionContext *_localctx = _tracker.createInstance<DirectionContext>(_ctx, getState());
  enterRule(_localctx, 0, transitionsParser::RuleDirection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(transitionsParser::KEY_DIRECTION);
    setState(39);
    match(transitionsParser::VARIABLE);
    setState(40);
    match(transitionsParser::FROMTO);
    setState(41);
    match(transitionsParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GuardconditionContext ------------------------------------------------------------------

transitionsParser::GuardconditionContext::GuardconditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::GuardconditionContext::KEY_GUARD_CONDITIONS() {
  return getToken(transitionsParser::KEY_GUARD_CONDITIONS, 0);
}

tree::TerminalNode* transitionsParser::GuardconditionContext::LEFTCURLYBRACKET() {
  return getToken(transitionsParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* transitionsParser::GuardconditionContext::RIGHTCURLYBRACKET() {
  return getToken(transitionsParser::RIGHTCURLYBRACKET, 0);
}

transitionsParser::ConditionContext* transitionsParser::GuardconditionContext::condition() {
  return getRuleContext<transitionsParser::ConditionContext>(0);
}


size_t transitionsParser::GuardconditionContext::getRuleIndex() const {
  return transitionsParser::RuleGuardcondition;
}

void transitionsParser::GuardconditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGuardcondition(this);
}

void transitionsParser::GuardconditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGuardcondition(this);
}


antlrcpp::Any transitionsParser::GuardconditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitGuardcondition(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::GuardconditionContext* transitionsParser::guardcondition() {
  GuardconditionContext *_localctx = _tracker.createInstance<GuardconditionContext>(_ctx, getState());
  enterRule(_localctx, 2, transitionsParser::RuleGuardcondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(transitionsParser::KEY_GUARD_CONDITIONS);
    setState(44);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(46);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == transitionsParser::KEY_CONDITION) {
      setState(45);
      condition();
    }
    setState(48);
    match(transitionsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpdatefunctionContext ------------------------------------------------------------------

transitionsParser::UpdatefunctionContext::UpdatefunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::UpdatefunctionContext::VARIABLE() {
  return getToken(transitionsParser::VARIABLE, 0);
}

tree::TerminalNode* transitionsParser::UpdatefunctionContext::DEFINE() {
  return getToken(transitionsParser::DEFINE, 0);
}

transitionsParser::ExpressionContext* transitionsParser::UpdatefunctionContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}


size_t transitionsParser::UpdatefunctionContext::getRuleIndex() const {
  return transitionsParser::RuleUpdatefunction;
}

void transitionsParser::UpdatefunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdatefunction(this);
}

void transitionsParser::UpdatefunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdatefunction(this);
}


antlrcpp::Any transitionsParser::UpdatefunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitUpdatefunction(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::UpdatefunctionContext* transitionsParser::updatefunction() {
  UpdatefunctionContext *_localctx = _tracker.createInstance<UpdatefunctionContext>(_ctx, getState());
  enterRule(_localctx, 4, transitionsParser::RuleUpdatefunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(transitionsParser::VARIABLE);
    setState(51);
    match(transitionsParser::DEFINE);
    setState(52);
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

transitionsParser::ResetmapContext::ResetmapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::ResetmapContext::KEY_RESET_MAP() {
  return getToken(transitionsParser::KEY_RESET_MAP, 0);
}

tree::TerminalNode* transitionsParser::ResetmapContext::LEFTCURLYBRACKET() {
  return getToken(transitionsParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* transitionsParser::ResetmapContext::RIGHTCURLYBRACKET() {
  return getToken(transitionsParser::RIGHTCURLYBRACKET, 0);
}

std::vector<transitionsParser::UpdatefunctionContext *> transitionsParser::ResetmapContext::updatefunction() {
  return getRuleContexts<transitionsParser::UpdatefunctionContext>();
}

transitionsParser::UpdatefunctionContext* transitionsParser::ResetmapContext::updatefunction(size_t i) {
  return getRuleContext<transitionsParser::UpdatefunctionContext>(i);
}


size_t transitionsParser::ResetmapContext::getRuleIndex() const {
  return transitionsParser::RuleResetmap;
}

void transitionsParser::ResetmapContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResetmap(this);
}

void transitionsParser::ResetmapContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResetmap(this);
}


antlrcpp::Any transitionsParser::ResetmapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitResetmap(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::ResetmapContext* transitionsParser::resetmap() {
  ResetmapContext *_localctx = _tracker.createInstance<ResetmapContext>(_ctx, getState());
  enterRule(_localctx, 6, transitionsParser::RuleResetmap);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(transitionsParser::KEY_RESET_MAP);
    setState(55);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == transitionsParser::VARIABLE) {
      setState(56);
      updatefunction();
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(62);
    match(transitionsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpContext ------------------------------------------------------------------

transitionsParser::JumpContext::JumpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::JumpContext::KEY_JUMP() {
  return getToken(transitionsParser::KEY_JUMP, 0);
}

tree::TerminalNode* transitionsParser::JumpContext::LEFTCURLYBRACKET() {
  return getToken(transitionsParser::LEFTCURLYBRACKET, 0);
}

transitionsParser::DirectionContext* transitionsParser::JumpContext::direction() {
  return getRuleContext<transitionsParser::DirectionContext>(0);
}

transitionsParser::GuardconditionContext* transitionsParser::JumpContext::guardcondition() {
  return getRuleContext<transitionsParser::GuardconditionContext>(0);
}

transitionsParser::ResetmapContext* transitionsParser::JumpContext::resetmap() {
  return getRuleContext<transitionsParser::ResetmapContext>(0);
}

tree::TerminalNode* transitionsParser::JumpContext::RIGHTCURLYBRACKET() {
  return getToken(transitionsParser::RIGHTCURLYBRACKET, 0);
}


size_t transitionsParser::JumpContext::getRuleIndex() const {
  return transitionsParser::RuleJump;
}

void transitionsParser::JumpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJump(this);
}

void transitionsParser::JumpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJump(this);
}


antlrcpp::Any transitionsParser::JumpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitJump(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::JumpContext* transitionsParser::jump() {
  JumpContext *_localctx = _tracker.createInstance<JumpContext>(_ctx, getState());
  enterRule(_localctx, 8, transitionsParser::RuleJump);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(transitionsParser::KEY_JUMP);
    setState(65);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(66);
    direction();
    setState(67);
    guardcondition();
    setState(68);
    resetmap();
    setState(69);
    match(transitionsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TransitionsContext ------------------------------------------------------------------

transitionsParser::TransitionsContext::TransitionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::TransitionsContext::KEY_TRANSITIONS() {
  return getToken(transitionsParser::KEY_TRANSITIONS, 0);
}

tree::TerminalNode* transitionsParser::TransitionsContext::LEFTCURLYBRACKET() {
  return getToken(transitionsParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* transitionsParser::TransitionsContext::RIGHTCURLYBRACKET() {
  return getToken(transitionsParser::RIGHTCURLYBRACKET, 0);
}

std::vector<transitionsParser::JumpContext *> transitionsParser::TransitionsContext::jump() {
  return getRuleContexts<transitionsParser::JumpContext>();
}

transitionsParser::JumpContext* transitionsParser::TransitionsContext::jump(size_t i) {
  return getRuleContext<transitionsParser::JumpContext>(i);
}


size_t transitionsParser::TransitionsContext::getRuleIndex() const {
  return transitionsParser::RuleTransitions;
}

void transitionsParser::TransitionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTransitions(this);
}

void transitionsParser::TransitionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTransitions(this);
}


antlrcpp::Any transitionsParser::TransitionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitTransitions(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::TransitionsContext* transitionsParser::transitions() {
  TransitionsContext *_localctx = _tracker.createInstance<TransitionsContext>(_ctx, getState());
  enterRule(_localctx, 10, transitionsParser::RuleTransitions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(transitionsParser::KEY_TRANSITIONS);
    setState(72);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == transitionsParser::KEY_JUMP) {
      setState(73);
      jump();
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(79);
    match(transitionsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

transitionsParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::ConditionContext::KEY_CONDITION() {
  return getToken(transitionsParser::KEY_CONDITION, 0);
}

tree::TerminalNode* transitionsParser::ConditionContext::LEFTCURLYBRACKET() {
  return getToken(transitionsParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* transitionsParser::ConditionContext::RIGHTCURLYBRACKET() {
  return getToken(transitionsParser::RIGHTCURLYBRACKET, 0);
}

transitionsParser::IntervalhullContext* transitionsParser::ConditionContext::intervalhull() {
  return getRuleContext<transitionsParser::IntervalhullContext>(0);
}

transitionsParser::PolytopeContext* transitionsParser::ConditionContext::polytope() {
  return getRuleContext<transitionsParser::PolytopeContext>(0);
}


size_t transitionsParser::ConditionContext::getRuleIndex() const {
  return transitionsParser::RuleCondition;
}

void transitionsParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void transitionsParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any transitionsParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::ConditionContext* transitionsParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 12, transitionsParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(transitionsParser::KEY_CONDITION);
    setState(82);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(85);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case transitionsParser::KEY_INTERVAL_HULL: {
        setState(83);
        intervalhull();
        break;
      }

      case transitionsParser::KEY_POLYTOPE: {
        setState(84);
        polytope();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(87);
    match(transitionsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PolytopeContext ------------------------------------------------------------------

transitionsParser::PolytopeContext::PolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::PolytopeContext::KEY_POLYTOPE() {
  return getToken(transitionsParser::KEY_POLYTOPE, 0);
}

transitionsParser::HpolytopeContext* transitionsParser::PolytopeContext::hpolytope() {
  return getRuleContext<transitionsParser::HpolytopeContext>(0);
}

transitionsParser::VpolytopeContext* transitionsParser::PolytopeContext::vpolytope() {
  return getRuleContext<transitionsParser::VpolytopeContext>(0);
}


size_t transitionsParser::PolytopeContext::getRuleIndex() const {
  return transitionsParser::RulePolytope;
}

void transitionsParser::PolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPolytope(this);
}

void transitionsParser::PolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPolytope(this);
}


antlrcpp::Any transitionsParser::PolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitPolytope(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::PolytopeContext* transitionsParser::polytope() {
  PolytopeContext *_localctx = _tracker.createInstance<PolytopeContext>(_ctx, getState());
  enterRule(_localctx, 14, transitionsParser::RulePolytope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(transitionsParser::KEY_POLYTOPE);
    setState(92);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(90);
      hpolytope();
      break;
    }

    case 2: {
      setState(91);
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

transitionsParser::HpolytopeContext::HpolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::HpolytopeContext::LEFTCURLYBRACKET() {
  return getToken(transitionsParser::LEFTCURLYBRACKET, 0);
}

transitionsParser::MatrixContext* transitionsParser::HpolytopeContext::matrix() {
  return getRuleContext<transitionsParser::MatrixContext>(0);
}

transitionsParser::VectorContext* transitionsParser::HpolytopeContext::vector() {
  return getRuleContext<transitionsParser::VectorContext>(0);
}

tree::TerminalNode* transitionsParser::HpolytopeContext::RIGHTCURLYBRACKET() {
  return getToken(transitionsParser::RIGHTCURLYBRACKET, 0);
}


size_t transitionsParser::HpolytopeContext::getRuleIndex() const {
  return transitionsParser::RuleHpolytope;
}

void transitionsParser::HpolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHpolytope(this);
}

void transitionsParser::HpolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHpolytope(this);
}


antlrcpp::Any transitionsParser::HpolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitHpolytope(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::HpolytopeContext* transitionsParser::hpolytope() {
  HpolytopeContext *_localctx = _tracker.createInstance<HpolytopeContext>(_ctx, getState());
  enterRule(_localctx, 16, transitionsParser::RuleHpolytope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(95);
    matrix();
    setState(96);
    vector();
    setState(97);
    match(transitionsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VpolytopeContext ------------------------------------------------------------------

transitionsParser::VpolytopeContext::VpolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::VpolytopeContext::LEFTCURLYBRACKET() {
  return getToken(transitionsParser::LEFTCURLYBRACKET, 0);
}

std::vector<transitionsParser::VectorContext *> transitionsParser::VpolytopeContext::vector() {
  return getRuleContexts<transitionsParser::VectorContext>();
}

transitionsParser::VectorContext* transitionsParser::VpolytopeContext::vector(size_t i) {
  return getRuleContext<transitionsParser::VectorContext>(i);
}

tree::TerminalNode* transitionsParser::VpolytopeContext::RIGHTCURLYBRACKET() {
  return getToken(transitionsParser::RIGHTCURLYBRACKET, 0);
}

std::vector<tree::TerminalNode *> transitionsParser::VpolytopeContext::COMMA() {
  return getTokens(transitionsParser::COMMA);
}

tree::TerminalNode* transitionsParser::VpolytopeContext::COMMA(size_t i) {
  return getToken(transitionsParser::COMMA, i);
}


size_t transitionsParser::VpolytopeContext::getRuleIndex() const {
  return transitionsParser::RuleVpolytope;
}

void transitionsParser::VpolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVpolytope(this);
}

void transitionsParser::VpolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVpolytope(this);
}


antlrcpp::Any transitionsParser::VpolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitVpolytope(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::VpolytopeContext* transitionsParser::vpolytope() {
  VpolytopeContext *_localctx = _tracker.createInstance<VpolytopeContext>(_ctx, getState());
  enterRule(_localctx, 18, transitionsParser::RuleVpolytope);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(100);
    vector();
    setState(105); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(102);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == transitionsParser::COMMA) {
        setState(101);
        match(transitionsParser::COMMA);
      }
      setState(104);
      vector();
      setState(107); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == transitionsParser::LEFTROUNDBRACKET

    || _la == transitionsParser::COMMA);
    setState(109);
    match(transitionsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatrixContext ------------------------------------------------------------------

transitionsParser::MatrixContext::MatrixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::MatrixContext::KEY_MATRIX() {
  return getToken(transitionsParser::KEY_MATRIX, 0);
}

tree::TerminalNode* transitionsParser::MatrixContext::LEFTCURLYBRACKET() {
  return getToken(transitionsParser::LEFTCURLYBRACKET, 0);
}

std::vector<transitionsParser::VectorContext *> transitionsParser::MatrixContext::vector() {
  return getRuleContexts<transitionsParser::VectorContext>();
}

transitionsParser::VectorContext* transitionsParser::MatrixContext::vector(size_t i) {
  return getRuleContext<transitionsParser::VectorContext>(i);
}

tree::TerminalNode* transitionsParser::MatrixContext::RIGHTCURLYBRACKET() {
  return getToken(transitionsParser::RIGHTCURLYBRACKET, 0);
}

tree::TerminalNode* transitionsParser::MatrixContext::KEY_ROW_MAJOR_ORDER() {
  return getToken(transitionsParser::KEY_ROW_MAJOR_ORDER, 0);
}

tree::TerminalNode* transitionsParser::MatrixContext::KEY_COL_MAJOR_ORDER() {
  return getToken(transitionsParser::KEY_COL_MAJOR_ORDER, 0);
}

std::vector<tree::TerminalNode *> transitionsParser::MatrixContext::COMMA() {
  return getTokens(transitionsParser::COMMA);
}

tree::TerminalNode* transitionsParser::MatrixContext::COMMA(size_t i) {
  return getToken(transitionsParser::COMMA, i);
}


size_t transitionsParser::MatrixContext::getRuleIndex() const {
  return transitionsParser::RuleMatrix;
}

void transitionsParser::MatrixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrix(this);
}

void transitionsParser::MatrixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrix(this);
}


antlrcpp::Any transitionsParser::MatrixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitMatrix(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::MatrixContext* transitionsParser::matrix() {
  MatrixContext *_localctx = _tracker.createInstance<MatrixContext>(_ctx, getState());
  enterRule(_localctx, 20, transitionsParser::RuleMatrix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(transitionsParser::KEY_MATRIX);
    setState(112);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(113);
    dynamic_cast<MatrixContext *>(_localctx)->MAJOR_ORDER = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == transitionsParser::KEY_ROW_MAJOR_ORDER

    || _la == transitionsParser::KEY_COL_MAJOR_ORDER)) {
      dynamic_cast<MatrixContext *>(_localctx)->MAJOR_ORDER = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(114);
    vector();
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == transitionsParser::LEFTROUNDBRACKET

    || _la == transitionsParser::COMMA) {
      setState(116);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == transitionsParser::COMMA) {
        setState(115);
        match(transitionsParser::COMMA);
      }
      setState(118);
      vector();
      setState(123);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(124);
    match(transitionsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorContext ------------------------------------------------------------------

transitionsParser::VectorContext::VectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::VectorContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

std::vector<tree::TerminalNode *> transitionsParser::VectorContext::NUMBER() {
  return getTokens(transitionsParser::NUMBER);
}

tree::TerminalNode* transitionsParser::VectorContext::NUMBER(size_t i) {
  return getToken(transitionsParser::NUMBER, i);
}

tree::TerminalNode* transitionsParser::VectorContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

std::vector<tree::TerminalNode *> transitionsParser::VectorContext::PLUS() {
  return getTokens(transitionsParser::PLUS);
}

tree::TerminalNode* transitionsParser::VectorContext::PLUS(size_t i) {
  return getToken(transitionsParser::PLUS, i);
}

std::vector<tree::TerminalNode *> transitionsParser::VectorContext::MINUS() {
  return getTokens(transitionsParser::MINUS);
}

tree::TerminalNode* transitionsParser::VectorContext::MINUS(size_t i) {
  return getToken(transitionsParser::MINUS, i);
}

std::vector<tree::TerminalNode *> transitionsParser::VectorContext::COMMA() {
  return getTokens(transitionsParser::COMMA);
}

tree::TerminalNode* transitionsParser::VectorContext::COMMA(size_t i) {
  return getToken(transitionsParser::COMMA, i);
}


size_t transitionsParser::VectorContext::getRuleIndex() const {
  return transitionsParser::RuleVector;
}

void transitionsParser::VectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVector(this);
}

void transitionsParser::VectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVector(this);
}


antlrcpp::Any transitionsParser::VectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitVector(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::VectorContext* transitionsParser::vector() {
  VectorContext *_localctx = _tracker.createInstance<VectorContext>(_ctx, getState());
  enterRule(_localctx, 22, transitionsParser::RuleVector);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(transitionsParser::LEFTROUNDBRACKET);
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == transitionsParser::PLUS

    || _la == transitionsParser::MINUS) {
      setState(127);
      dynamic_cast<VectorContext *>(_localctx)->_tset115 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == transitionsParser::PLUS

      || _la == transitionsParser::MINUS)) {
        dynamic_cast<VectorContext *>(_localctx)->_tset115 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<VectorContext *>(_localctx)->OP.push_back(dynamic_cast<VectorContext *>(_localctx)->_tset115);
    }
    setState(130);
    match(transitionsParser::NUMBER);
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (transitionsParser::NUMBER - 59))
      | (1ULL << (transitionsParser::COMMA - 59))
      | (1ULL << (transitionsParser::PLUS - 59))
      | (1ULL << (transitionsParser::MINUS - 59)))) != 0)) {
      setState(132);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == transitionsParser::COMMA) {
        setState(131);
        match(transitionsParser::COMMA);
      }
      setState(135);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == transitionsParser::PLUS

      || _la == transitionsParser::MINUS) {
        setState(134);
        dynamic_cast<VectorContext *>(_localctx)->_tset135 = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == transitionsParser::PLUS

        || _la == transitionsParser::MINUS)) {
          dynamic_cast<VectorContext *>(_localctx)->_tset135 = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        dynamic_cast<VectorContext *>(_localctx)->OP.push_back(dynamic_cast<VectorContext *>(_localctx)->_tset135);
      }
      setState(137);
      match(transitionsParser::NUMBER);
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(143);
    match(transitionsParser::RIGHTROUNDBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalhullContext ------------------------------------------------------------------

transitionsParser::IntervalhullContext::IntervalhullContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::IntervalhullContext::KEY_INTERVAL_HULL() {
  return getToken(transitionsParser::KEY_INTERVAL_HULL, 0);
}

tree::TerminalNode* transitionsParser::IntervalhullContext::LEFTCURLYBRACKET() {
  return getToken(transitionsParser::LEFTCURLYBRACKET, 0);
}

std::vector<transitionsParser::IntervalContext *> transitionsParser::IntervalhullContext::interval() {
  return getRuleContexts<transitionsParser::IntervalContext>();
}

transitionsParser::IntervalContext* transitionsParser::IntervalhullContext::interval(size_t i) {
  return getRuleContext<transitionsParser::IntervalContext>(i);
}

tree::TerminalNode* transitionsParser::IntervalhullContext::RIGHTCURLYBRACKET() {
  return getToken(transitionsParser::RIGHTCURLYBRACKET, 0);
}

std::vector<tree::TerminalNode *> transitionsParser::IntervalhullContext::COMMA() {
  return getTokens(transitionsParser::COMMA);
}

tree::TerminalNode* transitionsParser::IntervalhullContext::COMMA(size_t i) {
  return getToken(transitionsParser::COMMA, i);
}


size_t transitionsParser::IntervalhullContext::getRuleIndex() const {
  return transitionsParser::RuleIntervalhull;
}

void transitionsParser::IntervalhullContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntervalhull(this);
}

void transitionsParser::IntervalhullContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntervalhull(this);
}


antlrcpp::Any transitionsParser::IntervalhullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitIntervalhull(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::IntervalhullContext* transitionsParser::intervalhull() {
  IntervalhullContext *_localctx = _tracker.createInstance<IntervalhullContext>(_ctx, getState());
  enterRule(_localctx, 24, transitionsParser::RuleIntervalhull);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(transitionsParser::KEY_INTERVAL_HULL);
    setState(146);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(147);
    interval();
    setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == transitionsParser::LEFTSQUAREBRACKET

    || _la == transitionsParser::COMMA) {
      setState(149);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == transitionsParser::COMMA) {
        setState(148);
        match(transitionsParser::COMMA);
      }
      setState(151);
      interval();
      setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(157);
    match(transitionsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintsContext ------------------------------------------------------------------

transitionsParser::ConstraintsContext::ConstraintsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<transitionsParser::ConstraintContext *> transitionsParser::ConstraintsContext::constraint() {
  return getRuleContexts<transitionsParser::ConstraintContext>();
}

transitionsParser::ConstraintContext* transitionsParser::ConstraintsContext::constraint(size_t i) {
  return getRuleContext<transitionsParser::ConstraintContext>(i);
}


size_t transitionsParser::ConstraintsContext::getRuleIndex() const {
  return transitionsParser::RuleConstraints;
}

void transitionsParser::ConstraintsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraints(this);
}

void transitionsParser::ConstraintsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraints(this);
}


antlrcpp::Any transitionsParser::ConstraintsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitConstraints(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::ConstraintsContext* transitionsParser::constraints() {
  ConstraintsContext *_localctx = _tracker.createInstance<ConstraintsContext>(_ctx, getState());
  enterRule(_localctx, 26, transitionsParser::RuleConstraints);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(159);
      constraint();
      setState(162); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 29) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 29)) & ((1ULL << (transitionsParser::KEY_SIN_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_ARCSIN_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_COS_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_ARCCOS_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_TAN_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_ARCTAN_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_COT_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_ARCCOT_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_LN_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_LOG_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_NATURAL_EXP_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_SINH_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_ARCSINH_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_COSH_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_ARCCOSH_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_TANH_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_ARCTANH_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_COTH_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_ARCCOTH_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_SQR_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_SQRT_FUNCTION - 29))
      | (1ULL << (transitionsParser::KEY_POWER_FUNCTION - 29))
      | (1ULL << (transitionsParser::SCINUM - 29))
      | (1ULL << (transitionsParser::NUMBER - 29))
      | (1ULL << (transitionsParser::VARIABLE - 29))
      | (1ULL << (transitionsParser::LEFTROUNDBRACKET - 29))
      | (1ULL << (transitionsParser::PLUS - 29))
      | (1ULL << (transitionsParser::MINUS - 29)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintContext ------------------------------------------------------------------

transitionsParser::ConstraintContext::ConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

transitionsParser::ExpressionContext* transitionsParser::ConstraintContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::ConstraintContext::NUMBER() {
  return getToken(transitionsParser::NUMBER, 0);
}

tree::TerminalNode* transitionsParser::ConstraintContext::SCINUM() {
  return getToken(transitionsParser::SCINUM, 0);
}

tree::TerminalNode* transitionsParser::ConstraintContext::EQUAL() {
  return getToken(transitionsParser::EQUAL, 0);
}

tree::TerminalNode* transitionsParser::ConstraintContext::UNEQUAL() {
  return getToken(transitionsParser::UNEQUAL, 0);
}

tree::TerminalNode* transitionsParser::ConstraintContext::GEQ() {
  return getToken(transitionsParser::GEQ, 0);
}

tree::TerminalNode* transitionsParser::ConstraintContext::LEQ() {
  return getToken(transitionsParser::LEQ, 0);
}

tree::TerminalNode* transitionsParser::ConstraintContext::LSS() {
  return getToken(transitionsParser::LSS, 0);
}

tree::TerminalNode* transitionsParser::ConstraintContext::GTR() {
  return getToken(transitionsParser::GTR, 0);
}

tree::TerminalNode* transitionsParser::ConstraintContext::PLUS() {
  return getToken(transitionsParser::PLUS, 0);
}

tree::TerminalNode* transitionsParser::ConstraintContext::MINUS() {
  return getToken(transitionsParser::MINUS, 0);
}


size_t transitionsParser::ConstraintContext::getRuleIndex() const {
  return transitionsParser::RuleConstraint;
}

void transitionsParser::ConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraint(this);
}

void transitionsParser::ConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraint(this);
}


antlrcpp::Any transitionsParser::ConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitConstraint(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::ConstraintContext* transitionsParser::constraint() {
  ConstraintContext *_localctx = _tracker.createInstance<ConstraintContext>(_ctx, getState());
  enterRule(_localctx, 28, transitionsParser::RuleConstraint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    expression(0);
    setState(165);
    dynamic_cast<ConstraintContext *>(_localctx)->RELATION = _input->LT(1);
    _la = _input->LA(1);
    if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (transitionsParser::EQUAL - 68))
      | (1ULL << (transitionsParser::UNEQUAL - 68))
      | (1ULL << (transitionsParser::GEQ - 68))
      | (1ULL << (transitionsParser::LEQ - 68))
      | (1ULL << (transitionsParser::LSS - 68))
      | (1ULL << (transitionsParser::GTR - 68)))) != 0))) {
      dynamic_cast<ConstraintContext *>(_localctx)->RELATION = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == transitionsParser::PLUS

    || _la == transitionsParser::MINUS) {
      setState(166);
      dynamic_cast<ConstraintContext *>(_localctx)->OP = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == transitionsParser::PLUS

      || _la == transitionsParser::MINUS)) {
        dynamic_cast<ConstraintContext *>(_localctx)->OP = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(169);
    _la = _input->LA(1);
    if (!(_la == transitionsParser::SCINUM

    || _la == transitionsParser::NUMBER)) {
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

transitionsParser::SystemContext::SystemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<transitionsParser::FormulaContext *> transitionsParser::SystemContext::formula() {
  return getRuleContexts<transitionsParser::FormulaContext>();
}

transitionsParser::FormulaContext* transitionsParser::SystemContext::formula(size_t i) {
  return getRuleContext<transitionsParser::FormulaContext>(i);
}


size_t transitionsParser::SystemContext::getRuleIndex() const {
  return transitionsParser::RuleSystem;
}

void transitionsParser::SystemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSystem(this);
}

void transitionsParser::SystemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSystem(this);
}


antlrcpp::Any transitionsParser::SystemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitSystem(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::SystemContext* transitionsParser::system() {
  SystemContext *_localctx = _tracker.createInstance<SystemContext>(_ctx, getState());
  enterRule(_localctx, 30, transitionsParser::RuleSystem);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(171);
      formula();
      setState(174); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == transitionsParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

transitionsParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::FormulaContext::VARIABLE() {
  return getToken(transitionsParser::VARIABLE, 0);
}

tree::TerminalNode* transitionsParser::FormulaContext::ASSIGN() {
  return getToken(transitionsParser::ASSIGN, 0);
}

transitionsParser::ExpressionContext* transitionsParser::FormulaContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::FormulaContext::DERIVATIVE() {
  return getToken(transitionsParser::DERIVATIVE, 0);
}

transitionsParser::IntervalContext* transitionsParser::FormulaContext::interval() {
  return getRuleContext<transitionsParser::IntervalContext>(0);
}


size_t transitionsParser::FormulaContext::getRuleIndex() const {
  return transitionsParser::RuleFormula;
}

void transitionsParser::FormulaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormula(this);
}

void transitionsParser::FormulaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormula(this);
}


antlrcpp::Any transitionsParser::FormulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitFormula(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::FormulaContext* transitionsParser::formula() {
  FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, getState());
  enterRule(_localctx, 32, transitionsParser::RuleFormula);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(transitionsParser::VARIABLE);
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == transitionsParser::DERIVATIVE) {
      setState(177);
      match(transitionsParser::DERIVATIVE);
    }
    setState(180);
    match(transitionsParser::ASSIGN);
    setState(181);
    expression(0);
    setState(183);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == transitionsParser::LEFTSQUAREBRACKET) {
      setState(182);
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

transitionsParser::IntervalContext::IntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* transitionsParser::IntervalContext::LEFTSQUAREBRACKET() {
  return getToken(transitionsParser::LEFTSQUAREBRACKET, 0);
}

tree::TerminalNode* transitionsParser::IntervalContext::COMMA() {
  return getToken(transitionsParser::COMMA, 0);
}

tree::TerminalNode* transitionsParser::IntervalContext::RIGHTSQUAREBRACKET() {
  return getToken(transitionsParser::RIGHTSQUAREBRACKET, 0);
}

std::vector<tree::TerminalNode *> transitionsParser::IntervalContext::NUMBER() {
  return getTokens(transitionsParser::NUMBER);
}

tree::TerminalNode* transitionsParser::IntervalContext::NUMBER(size_t i) {
  return getToken(transitionsParser::NUMBER, i);
}

std::vector<tree::TerminalNode *> transitionsParser::IntervalContext::SCINUM() {
  return getTokens(transitionsParser::SCINUM);
}

tree::TerminalNode* transitionsParser::IntervalContext::SCINUM(size_t i) {
  return getToken(transitionsParser::SCINUM, i);
}

std::vector<tree::TerminalNode *> transitionsParser::IntervalContext::KEY_INFINITY() {
  return getTokens(transitionsParser::KEY_INFINITY);
}

tree::TerminalNode* transitionsParser::IntervalContext::KEY_INFINITY(size_t i) {
  return getToken(transitionsParser::KEY_INFINITY, i);
}

std::vector<tree::TerminalNode *> transitionsParser::IntervalContext::PLUS() {
  return getTokens(transitionsParser::PLUS);
}

tree::TerminalNode* transitionsParser::IntervalContext::PLUS(size_t i) {
  return getToken(transitionsParser::PLUS, i);
}

std::vector<tree::TerminalNode *> transitionsParser::IntervalContext::MINUS() {
  return getTokens(transitionsParser::MINUS);
}

tree::TerminalNode* transitionsParser::IntervalContext::MINUS(size_t i) {
  return getToken(transitionsParser::MINUS, i);
}


size_t transitionsParser::IntervalContext::getRuleIndex() const {
  return transitionsParser::RuleInterval;
}

void transitionsParser::IntervalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterval(this);
}

void transitionsParser::IntervalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterval(this);
}


antlrcpp::Any transitionsParser::IntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitInterval(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::IntervalContext* transitionsParser::interval() {
  IntervalContext *_localctx = _tracker.createInstance<IntervalContext>(_ctx, getState());
  enterRule(_localctx, 34, transitionsParser::RuleInterval);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(transitionsParser::LEFTSQUAREBRACKET);
    setState(187);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == transitionsParser::PLUS

    || _la == transitionsParser::MINUS) {
      setState(186);
      dynamic_cast<IntervalContext *>(_localctx)->_tset270 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == transitionsParser::PLUS

      || _la == transitionsParser::MINUS)) {
        dynamic_cast<IntervalContext *>(_localctx)->_tset270 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<IntervalContext *>(_localctx)->OP.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset270);
    }
    setState(189);
    dynamic_cast<IntervalContext *>(_localctx)->_tset283 = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << transitionsParser::KEY_INFINITY)
      | (1ULL << transitionsParser::SCINUM)
      | (1ULL << transitionsParser::NUMBER))) != 0))) {
      dynamic_cast<IntervalContext *>(_localctx)->_tset283 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    dynamic_cast<IntervalContext *>(_localctx)->VAL.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset283);
    setState(190);
    match(transitionsParser::COMMA);
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == transitionsParser::PLUS

    || _la == transitionsParser::MINUS) {
      setState(191);
      dynamic_cast<IntervalContext *>(_localctx)->_tset303 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == transitionsParser::PLUS

      || _la == transitionsParser::MINUS)) {
        dynamic_cast<IntervalContext *>(_localctx)->_tset303 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<IntervalContext *>(_localctx)->OP.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset303);
    }
    setState(194);
    dynamic_cast<IntervalContext *>(_localctx)->_tset316 = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << transitionsParser::KEY_INFINITY)
      | (1ULL << transitionsParser::SCINUM)
      | (1ULL << transitionsParser::NUMBER))) != 0))) {
      dynamic_cast<IntervalContext *>(_localctx)->_tset316 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    dynamic_cast<IntervalContext *>(_localctx)->VAL.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset316);
    setState(195);
    match(transitionsParser::RIGHTSQUAREBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

transitionsParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t transitionsParser::ExpressionContext::getRuleIndex() const {
  return transitionsParser::RuleExpression;
}

void transitionsParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TanExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::TanExpContext::KEY_TAN_FUNCTION() {
  return getToken(transitionsParser::KEY_TAN_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::TanExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::TanExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::TanExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::TanExpContext::TanExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::TanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanExp(this);
}
void transitionsParser::TanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanExp(this);
}

antlrcpp::Any transitionsParser::TanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitTanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::SqrExpContext::KEY_SQR_FUNCTION() {
  return getToken(transitionsParser::KEY_SQR_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::SqrExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::SqrExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::SqrExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::SqrExpContext::SqrExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::SqrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrExp(this);
}
void transitionsParser::SqrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrExp(this);
}

antlrcpp::Any transitionsParser::SqrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitSqrExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::ConstantContext::NUMBER() {
  return getToken(transitionsParser::NUMBER, 0);
}

tree::TerminalNode* transitionsParser::ConstantContext::SCINUM() {
  return getToken(transitionsParser::SCINUM, 0);
}

transitionsParser::ConstantContext::ConstantContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}
void transitionsParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}

antlrcpp::Any transitionsParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinhExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AsinhExpContext::KEY_ARCSINH_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCSINH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AsinhExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::AsinhExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::AsinhExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AsinhExpContext::AsinhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AsinhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinhExp(this);
}
void transitionsParser::AsinhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinhExp(this);
}

antlrcpp::Any transitionsParser::AsinhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAsinhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcosExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AcosExpContext::KEY_ARCCOS_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCCOS_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AcosExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::AcosExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::AcosExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AcosExpContext::AcosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AcosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcosExp(this);
}
void transitionsParser::AcosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcosExp(this);
}

antlrcpp::Any transitionsParser::AcosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAcosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcothExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AcothExpContext::KEY_ARCCOTH_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCCOTH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AcothExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::AcothExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::AcothExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AcothExpContext::AcothExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AcothExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcothExp(this);
}
void transitionsParser::AcothExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcothExp(this);
}

antlrcpp::Any transitionsParser::AcothExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAcothExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcoshExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AcoshExpContext::KEY_ARCCOSH_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCCOSH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AcoshExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::AcoshExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::AcoshExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AcoshExpContext::AcoshExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AcoshExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcoshExp(this);
}
void transitionsParser::AcoshExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcoshExp(this);
}

antlrcpp::Any transitionsParser::AcoshExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAcoshExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CosExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::CosExpContext::KEY_COS_FUNCTION() {
  return getToken(transitionsParser::KEY_COS_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::CosExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::CosExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::CosExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::CosExpContext::CosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::CosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCosExp(this);
}
void transitionsParser::CosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCosExp(this);
}

antlrcpp::Any transitionsParser::CosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitCosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::PowExpContext::KEY_POWER_FUNCTION() {
  return getToken(transitionsParser::KEY_POWER_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::PowExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

std::vector<transitionsParser::ExpressionContext *> transitionsParser::PowExpContext::expression() {
  return getRuleContexts<transitionsParser::ExpressionContext>();
}

transitionsParser::ExpressionContext* transitionsParser::PowExpContext::expression(size_t i) {
  return getRuleContext<transitionsParser::ExpressionContext>(i);
}

tree::TerminalNode* transitionsParser::PowExpContext::COMMA() {
  return getToken(transitionsParser::COMMA, 0);
}

tree::TerminalNode* transitionsParser::PowExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::PowExpContext::PowExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::PowExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowExp(this);
}
void transitionsParser::PowExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowExp(this);
}

antlrcpp::Any transitionsParser::PowExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitPowExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CothExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::CothExpContext::KEY_COTH_FUNCTION() {
  return getToken(transitionsParser::KEY_COTH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::CothExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::CothExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::CothExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::CothExpContext::CothExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::CothExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCothExp(this);
}
void transitionsParser::CothExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCothExp(this);
}

antlrcpp::Any transitionsParser::CothExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitCothExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PosExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::PosExpContext::PLUS() {
  return getToken(transitionsParser::PLUS, 0);
}

transitionsParser::ExpressionContext* transitionsParser::PosExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

transitionsParser::PosExpContext::PosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::PosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosExp(this);
}
void transitionsParser::PosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosExp(this);
}

antlrcpp::Any transitionsParser::PosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitPosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::NegExpContext::MINUS() {
  return getToken(transitionsParser::MINUS, 0);
}

transitionsParser::ExpressionContext* transitionsParser::NegExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

transitionsParser::NegExpContext::NegExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::NegExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegExp(this);
}
void transitionsParser::NegExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegExp(this);
}

antlrcpp::Any transitionsParser::NegExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitNegExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpBraContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::ExpBraContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::ExpBraContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::ExpBraContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::ExpBraContext::ExpBraContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::ExpBraContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpBra(this);
}
void transitionsParser::ExpBraContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpBra(this);
}

antlrcpp::Any transitionsParser::ExpBraContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitExpBra(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanhExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AtanhExpContext::KEY_ARCTANH_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCTANH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AtanhExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::AtanhExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::AtanhExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AtanhExpContext::AtanhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AtanhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanhExp(this);
}
void transitionsParser::AtanhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanhExp(this);
}

antlrcpp::Any transitionsParser::AtanhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAtanhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::SinExpContext::KEY_SIN_FUNCTION() {
  return getToken(transitionsParser::KEY_SIN_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::SinExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::SinExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::SinExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::SinExpContext::SinExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::SinExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinExp(this);
}
void transitionsParser::SinExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinExp(this);
}

antlrcpp::Any transitionsParser::SinExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitSinExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LnExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::LnExpContext::KEY_LN_FUNCTION() {
  return getToken(transitionsParser::KEY_LN_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::LnExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::LnExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::LnExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::LnExpContext::LnExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::LnExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLnExp(this);
}
void transitionsParser::LnExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLnExp(this);
}

antlrcpp::Any transitionsParser::LnExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitLnExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TanhExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::TanhExpContext::KEY_TANH_FUNCTION() {
  return getToken(transitionsParser::KEY_TANH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::TanhExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::TanhExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::TanhExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::TanhExpContext::TanhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::TanhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanhExp(this);
}
void transitionsParser::TanhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanhExp(this);
}

antlrcpp::Any transitionsParser::TanhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitTanhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrtExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::SqrtExpContext::KEY_SQRT_FUNCTION() {
  return getToken(transitionsParser::KEY_SQRT_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::SqrtExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::SqrtExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::SqrtExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::SqrtExpContext::SqrtExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::SqrtExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrtExp(this);
}
void transitionsParser::SqrtExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrtExp(this);
}

antlrcpp::Any transitionsParser::SqrtExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitSqrtExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpMulDivContext ------------------------------------------------------------------

std::vector<transitionsParser::ExpressionContext *> transitionsParser::ExpMulDivContext::expression() {
  return getRuleContexts<transitionsParser::ExpressionContext>();
}

transitionsParser::ExpressionContext* transitionsParser::ExpMulDivContext::expression(size_t i) {
  return getRuleContext<transitionsParser::ExpressionContext>(i);
}

tree::TerminalNode* transitionsParser::ExpMulDivContext::MULTIPLY() {
  return getToken(transitionsParser::MULTIPLY, 0);
}

tree::TerminalNode* transitionsParser::ExpMulDivContext::DIVIDE() {
  return getToken(transitionsParser::DIVIDE, 0);
}

transitionsParser::ExpMulDivContext::ExpMulDivContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::ExpMulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpMulDiv(this);
}
void transitionsParser::ExpMulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpMulDiv(this);
}

antlrcpp::Any transitionsParser::ExpMulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitExpMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AtanExpContext::KEY_ARCTAN_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCTAN_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AtanExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::AtanExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::AtanExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AtanExpContext::AtanExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AtanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanExp(this);
}
void transitionsParser::AtanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanExp(this);
}

antlrcpp::Any transitionsParser::AtanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAtanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcotExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AcotExpContext::KEY_ARCCOT_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCCOT_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AcotExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::AcotExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::AcotExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AcotExpContext::AcotExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AcotExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcotExp(this);
}
void transitionsParser::AcotExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcotExp(this);
}

antlrcpp::Any transitionsParser::AcotExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAcotExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpExpContext ------------------------------------------------------------------

std::vector<transitionsParser::ExpressionContext *> transitionsParser::ExpExpContext::expression() {
  return getRuleContexts<transitionsParser::ExpressionContext>();
}

transitionsParser::ExpressionContext* transitionsParser::ExpExpContext::expression(size_t i) {
  return getRuleContext<transitionsParser::ExpressionContext>(i);
}

tree::TerminalNode* transitionsParser::ExpExpContext::EXPONENT() {
  return getToken(transitionsParser::EXPONENT, 0);
}

transitionsParser::ExpExpContext::ExpExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::ExpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpExp(this);
}
void transitionsParser::ExpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpExp(this);
}

antlrcpp::Any transitionsParser::ExpExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitExpExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CoshExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::CoshExpContext::KEY_COSH_FUNCTION() {
  return getToken(transitionsParser::KEY_COSH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::CoshExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::CoshExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::CoshExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::CoshExpContext::CoshExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::CoshExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoshExp(this);
}
void transitionsParser::CoshExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoshExp(this);
}

antlrcpp::Any transitionsParser::CoshExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitCoshExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::LogExpContext::KEY_LOG_FUNCTION() {
  return getToken(transitionsParser::KEY_LOG_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::LogExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::LogExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::LogExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::LogExpContext::LogExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::LogExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogExp(this);
}
void transitionsParser::LogExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogExp(this);
}

antlrcpp::Any transitionsParser::LogExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitLogExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AsinExpContext::KEY_ARCSIN_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCSIN_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AsinExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::AsinExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::AsinExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AsinExpContext::AsinExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AsinExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinExp(this);
}
void transitionsParser::AsinExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinExp(this);
}

antlrcpp::Any transitionsParser::AsinExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAsinExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CotExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::CotExpContext::KEY_COT_FUNCTION() {
  return getToken(transitionsParser::KEY_COT_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::CotExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::CotExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::CotExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::CotExpContext::CotExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::CotExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCotExp(this);
}
void transitionsParser::CotExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCotExp(this);
}

antlrcpp::Any transitionsParser::CotExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitCotExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::VariableContext::VARIABLE() {
  return getToken(transitionsParser::VARIABLE, 0);
}

transitionsParser::VariableContext::VariableContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}
void transitionsParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

antlrcpp::Any transitionsParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinhExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::SinhExpContext::KEY_SINH_FUNCTION() {
  return getToken(transitionsParser::KEY_SINH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::SinhExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::SinhExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::SinhExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::SinhExpContext::SinhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::SinhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinhExp(this);
}
void transitionsParser::SinhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinhExp(this);
}

antlrcpp::Any transitionsParser::SinhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitSinhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NexpExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::NexpExpContext::KEY_NATURAL_EXP_FUNCTION() {
  return getToken(transitionsParser::KEY_NATURAL_EXP_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::NexpExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::ExpressionContext* transitionsParser::NexpExpContext::expression() {
  return getRuleContext<transitionsParser::ExpressionContext>(0);
}

tree::TerminalNode* transitionsParser::NexpExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::NexpExpContext::NexpExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::NexpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNexpExp(this);
}
void transitionsParser::NexpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNexpExp(this);
}

antlrcpp::Any transitionsParser::NexpExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitNexpExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpAddSubContext ------------------------------------------------------------------

std::vector<transitionsParser::ExpressionContext *> transitionsParser::ExpAddSubContext::expression() {
  return getRuleContexts<transitionsParser::ExpressionContext>();
}

transitionsParser::ExpressionContext* transitionsParser::ExpAddSubContext::expression(size_t i) {
  return getRuleContext<transitionsParser::ExpressionContext>(i);
}

tree::TerminalNode* transitionsParser::ExpAddSubContext::PLUS() {
  return getToken(transitionsParser::PLUS, 0);
}

tree::TerminalNode* transitionsParser::ExpAddSubContext::MINUS() {
  return getToken(transitionsParser::MINUS, 0);
}

transitionsParser::ExpAddSubContext::ExpAddSubContext(ExpressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::ExpAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpAddSub(this);
}
void transitionsParser::ExpAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpAddSub(this);
}

antlrcpp::Any transitionsParser::ExpAddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitExpAddSub(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::ExpressionContext* transitionsParser::expression() {
   return expression(0);
}

transitionsParser::ExpressionContext* transitionsParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  transitionsParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  transitionsParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, transitionsParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(320);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case transitionsParser::PLUS: {
        _localctx = _tracker.createInstance<PosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(198);
        match(transitionsParser::PLUS);
        setState(199);
        expression(29);
        break;
      }

      case transitionsParser::MINUS: {
        _localctx = _tracker.createInstance<NegExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(200);
        match(transitionsParser::MINUS);
        setState(201);
        expression(28);
        break;
      }

      case transitionsParser::LEFTROUNDBRACKET: {
        _localctx = _tracker.createInstance<ExpBraContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(202);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(203);
        expression(0);
        setState(204);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SIN_FUNCTION: {
        _localctx = _tracker.createInstance<SinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(206);
        match(transitionsParser::KEY_SIN_FUNCTION);
        setState(207);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(208);
        expression(0);
        setState(209);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCSIN_FUNCTION: {
        _localctx = _tracker.createInstance<AsinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(211);
        match(transitionsParser::KEY_ARCSIN_FUNCTION);
        setState(212);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(213);
        expression(0);
        setState(214);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COS_FUNCTION: {
        _localctx = _tracker.createInstance<CosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(216);
        match(transitionsParser::KEY_COS_FUNCTION);
        setState(217);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(218);
        expression(0);
        setState(219);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCCOS_FUNCTION: {
        _localctx = _tracker.createInstance<AcosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(221);
        match(transitionsParser::KEY_ARCCOS_FUNCTION);
        setState(222);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(223);
        expression(0);
        setState(224);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_TAN_FUNCTION: {
        _localctx = _tracker.createInstance<TanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(226);
        match(transitionsParser::KEY_TAN_FUNCTION);
        setState(227);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(228);
        expression(0);
        setState(229);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCTAN_FUNCTION: {
        _localctx = _tracker.createInstance<AtanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(231);
        match(transitionsParser::KEY_ARCTAN_FUNCTION);
        setState(232);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(233);
        expression(0);
        setState(234);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COT_FUNCTION: {
        _localctx = _tracker.createInstance<CotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(236);
        match(transitionsParser::KEY_COT_FUNCTION);
        setState(237);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(238);
        expression(0);
        setState(239);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCCOT_FUNCTION: {
        _localctx = _tracker.createInstance<AcotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(241);
        match(transitionsParser::KEY_ARCCOT_FUNCTION);
        setState(242);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(243);
        expression(0);
        setState(244);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SINH_FUNCTION: {
        _localctx = _tracker.createInstance<SinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(246);
        match(transitionsParser::KEY_SINH_FUNCTION);
        setState(247);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(248);
        expression(0);
        setState(249);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCSINH_FUNCTION: {
        _localctx = _tracker.createInstance<AsinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(251);
        match(transitionsParser::KEY_ARCSINH_FUNCTION);
        setState(252);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(253);
        expression(0);
        setState(254);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COSH_FUNCTION: {
        _localctx = _tracker.createInstance<CoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(256);
        match(transitionsParser::KEY_COSH_FUNCTION);
        setState(257);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(258);
        expression(0);
        setState(259);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCCOSH_FUNCTION: {
        _localctx = _tracker.createInstance<AcoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(261);
        match(transitionsParser::KEY_ARCCOSH_FUNCTION);
        setState(262);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(263);
        expression(0);
        setState(264);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_TANH_FUNCTION: {
        _localctx = _tracker.createInstance<TanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(266);
        match(transitionsParser::KEY_TANH_FUNCTION);
        setState(267);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(268);
        expression(0);
        setState(269);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCTANH_FUNCTION: {
        _localctx = _tracker.createInstance<AtanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(271);
        match(transitionsParser::KEY_ARCTANH_FUNCTION);
        setState(272);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(273);
        expression(0);
        setState(274);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COTH_FUNCTION: {
        _localctx = _tracker.createInstance<CothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(276);
        match(transitionsParser::KEY_COTH_FUNCTION);
        setState(277);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(278);
        expression(0);
        setState(279);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCCOTH_FUNCTION: {
        _localctx = _tracker.createInstance<AcothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(281);
        match(transitionsParser::KEY_ARCCOTH_FUNCTION);
        setState(282);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(283);
        expression(0);
        setState(284);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_LN_FUNCTION: {
        _localctx = _tracker.createInstance<LnExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(286);
        match(transitionsParser::KEY_LN_FUNCTION);
        setState(287);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(288);
        expression(0);
        setState(289);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_LOG_FUNCTION: {
        _localctx = _tracker.createInstance<LogExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(291);
        match(transitionsParser::KEY_LOG_FUNCTION);
        setState(292);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(293);
        expression(0);
        setState(294);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_NATURAL_EXP_FUNCTION: {
        _localctx = _tracker.createInstance<NexpExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(296);
        match(transitionsParser::KEY_NATURAL_EXP_FUNCTION);
        setState(297);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(298);
        expression(0);
        setState(299);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SQR_FUNCTION: {
        _localctx = _tracker.createInstance<SqrExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(301);
        match(transitionsParser::KEY_SQR_FUNCTION);
        setState(302);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(303);
        expression(0);
        setState(304);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SQRT_FUNCTION: {
        _localctx = _tracker.createInstance<SqrtExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(306);
        match(transitionsParser::KEY_SQRT_FUNCTION);
        setState(307);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(308);
        expression(0);
        setState(309);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_POWER_FUNCTION: {
        _localctx = _tracker.createInstance<PowExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(311);
        match(transitionsParser::KEY_POWER_FUNCTION);
        setState(312);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(313);
        expression(0);
        setState(314);
        match(transitionsParser::COMMA);
        setState(315);
        expression(0);
        setState(316);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::SCINUM:
      case transitionsParser::NUMBER: {
        _localctx = _tracker.createInstance<ConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(318);
        _la = _input->LA(1);
        if (!(_la == transitionsParser::SCINUM

        || _la == transitionsParser::NUMBER)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case transitionsParser::VARIABLE: {
        _localctx = _tracker.createInstance<VariableContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(319);
        match(transitionsParser::VARIABLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(333);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(331);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpExpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(322);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(323);
          match(transitionsParser::EXPONENT);
          setState(324);
          expression(31);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExpMulDivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(325);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(326);
          dynamic_cast<ExpMulDivContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == transitionsParser::MULTIPLY

          || _la == transitionsParser::DIVIDE)) {
            dynamic_cast<ExpMulDivContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(327);
          expression(28);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExpAddSubContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(328);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(329);
          dynamic_cast<ExpAddSubContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == transitionsParser::PLUS

          || _la == transitionsParser::MINUS)) {
            dynamic_cast<ExpAddSubContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(330);
          expression(27);
          break;
        }

        } 
      }
      setState(335);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool transitionsParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 18: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool transitionsParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
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
std::vector<dfa::DFA> transitionsParser::_decisionToDFA;
atn::PredictionContextCache transitionsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN transitionsParser::_atn;
std::vector<uint16_t> transitionsParser::_serializedATN;

std::vector<std::string> transitionsParser::_ruleNames = {
  "direction", "guardcondition", "updatefunction", "resetmap", "jump", "transitions", 
  "condition", "polytope", "hpolytope", "vpolytope", "matrix", "vector", 
  "intervalhull", "constraints", "constraint", "system", "formula", "interval", 
  "expression"
};

std::vector<std::string> transitionsParser::_literalNames = {
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

std::vector<std::string> transitionsParser::_symbolicNames = {
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

dfa::Vocabulary transitionsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> transitionsParser::_tokenNames;

transitionsParser::Initializer::Initializer() {
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
    0x3, 0x56, 0x153, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x31, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x3c, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x3f, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x7, 0x7, 0x4d, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x50, 0xb, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x58, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0x5f, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x69, 0xa, 0xb, 0x3, 0xb, 
    0x6, 0xb, 0x6c, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x6d, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x77, 0xa, 
    0xc, 0x3, 0xc, 0x7, 0xc, 0x7a, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x7d, 0xb, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x83, 0xa, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x87, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0x8a, 
    0xa, 0xd, 0x3, 0xd, 0x7, 0xd, 0x8d, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x90, 
    0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x5, 0xe, 0x98, 0xa, 0xe, 0x3, 0xe, 0x7, 0xe, 0x9b, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0x9e, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x6, 0xf, 0xa3, 
    0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0xa4, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0xaa, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x6, 0x11, 
    0xaf, 0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 0xb0, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xb5, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xba, 
    0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xbe, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xc3, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x5, 0x14, 0x143, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 
    0x14, 0x14e, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x151, 0xb, 0x14, 0x3, 
    0x14, 0x2, 0x3, 0x26, 0x15, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x2, 
    0x8, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x46, 0x4b, 
    0x3, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x3b, 0x3d, 0x3, 0x2, 0x51, 0x52, 0x2, 
    0x172, 0x2, 0x28, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x34, 0x3, 0x2, 0x2, 0x2, 0x8, 0x38, 0x3, 0x2, 0x2, 0x2, 0xa, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x49, 0x3, 0x2, 0x2, 0x2, 0xe, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x65, 0x3, 0x2, 0x2, 0x2, 0x16, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x80, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x93, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x20, 0xae, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x24, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x142, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x16, 
    0x2, 0x2, 0x29, 0x2a, 0x7, 0x3e, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x4d, 0x2, 
    0x2, 0x2b, 0x2c, 0x7, 0x3e, 0x2, 0x2, 0x2c, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x2e, 0x7, 0x17, 0x2, 0x2, 0x2e, 0x30, 0x7, 0x3f, 0x2, 0x2, 0x2f, 
    0x31, 0x5, 0xe, 0x8, 0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 
    0x40, 0x2, 0x2, 0x33, 0x5, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x3e, 
    0x2, 0x2, 0x35, 0x36, 0x7, 0x4c, 0x2, 0x2, 0x36, 0x37, 0x5, 0x26, 0x14, 
    0x2, 0x37, 0x7, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0x18, 0x2, 0x2, 
    0x39, 0x3d, 0x7, 0x3f, 0x2, 0x2, 0x3a, 0x3c, 0x5, 0x6, 0x4, 0x2, 0x3b, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 
    0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x40, 
    0x2, 0x2, 0x41, 0x9, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x15, 0x2, 
    0x2, 0x43, 0x44, 0x7, 0x3f, 0x2, 0x2, 0x44, 0x45, 0x5, 0x2, 0x2, 0x2, 
    0x45, 0x46, 0x5, 0x4, 0x3, 0x2, 0x46, 0x47, 0x5, 0x8, 0x5, 0x2, 0x47, 
    0x48, 0x7, 0x40, 0x2, 0x2, 0x48, 0xb, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 
    0x7, 0x13, 0x2, 0x2, 0x4a, 0x4e, 0x7, 0x3f, 0x2, 0x2, 0x4b, 0x4d, 0x5, 
    0xa, 0x6, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x4f, 0x51, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x52, 0x7, 0x40, 0x2, 0x2, 0x52, 0xd, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x54, 0x7, 0x1b, 0x2, 0x2, 0x54, 0x57, 0x7, 0x3f, 0x2, 0x2, 0x55, 0x58, 
    0x5, 0x1a, 0xe, 0x2, 0x56, 0x58, 0x5, 0x10, 0x9, 0x2, 0x57, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x5a, 0x7, 0x40, 0x2, 0x2, 0x5a, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x5e, 0x7, 0x1a, 0x2, 0x2, 0x5c, 0x5f, 0x5, 0x12, 0xa, 0x2, 
    0x5d, 0x5f, 0x5, 0x14, 0xb, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x11, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 
    0x7, 0x3f, 0x2, 0x2, 0x61, 0x62, 0x5, 0x16, 0xc, 0x2, 0x62, 0x63, 0x5, 
    0x18, 0xd, 0x2, 0x63, 0x64, 0x7, 0x40, 0x2, 0x2, 0x64, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x66, 0x7, 0x3f, 0x2, 0x2, 0x66, 0x6b, 0x5, 0x18, 0xd, 
    0x2, 0x67, 0x69, 0x7, 0x45, 0x2, 0x2, 0x68, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x6c, 0x5, 0x18, 0xd, 0x2, 0x6b, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x40, 
    0x2, 0x2, 0x70, 0x15, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0x1c, 0x2, 
    0x2, 0x72, 0x73, 0x7, 0x3f, 0x2, 0x2, 0x73, 0x74, 0x9, 0x2, 0x2, 0x2, 
    0x74, 0x7b, 0x5, 0x18, 0xd, 0x2, 0x75, 0x77, 0x7, 0x45, 0x2, 0x2, 0x76, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x7a, 0x5, 0x18, 0xd, 0x2, 0x79, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x40, 0x2, 0x2, 
    0x7f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x80, 0x82, 0x7, 0x41, 0x2, 0x2, 0x81, 
    0x83, 0x9, 0x3, 0x2, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x8e, 0x7, 
    0x3d, 0x2, 0x2, 0x85, 0x87, 0x7, 0x45, 0x2, 0x2, 0x86, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x8a, 0x9, 0x3, 0x2, 0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8d, 0x7, 0x3d, 0x2, 0x2, 0x8c, 0x86, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x90, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x92, 0x7, 0x42, 0x2, 0x2, 0x92, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x94, 0x7, 0x19, 0x2, 0x2, 0x94, 0x95, 0x7, 0x3f, 0x2, 0x2, 
    0x95, 0x9c, 0x5, 0x24, 0x13, 0x2, 0x96, 0x98, 0x7, 0x45, 0x2, 0x2, 0x97, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x24, 0x13, 0x2, 0x9a, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x40, 0x2, 0x2, 
    0xa0, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa3, 0x5, 0x1e, 0x10, 0x2, 0xa2, 
    0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x26, 0x14, 0x2, 0xa7, 0xa9, 0x9, 0x4, 
    0x2, 0x2, 0xa8, 0xaa, 0x9, 0x3, 0x2, 0x2, 0xa9, 0xa8, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xac, 0x9, 0x5, 0x2, 0x2, 0xac, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xaf, 0x5, 0x22, 0x12, 0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb4, 0x7, 0x3e, 
    0x2, 0x2, 0xb3, 0xb5, 0x7, 0x54, 0x2, 0x2, 0xb4, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 
    0xb6, 0xb7, 0x7, 0x4e, 0x2, 0x2, 0xb7, 0xb9, 0x5, 0x26, 0x14, 0x2, 0xb8, 
    0xba, 0x5, 0x24, 0x13, 0x2, 0xb9, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0x23, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbd, 0x7, 
    0x43, 0x2, 0x2, 0xbc, 0xbe, 0x9, 0x3, 0x2, 0x2, 0xbd, 0xbc, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xbf, 0xc0, 0x9, 0x6, 0x2, 0x2, 0xc0, 0xc2, 0x7, 0x45, 0x2, 0x2, 
    0xc1, 0xc3, 0x9, 0x3, 0x2, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 
    0x9, 0x6, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x44, 0x2, 0x2, 0xc6, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0xc7, 0xc8, 0x8, 0x14, 0x1, 0x2, 0xc8, 0xc9, 0x7, 0x4f, 
    0x2, 0x2, 0xc9, 0x143, 0x5, 0x26, 0x14, 0x1f, 0xca, 0xcb, 0x7, 0x50, 
    0x2, 0x2, 0xcb, 0x143, 0x5, 0x26, 0x14, 0x1e, 0xcc, 0xcd, 0x7, 0x41, 
    0x2, 0x2, 0xcd, 0xce, 0x5, 0x26, 0x14, 0x2, 0xce, 0xcf, 0x7, 0x42, 0x2, 
    0x2, 0xcf, 0x143, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x1f, 0x2, 0x2, 
    0xd1, 0xd2, 0x7, 0x41, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x26, 0x14, 0x2, 0xd3, 
    0xd4, 0x7, 0x42, 0x2, 0x2, 0xd4, 0x143, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 
    0x7, 0x20, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x41, 0x2, 0x2, 0xd7, 0xd8, 0x5, 
    0x26, 0x14, 0x2, 0xd8, 0xd9, 0x7, 0x42, 0x2, 0x2, 0xd9, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x21, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x41, 
    0x2, 0x2, 0xdc, 0xdd, 0x5, 0x26, 0x14, 0x2, 0xdd, 0xde, 0x7, 0x42, 0x2, 
    0x2, 0xde, 0x143, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x22, 0x2, 0x2, 
    0xe0, 0xe1, 0x7, 0x41, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x26, 0x14, 0x2, 0xe2, 
    0xe3, 0x7, 0x42, 0x2, 0x2, 0xe3, 0x143, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 
    0x7, 0x23, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x41, 0x2, 0x2, 0xe6, 0xe7, 0x5, 
    0x26, 0x14, 0x2, 0xe7, 0xe8, 0x7, 0x42, 0x2, 0x2, 0xe8, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x24, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x41, 
    0x2, 0x2, 0xeb, 0xec, 0x5, 0x26, 0x14, 0x2, 0xec, 0xed, 0x7, 0x42, 0x2, 
    0x2, 0xed, 0x143, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x7, 0x25, 0x2, 0x2, 
    0xef, 0xf0, 0x7, 0x41, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x26, 0x14, 0x2, 0xf1, 
    0xf2, 0x7, 0x42, 0x2, 0x2, 0xf2, 0x143, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 
    0x7, 0x26, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x41, 0x2, 0x2, 0xf5, 0xf6, 0x5, 
    0x26, 0x14, 0x2, 0xf6, 0xf7, 0x7, 0x42, 0x2, 0x2, 0xf7, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x2a, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0x41, 
    0x2, 0x2, 0xfa, 0xfb, 0x5, 0x26, 0x14, 0x2, 0xfb, 0xfc, 0x7, 0x42, 0x2, 
    0x2, 0xfc, 0x143, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x2b, 0x2, 0x2, 
    0xfe, 0xff, 0x7, 0x41, 0x2, 0x2, 0xff, 0x100, 0x5, 0x26, 0x14, 0x2, 
    0x100, 0x101, 0x7, 0x42, 0x2, 0x2, 0x101, 0x143, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0x103, 0x7, 0x2c, 0x2, 0x2, 0x103, 0x104, 0x7, 0x41, 0x2, 0x2, 
    0x104, 0x105, 0x5, 0x26, 0x14, 0x2, 0x105, 0x106, 0x7, 0x42, 0x2, 0x2, 
    0x106, 0x143, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0x2d, 0x2, 0x2, 
    0x108, 0x109, 0x7, 0x41, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x26, 0x14, 0x2, 
    0x10a, 0x10b, 0x7, 0x42, 0x2, 0x2, 0x10b, 0x143, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x10d, 0x7, 0x2e, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x41, 0x2, 0x2, 
    0x10e, 0x10f, 0x5, 0x26, 0x14, 0x2, 0x10f, 0x110, 0x7, 0x42, 0x2, 0x2, 
    0x110, 0x143, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x2f, 0x2, 0x2, 
    0x112, 0x113, 0x7, 0x41, 0x2, 0x2, 0x113, 0x114, 0x5, 0x26, 0x14, 0x2, 
    0x114, 0x115, 0x7, 0x42, 0x2, 0x2, 0x115, 0x143, 0x3, 0x2, 0x2, 0x2, 
    0x116, 0x117, 0x7, 0x30, 0x2, 0x2, 0x117, 0x118, 0x7, 0x41, 0x2, 0x2, 
    0x118, 0x119, 0x5, 0x26, 0x14, 0x2, 0x119, 0x11a, 0x7, 0x42, 0x2, 0x2, 
    0x11a, 0x143, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x31, 0x2, 0x2, 
    0x11c, 0x11d, 0x7, 0x41, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0x26, 0x14, 0x2, 
    0x11e, 0x11f, 0x7, 0x42, 0x2, 0x2, 0x11f, 0x143, 0x3, 0x2, 0x2, 0x2, 
    0x120, 0x121, 0x7, 0x27, 0x2, 0x2, 0x121, 0x122, 0x7, 0x41, 0x2, 0x2, 
    0x122, 0x123, 0x5, 0x26, 0x14, 0x2, 0x123, 0x124, 0x7, 0x42, 0x2, 0x2, 
    0x124, 0x143, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x28, 0x2, 0x2, 
    0x126, 0x127, 0x7, 0x41, 0x2, 0x2, 0x127, 0x128, 0x5, 0x26, 0x14, 0x2, 
    0x128, 0x129, 0x7, 0x42, 0x2, 0x2, 0x129, 0x143, 0x3, 0x2, 0x2, 0x2, 
    0x12a, 0x12b, 0x7, 0x29, 0x2, 0x2, 0x12b, 0x12c, 0x7, 0x41, 0x2, 0x2, 
    0x12c, 0x12d, 0x5, 0x26, 0x14, 0x2, 0x12d, 0x12e, 0x7, 0x42, 0x2, 0x2, 
    0x12e, 0x143, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x7, 0x32, 0x2, 0x2, 
    0x130, 0x131, 0x7, 0x41, 0x2, 0x2, 0x131, 0x132, 0x5, 0x26, 0x14, 0x2, 
    0x132, 0x133, 0x7, 0x42, 0x2, 0x2, 0x133, 0x143, 0x3, 0x2, 0x2, 0x2, 
    0x134, 0x135, 0x7, 0x33, 0x2, 0x2, 0x135, 0x136, 0x7, 0x41, 0x2, 0x2, 
    0x136, 0x137, 0x5, 0x26, 0x14, 0x2, 0x137, 0x138, 0x7, 0x42, 0x2, 0x2, 
    0x138, 0x143, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x7, 0x35, 0x2, 0x2, 
    0x13a, 0x13b, 0x7, 0x41, 0x2, 0x2, 0x13b, 0x13c, 0x5, 0x26, 0x14, 0x2, 
    0x13c, 0x13d, 0x7, 0x45, 0x2, 0x2, 0x13d, 0x13e, 0x5, 0x26, 0x14, 0x2, 
    0x13e, 0x13f, 0x7, 0x42, 0x2, 0x2, 0x13f, 0x143, 0x3, 0x2, 0x2, 0x2, 
    0x140, 0x143, 0x9, 0x5, 0x2, 0x2, 0x141, 0x143, 0x7, 0x3e, 0x2, 0x2, 
    0x142, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x142, 0xca, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0x142, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x142, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0x142, 0xda, 0x3, 0x2, 0x2, 0x2, 0x142, 0xdf, 0x3, 
    0x2, 0x2, 0x2, 0x142, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x142, 0xe9, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0xee, 0x3, 0x2, 0x2, 0x2, 0x142, 0xf3, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x142, 0xfd, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x102, 0x3, 0x2, 0x2, 0x2, 0x142, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x142, 0x111, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x116, 0x3, 0x2, 0x2, 0x2, 0x142, 0x11b, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x120, 0x3, 0x2, 0x2, 0x2, 0x142, 0x125, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x142, 0x12f, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x134, 0x3, 0x2, 0x2, 0x2, 0x142, 0x139, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x141, 0x3, 0x2, 0x2, 0x2, 
    0x143, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0xc, 0x20, 0x2, 0x2, 
    0x145, 0x146, 0x7, 0x53, 0x2, 0x2, 0x146, 0x14e, 0x5, 0x26, 0x14, 0x21, 
    0x147, 0x148, 0xc, 0x1d, 0x2, 0x2, 0x148, 0x149, 0x9, 0x7, 0x2, 0x2, 
    0x149, 0x14e, 0x5, 0x26, 0x14, 0x1e, 0x14a, 0x14b, 0xc, 0x1c, 0x2, 0x2, 
    0x14b, 0x14c, 0x9, 0x3, 0x2, 0x2, 0x14c, 0x14e, 0x5, 0x26, 0x14, 0x1d, 
    0x14d, 0x144, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x147, 0x3, 0x2, 0x2, 0x2, 
    0x14d, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x151, 0x3, 0x2, 0x2, 0x2, 
    0x14f, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 
    0x150, 0x27, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x1b, 
    0x30, 0x3d, 0x4e, 0x57, 0x5e, 0x68, 0x6d, 0x76, 0x7b, 0x82, 0x86, 0x89, 
    0x8e, 0x97, 0x9c, 0xa4, 0xa9, 0xb0, 0xb4, 0xb9, 0xbd, 0xc2, 0x142, 0x14d, 
    0x14f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

transitionsParser::Initializer transitionsParser::_init;
