
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
    setState(40);
    match(transitionsParser::KEY_DIRECTION);
    setState(41);
    match(transitionsParser::VARIABLE);
    setState(42);
    match(transitionsParser::FROMTO);
    setState(43);
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
    setState(45);
    match(transitionsParser::KEY_GUARD_CONDITIONS);
    setState(46);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(48);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == transitionsParser::KEY_CONDITION) {
      setState(47);
      condition();
    }
    setState(50);
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
    setState(52);
    match(transitionsParser::VARIABLE);
    setState(53);
    match(transitionsParser::DEFINE);
    setState(54);
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
    setState(56);
    match(transitionsParser::KEY_RESET_MAP);
    setState(57);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == transitionsParser::VARIABLE) {
      setState(58);
      updatefunction();
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(64);
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
    setState(66);
    match(transitionsParser::KEY_JUMP);
    setState(67);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(68);
    direction();
    setState(69);
    guardcondition();
    setState(70);
    resetmap();
    setState(71);
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
    setState(73);
    match(transitionsParser::KEY_TRANSITIONS);
    setState(74);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == transitionsParser::KEY_JUMP) {
      setState(75);
      jump();
      setState(80);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(81);
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
    setState(83);
    match(transitionsParser::KEY_CONDITION);
    setState(84);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(87);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case transitionsParser::KEY_INTERVAL_HULL: {
        setState(85);
        intervalhull();
        break;
      }

      case transitionsParser::KEY_POLYTOPE: {
        setState(86);
        polytope();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(89);
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
    setState(91);
    match(transitionsParser::KEY_POLYTOPE);
    setState(94);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(92);
      hpolytope();
      break;
    }

    case 2: {
      setState(93);
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
    setState(96);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(97);
    matrix();
    setState(98);
    vector();
    setState(99);
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
    setState(101);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(102);
    vector();
    setState(107); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(104);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == transitionsParser::COMMA) {
        setState(103);
        match(transitionsParser::COMMA);
      }
      setState(106);
      vector();
      setState(109); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == transitionsParser::LEFTROUNDBRACKET

    || _la == transitionsParser::COMMA);
    setState(111);
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
    setState(113);
    match(transitionsParser::KEY_MATRIX);
    setState(114);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(115);
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
    setState(116);
    vector();
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == transitionsParser::LEFTROUNDBRACKET

    || _la == transitionsParser::COMMA) {
      setState(118);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == transitionsParser::COMMA) {
        setState(117);
        match(transitionsParser::COMMA);
      }
      setState(120);
      vector();
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(126);
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

std::vector<transitionsParser::Const_expressionContext *> transitionsParser::VectorContext::const_expression() {
  return getRuleContexts<transitionsParser::Const_expressionContext>();
}

transitionsParser::Const_expressionContext* transitionsParser::VectorContext::const_expression(size_t i) {
  return getRuleContext<transitionsParser::Const_expressionContext>(i);
}

tree::TerminalNode* transitionsParser::VectorContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
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
    setState(128);
    match(transitionsParser::LEFTROUNDBRACKET);
    setState(129);
    const_expression(0);
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == transitionsParser::COMMA) {
      setState(130);
      match(transitionsParser::COMMA);
      setState(131);
      const_expression(0);
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(137);
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
    setState(139);
    match(transitionsParser::KEY_INTERVAL_HULL);
    setState(140);
    match(transitionsParser::LEFTCURLYBRACKET);
    setState(141);
    interval();
    setState(148);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == transitionsParser::LEFTSQUAREBRACKET

    || _la == transitionsParser::COMMA) {
      setState(143);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == transitionsParser::COMMA) {
        setState(142);
        match(transitionsParser::COMMA);
      }
      setState(145);
      interval();
      setState(150);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(151);
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
    setState(154); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(153);
      constraint();
      setState(156); 
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

transitionsParser::Const_expressionContext* transitionsParser::ConstraintContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
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
    setState(158);
    expression(0);
    setState(159);
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
    setState(160);
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
    setState(163); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(162);
      formula();
      setState(165); 
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
    setState(167);
    match(transitionsParser::VARIABLE);
    setState(169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == transitionsParser::DERIVATIVE) {
      setState(168);
      match(transitionsParser::DERIVATIVE);
    }
    setState(171);
    match(transitionsParser::ASSIGN);
    setState(172);
    expression(0);
    setState(174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == transitionsParser::LEFTSQUAREBRACKET) {
      setState(173);
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

std::vector<transitionsParser::Const_expressionContext *> transitionsParser::IntervalContext::const_expression() {
  return getRuleContexts<transitionsParser::Const_expressionContext>();
}

transitionsParser::Const_expressionContext* transitionsParser::IntervalContext::const_expression(size_t i) {
  return getRuleContext<transitionsParser::Const_expressionContext>(i);
}

tree::TerminalNode* transitionsParser::IntervalContext::COMMA() {
  return getToken(transitionsParser::COMMA, 0);
}

tree::TerminalNode* transitionsParser::IntervalContext::RIGHTSQUAREBRACKET() {
  return getToken(transitionsParser::RIGHTSQUAREBRACKET, 0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(transitionsParser::LEFTSQUAREBRACKET);
    setState(177);
    const_expression(0);
    setState(178);
    match(transitionsParser::COMMA);
    setState(179);
    const_expression(0);
    setState(180);
    match(transitionsParser::RIGHTSQUAREBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_expressionContext ------------------------------------------------------------------

transitionsParser::Const_expressionContext::Const_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t transitionsParser::Const_expressionContext::getRuleIndex() const {
  return transitionsParser::RuleConst_expression;
}

void transitionsParser::Const_expressionContext::copyFrom(Const_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SqrtConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::SqrtConstExpContext::KEY_SQRT_FUNCTION() {
  return getToken(transitionsParser::KEY_SQRT_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::SqrtConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::SqrtConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::SqrtConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::SqrtConstExpContext::SqrtConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::SqrtConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrtConstExp(this);
}
void transitionsParser::SqrtConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrtConstExp(this);
}

antlrcpp::Any transitionsParser::SqrtConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitSqrtConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcothConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AcothConstExpContext::KEY_COTH_FUNCTION() {
  return getToken(transitionsParser::KEY_COTH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AcothConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::AcothConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::AcothConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AcothConstExpContext::AcothConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AcothConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcothConstExp(this);
}
void transitionsParser::AcothConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcothConstExp(this);
}

antlrcpp::Any transitionsParser::AcothConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAcothConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::LogConstExpContext::KEY_LOG_FUNCTION() {
  return getToken(transitionsParser::KEY_LOG_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::LogConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::LogConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::LogConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::LogConstExpContext::LogConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::LogConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogConstExp(this);
}
void transitionsParser::LogConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogConstExp(this);
}

antlrcpp::Any transitionsParser::LogConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitLogConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TanhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::TanhConstExpContext::KEY_TANH_FUNCTION() {
  return getToken(transitionsParser::KEY_TANH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::TanhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::TanhConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::TanhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::TanhConstExpContext::TanhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::TanhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanhConstExp(this);
}
void transitionsParser::TanhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanhConstExp(this);
}

antlrcpp::Any transitionsParser::TanhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitTanhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::PowConstExpContext::KEY_POWER_FUNCTION() {
  return getToken(transitionsParser::KEY_POWER_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::PowConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

std::vector<transitionsParser::Const_expressionContext *> transitionsParser::PowConstExpContext::const_expression() {
  return getRuleContexts<transitionsParser::Const_expressionContext>();
}

transitionsParser::Const_expressionContext* transitionsParser::PowConstExpContext::const_expression(size_t i) {
  return getRuleContext<transitionsParser::Const_expressionContext>(i);
}

tree::TerminalNode* transitionsParser::PowConstExpContext::COMMA() {
  return getToken(transitionsParser::COMMA, 0);
}

tree::TerminalNode* transitionsParser::PowConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::PowConstExpContext::PowConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::PowConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowConstExp(this);
}
void transitionsParser::PowConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowConstExp(this);
}

antlrcpp::Any transitionsParser::PowConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitPowConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PosConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::PosConstExpContext::PLUS() {
  return getToken(transitionsParser::PLUS, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::PosConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

transitionsParser::PosConstExpContext::PosConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::PosConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosConstExp(this);
}
void transitionsParser::PosConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosConstExp(this);
}

antlrcpp::Any transitionsParser::PosConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitPosConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AtanhConstExpContext::KEY_ARCTANH_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCTANH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AtanhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::AtanhConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::AtanhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AtanhConstExpContext::AtanhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AtanhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanhConstExp(this);
}
void transitionsParser::AtanhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanhConstExp(this);
}

antlrcpp::Any transitionsParser::AtanhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAtanhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::SqrConstExpContext::KEY_SQR_FUNCTION() {
  return getToken(transitionsParser::KEY_SQR_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::SqrConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::SqrConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::SqrConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::SqrConstExpContext::SqrConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::SqrConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrConstExp(this);
}
void transitionsParser::SqrConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrConstExp(this);
}

antlrcpp::Any transitionsParser::SqrConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitSqrConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpBraContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::ConstExpBraContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::ConstExpBraContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::ConstExpBraContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::ConstExpBraContext::ConstExpBraContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::ConstExpBraContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExpBra(this);
}
void transitionsParser::ConstExpBraContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExpBra(this);
}

antlrcpp::Any transitionsParser::ConstExpBraContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitConstExpBra(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::SinhConstExpContext::KEY_SINH_FUNCTION() {
  return getToken(transitionsParser::KEY_SINH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::SinhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::SinhConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::SinhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::SinhConstExpContext::SinhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::SinhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinhConstExp(this);
}
void transitionsParser::SinhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinhConstExp(this);
}

antlrcpp::Any transitionsParser::SinhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitSinhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AtanConstExpContext::KEY_ARCTAN_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCTAN_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AtanConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::AtanConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::AtanConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AtanConstExpContext::AtanConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AtanConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanConstExp(this);
}
void transitionsParser::AtanConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanConstExp(this);
}

antlrcpp::Any transitionsParser::AtanConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAtanConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AsinhConstExpContext::KEY_ARCSINH_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCSINH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AsinhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::AsinhConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::AsinhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AsinhConstExpContext::AsinhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AsinhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinhConstExp(this);
}
void transitionsParser::AsinhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinhConstExp(this);
}

antlrcpp::Any transitionsParser::AsinhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAsinhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::ConstExpContext::NUMBER() {
  return getToken(transitionsParser::NUMBER, 0);
}

tree::TerminalNode* transitionsParser::ConstExpContext::SCINUM() {
  return getToken(transitionsParser::SCINUM, 0);
}

tree::TerminalNode* transitionsParser::ConstExpContext::KEY_INFINITY() {
  return getToken(transitionsParser::KEY_INFINITY, 0);
}

transitionsParser::ConstExpContext::ConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::ConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExp(this);
}
void transitionsParser::ConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExp(this);
}

antlrcpp::Any transitionsParser::ConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::NegConstExpContext::MINUS() {
  return getToken(transitionsParser::MINUS, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::NegConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

transitionsParser::NegConstExpContext::NegConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::NegConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegConstExp(this);
}
void transitionsParser::NegConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegConstExp(this);
}

antlrcpp::Any transitionsParser::NegConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitNegConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AsinConstExpContext::KEY_ARCSIN_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCSIN_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AsinConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::AsinConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::AsinConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AsinConstExpContext::AsinConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AsinConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinConstExp(this);
}
void transitionsParser::AsinConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinConstExp(this);
}

antlrcpp::Any transitionsParser::AsinConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAsinConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TanConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::TanConstExpContext::KEY_TAN_FUNCTION() {
  return getToken(transitionsParser::KEY_TAN_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::TanConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::TanConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::TanConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::TanConstExpContext::TanConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::TanConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanConstExp(this);
}
void transitionsParser::TanConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanConstExp(this);
}

antlrcpp::Any transitionsParser::TanConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitTanConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NexpConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::NexpConstExpContext::KEY_NATURAL_EXP_FUNCTION() {
  return getToken(transitionsParser::KEY_NATURAL_EXP_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::NexpConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::NexpConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::NexpConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::NexpConstExpContext::NexpConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::NexpConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNexpConstExp(this);
}
void transitionsParser::NexpConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNexpConstExp(this);
}

antlrcpp::Any transitionsParser::NexpConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitNexpConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CosConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::CosConstExpContext::KEY_COS_FUNCTION() {
  return getToken(transitionsParser::KEY_COS_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::CosConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::CosConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::CosConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::CosConstExpContext::CosConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::CosConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCosConstExp(this);
}
void transitionsParser::CosConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCosConstExp(this);
}

antlrcpp::Any transitionsParser::CosConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitCosConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpMulDivContext ------------------------------------------------------------------

std::vector<transitionsParser::Const_expressionContext *> transitionsParser::ConstExpMulDivContext::const_expression() {
  return getRuleContexts<transitionsParser::Const_expressionContext>();
}

transitionsParser::Const_expressionContext* transitionsParser::ConstExpMulDivContext::const_expression(size_t i) {
  return getRuleContext<transitionsParser::Const_expressionContext>(i);
}

tree::TerminalNode* transitionsParser::ConstExpMulDivContext::MULTIPLY() {
  return getToken(transitionsParser::MULTIPLY, 0);
}

tree::TerminalNode* transitionsParser::ConstExpMulDivContext::DIVIDE() {
  return getToken(transitionsParser::DIVIDE, 0);
}

transitionsParser::ConstExpMulDivContext::ConstExpMulDivContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::ConstExpMulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExpMulDiv(this);
}
void transitionsParser::ConstExpMulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExpMulDiv(this);
}

antlrcpp::Any transitionsParser::ConstExpMulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitConstExpMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpConstExpContext ------------------------------------------------------------------

std::vector<transitionsParser::Const_expressionContext *> transitionsParser::ExpConstExpContext::const_expression() {
  return getRuleContexts<transitionsParser::Const_expressionContext>();
}

transitionsParser::Const_expressionContext* transitionsParser::ExpConstExpContext::const_expression(size_t i) {
  return getRuleContext<transitionsParser::Const_expressionContext>(i);
}

tree::TerminalNode* transitionsParser::ExpConstExpContext::EXPONENT() {
  return getToken(transitionsParser::EXPONENT, 0);
}

transitionsParser::ExpConstExpContext::ExpConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::ExpConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpConstExp(this);
}
void transitionsParser::ExpConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpConstExp(this);
}

antlrcpp::Any transitionsParser::ExpConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitExpConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CotConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::CotConstExpContext::KEY_COT_FUNCTION() {
  return getToken(transitionsParser::KEY_COT_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::CotConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::CotConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::CotConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::CotConstExpContext::CotConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::CotConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCotConstExp(this);
}
void transitionsParser::CotConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCotConstExp(this);
}

antlrcpp::Any transitionsParser::CotConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitCotConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CoshConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::CoshConstExpContext::KEY_COSH_FUNCTION() {
  return getToken(transitionsParser::KEY_COSH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::CoshConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::CoshConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::CoshConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::CoshConstExpContext::CoshConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::CoshConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoshConstExp(this);
}
void transitionsParser::CoshConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoshConstExp(this);
}

antlrcpp::Any transitionsParser::CoshConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitCoshConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcoshConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AcoshConstExpContext::KEY_ARCCOSH_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCCOSH_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AcoshConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::AcoshConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::AcoshConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AcoshConstExpContext::AcoshConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AcoshConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcoshConstExp(this);
}
void transitionsParser::AcoshConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcoshConstExp(this);
}

antlrcpp::Any transitionsParser::AcoshConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAcoshConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::SinConstExpContext::KEY_SIN_FUNCTION() {
  return getToken(transitionsParser::KEY_SIN_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::SinConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::SinConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::SinConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::SinConstExpContext::SinConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::SinConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinConstExp(this);
}
void transitionsParser::SinConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinConstExp(this);
}

antlrcpp::Any transitionsParser::SinConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitSinConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcosConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AcosConstExpContext::KEY_ARCCOS_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCCOS_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AcosConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::AcosConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::AcosConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AcosConstExpContext::AcosConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AcosConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcosConstExp(this);
}
void transitionsParser::AcosConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcosConstExp(this);
}

antlrcpp::Any transitionsParser::AcosConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAcosConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpAddSubContext ------------------------------------------------------------------

std::vector<transitionsParser::Const_expressionContext *> transitionsParser::ConstExpAddSubContext::const_expression() {
  return getRuleContexts<transitionsParser::Const_expressionContext>();
}

transitionsParser::Const_expressionContext* transitionsParser::ConstExpAddSubContext::const_expression(size_t i) {
  return getRuleContext<transitionsParser::Const_expressionContext>(i);
}

tree::TerminalNode* transitionsParser::ConstExpAddSubContext::PLUS() {
  return getToken(transitionsParser::PLUS, 0);
}

tree::TerminalNode* transitionsParser::ConstExpAddSubContext::MINUS() {
  return getToken(transitionsParser::MINUS, 0);
}

transitionsParser::ConstExpAddSubContext::ConstExpAddSubContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::ConstExpAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExpAddSub(this);
}
void transitionsParser::ConstExpAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExpAddSub(this);
}

antlrcpp::Any transitionsParser::ConstExpAddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitConstExpAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LnConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::LnConstExpContext::KEY_LN_FUNCTION() {
  return getToken(transitionsParser::KEY_LN_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::LnConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::LnConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::LnConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::LnConstExpContext::LnConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::LnConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLnConstExp(this);
}
void transitionsParser::LnConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLnConstExp(this);
}

antlrcpp::Any transitionsParser::LnConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitLnConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcotConstExpContext ------------------------------------------------------------------

tree::TerminalNode* transitionsParser::AcotConstExpContext::KEY_ARCCOT_FUNCTION() {
  return getToken(transitionsParser::KEY_ARCCOT_FUNCTION, 0);
}

tree::TerminalNode* transitionsParser::AcotConstExpContext::LEFTROUNDBRACKET() {
  return getToken(transitionsParser::LEFTROUNDBRACKET, 0);
}

transitionsParser::Const_expressionContext* transitionsParser::AcotConstExpContext::const_expression() {
  return getRuleContext<transitionsParser::Const_expressionContext>(0);
}

tree::TerminalNode* transitionsParser::AcotConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(transitionsParser::RIGHTROUNDBRACKET, 0);
}

transitionsParser::AcotConstExpContext::AcotConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void transitionsParser::AcotConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcotConstExp(this);
}
void transitionsParser::AcotConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<transitionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcotConstExp(this);
}

antlrcpp::Any transitionsParser::AcotConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<transitionsVisitor*>(visitor))
    return parserVisitor->visitAcotConstExp(this);
  else
    return visitor->visitChildren(this);
}

transitionsParser::Const_expressionContext* transitionsParser::const_expression() {
   return const_expression(0);
}

transitionsParser::Const_expressionContext* transitionsParser::const_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  transitionsParser::Const_expressionContext *_localctx = _tracker.createInstance<Const_expressionContext>(_ctx, parentState);
  transitionsParser::Const_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, transitionsParser::RuleConst_expression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(299);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case transitionsParser::PLUS: {
        _localctx = _tracker.createInstance<PosConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(183);
        match(transitionsParser::PLUS);
        setState(184);
        const_expression(27);
        break;
      }

      case transitionsParser::MINUS: {
        _localctx = _tracker.createInstance<NegConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(185);
        match(transitionsParser::MINUS);
        setState(186);
        const_expression(26);
        break;
      }

      case transitionsParser::LEFTROUNDBRACKET: {
        _localctx = _tracker.createInstance<ConstExpBraContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(187);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(188);
        const_expression(0);
        setState(189);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SIN_FUNCTION: {
        _localctx = _tracker.createInstance<SinConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(191);
        match(transitionsParser::KEY_SIN_FUNCTION);
        setState(192);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(193);
        const_expression(0);
        setState(194);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCSIN_FUNCTION: {
        _localctx = _tracker.createInstance<AsinConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(196);
        match(transitionsParser::KEY_ARCSIN_FUNCTION);
        setState(197);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(198);
        const_expression(0);
        setState(199);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COS_FUNCTION: {
        _localctx = _tracker.createInstance<CosConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(201);
        match(transitionsParser::KEY_COS_FUNCTION);
        setState(202);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(203);
        const_expression(0);
        setState(204);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCCOS_FUNCTION: {
        _localctx = _tracker.createInstance<AcosConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(206);
        match(transitionsParser::KEY_ARCCOS_FUNCTION);
        setState(207);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(208);
        const_expression(0);
        setState(209);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_TAN_FUNCTION: {
        _localctx = _tracker.createInstance<TanConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(211);
        match(transitionsParser::KEY_TAN_FUNCTION);
        setState(212);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(213);
        const_expression(0);
        setState(214);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCTAN_FUNCTION: {
        _localctx = _tracker.createInstance<AtanConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(216);
        match(transitionsParser::KEY_ARCTAN_FUNCTION);
        setState(217);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(218);
        const_expression(0);
        setState(219);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COT_FUNCTION: {
        _localctx = _tracker.createInstance<CotConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(221);
        match(transitionsParser::KEY_COT_FUNCTION);
        setState(222);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(223);
        const_expression(0);
        setState(224);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCCOT_FUNCTION: {
        _localctx = _tracker.createInstance<AcotConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(226);
        match(transitionsParser::KEY_ARCCOT_FUNCTION);
        setState(227);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(228);
        const_expression(0);
        setState(229);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SINH_FUNCTION: {
        _localctx = _tracker.createInstance<SinhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(231);
        match(transitionsParser::KEY_SINH_FUNCTION);
        setState(232);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(233);
        const_expression(0);
        setState(234);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCSINH_FUNCTION: {
        _localctx = _tracker.createInstance<AsinhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(236);
        match(transitionsParser::KEY_ARCSINH_FUNCTION);
        setState(237);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(238);
        const_expression(0);
        setState(239);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COSH_FUNCTION: {
        _localctx = _tracker.createInstance<CoshConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(241);
        match(transitionsParser::KEY_COSH_FUNCTION);
        setState(242);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(243);
        const_expression(0);
        setState(244);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCCOSH_FUNCTION: {
        _localctx = _tracker.createInstance<AcoshConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(246);
        match(transitionsParser::KEY_ARCCOSH_FUNCTION);
        setState(247);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(248);
        const_expression(0);
        setState(249);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_TANH_FUNCTION: {
        _localctx = _tracker.createInstance<TanhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(251);
        match(transitionsParser::KEY_TANH_FUNCTION);
        setState(252);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(253);
        const_expression(0);
        setState(254);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCTANH_FUNCTION: {
        _localctx = _tracker.createInstance<AtanhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(256);
        match(transitionsParser::KEY_ARCTANH_FUNCTION);
        setState(257);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(258);
        const_expression(0);
        setState(259);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COTH_FUNCTION: {
        _localctx = _tracker.createInstance<AcothConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(261);
        match(transitionsParser::KEY_COTH_FUNCTION);
        setState(262);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(263);
        const_expression(0);
        setState(264);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_LN_FUNCTION: {
        _localctx = _tracker.createInstance<LnConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(266);
        match(transitionsParser::KEY_LN_FUNCTION);
        setState(267);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(268);
        const_expression(0);
        setState(269);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_LOG_FUNCTION: {
        _localctx = _tracker.createInstance<LogConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(271);
        match(transitionsParser::KEY_LOG_FUNCTION);
        setState(272);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(273);
        const_expression(0);
        setState(274);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_NATURAL_EXP_FUNCTION: {
        _localctx = _tracker.createInstance<NexpConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(276);
        match(transitionsParser::KEY_NATURAL_EXP_FUNCTION);
        setState(277);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(278);
        const_expression(0);
        setState(279);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SQR_FUNCTION: {
        _localctx = _tracker.createInstance<SqrConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(281);
        match(transitionsParser::KEY_SQR_FUNCTION);
        setState(282);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(283);
        const_expression(0);
        setState(284);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SQRT_FUNCTION: {
        _localctx = _tracker.createInstance<SqrtConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(286);
        match(transitionsParser::KEY_SQRT_FUNCTION);
        setState(287);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(288);
        const_expression(0);
        setState(289);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_POWER_FUNCTION: {
        _localctx = _tracker.createInstance<PowConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(291);
        match(transitionsParser::KEY_POWER_FUNCTION);
        setState(292);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(293);
        const_expression(0);
        setState(294);
        match(transitionsParser::COMMA);
        setState(295);
        const_expression(0);
        setState(296);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_INFINITY:
      case transitionsParser::SCINUM:
      case transitionsParser::NUMBER: {
        _localctx = _tracker.createInstance<ConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(298);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << transitionsParser::KEY_INFINITY)
          | (1ULL << transitionsParser::SCINUM)
          | (1ULL << transitionsParser::NUMBER))) != 0))) {
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
    setState(312);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(310);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpConstExpContext>(_tracker.createInstance<Const_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleConst_expression);
          setState(301);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(302);
          match(transitionsParser::EXPONENT);
          setState(303);
          const_expression(29);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ConstExpMulDivContext>(_tracker.createInstance<Const_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleConst_expression);
          setState(304);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(305);
          dynamic_cast<ConstExpMulDivContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == transitionsParser::MULTIPLY

          || _la == transitionsParser::DIVIDE)) {
            dynamic_cast<ConstExpMulDivContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(306);
          const_expression(26);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ConstExpAddSubContext>(_tracker.createInstance<Const_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleConst_expression);
          setState(307);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(308);
          dynamic_cast<ConstExpAddSubContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == transitionsParser::PLUS

          || _la == transitionsParser::MINUS)) {
            dynamic_cast<ConstExpAddSubContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(309);
          const_expression(25);
          break;
        }

        } 
      }
      setState(314);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, transitionsParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(438);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case transitionsParser::PLUS: {
        _localctx = _tracker.createInstance<PosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(316);
        match(transitionsParser::PLUS);
        setState(317);
        expression(29);
        break;
      }

      case transitionsParser::MINUS: {
        _localctx = _tracker.createInstance<NegExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(318);
        match(transitionsParser::MINUS);
        setState(319);
        expression(28);
        break;
      }

      case transitionsParser::LEFTROUNDBRACKET: {
        _localctx = _tracker.createInstance<ExpBraContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(320);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(321);
        expression(0);
        setState(322);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SIN_FUNCTION: {
        _localctx = _tracker.createInstance<SinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(324);
        match(transitionsParser::KEY_SIN_FUNCTION);
        setState(325);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(326);
        expression(0);
        setState(327);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCSIN_FUNCTION: {
        _localctx = _tracker.createInstance<AsinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(329);
        match(transitionsParser::KEY_ARCSIN_FUNCTION);
        setState(330);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(331);
        expression(0);
        setState(332);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COS_FUNCTION: {
        _localctx = _tracker.createInstance<CosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(334);
        match(transitionsParser::KEY_COS_FUNCTION);
        setState(335);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(336);
        expression(0);
        setState(337);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCCOS_FUNCTION: {
        _localctx = _tracker.createInstance<AcosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(339);
        match(transitionsParser::KEY_ARCCOS_FUNCTION);
        setState(340);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(341);
        expression(0);
        setState(342);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_TAN_FUNCTION: {
        _localctx = _tracker.createInstance<TanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(344);
        match(transitionsParser::KEY_TAN_FUNCTION);
        setState(345);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(346);
        expression(0);
        setState(347);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCTAN_FUNCTION: {
        _localctx = _tracker.createInstance<AtanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(349);
        match(transitionsParser::KEY_ARCTAN_FUNCTION);
        setState(350);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(351);
        expression(0);
        setState(352);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COT_FUNCTION: {
        _localctx = _tracker.createInstance<CotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(354);
        match(transitionsParser::KEY_COT_FUNCTION);
        setState(355);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(356);
        expression(0);
        setState(357);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCCOT_FUNCTION: {
        _localctx = _tracker.createInstance<AcotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(359);
        match(transitionsParser::KEY_ARCCOT_FUNCTION);
        setState(360);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(361);
        expression(0);
        setState(362);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SINH_FUNCTION: {
        _localctx = _tracker.createInstance<SinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(364);
        match(transitionsParser::KEY_SINH_FUNCTION);
        setState(365);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(366);
        expression(0);
        setState(367);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCSINH_FUNCTION: {
        _localctx = _tracker.createInstance<AsinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(369);
        match(transitionsParser::KEY_ARCSINH_FUNCTION);
        setState(370);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(371);
        expression(0);
        setState(372);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COSH_FUNCTION: {
        _localctx = _tracker.createInstance<CoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(374);
        match(transitionsParser::KEY_COSH_FUNCTION);
        setState(375);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(376);
        expression(0);
        setState(377);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCCOSH_FUNCTION: {
        _localctx = _tracker.createInstance<AcoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(379);
        match(transitionsParser::KEY_ARCCOSH_FUNCTION);
        setState(380);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(381);
        expression(0);
        setState(382);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_TANH_FUNCTION: {
        _localctx = _tracker.createInstance<TanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(384);
        match(transitionsParser::KEY_TANH_FUNCTION);
        setState(385);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(386);
        expression(0);
        setState(387);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCTANH_FUNCTION: {
        _localctx = _tracker.createInstance<AtanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(389);
        match(transitionsParser::KEY_ARCTANH_FUNCTION);
        setState(390);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(391);
        expression(0);
        setState(392);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_COTH_FUNCTION: {
        _localctx = _tracker.createInstance<CothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(394);
        match(transitionsParser::KEY_COTH_FUNCTION);
        setState(395);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(396);
        expression(0);
        setState(397);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_ARCCOTH_FUNCTION: {
        _localctx = _tracker.createInstance<AcothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(399);
        match(transitionsParser::KEY_ARCCOTH_FUNCTION);
        setState(400);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(401);
        expression(0);
        setState(402);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_LN_FUNCTION: {
        _localctx = _tracker.createInstance<LnExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(404);
        match(transitionsParser::KEY_LN_FUNCTION);
        setState(405);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(406);
        expression(0);
        setState(407);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_LOG_FUNCTION: {
        _localctx = _tracker.createInstance<LogExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(409);
        match(transitionsParser::KEY_LOG_FUNCTION);
        setState(410);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(411);
        expression(0);
        setState(412);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_NATURAL_EXP_FUNCTION: {
        _localctx = _tracker.createInstance<NexpExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(414);
        match(transitionsParser::KEY_NATURAL_EXP_FUNCTION);
        setState(415);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(416);
        expression(0);
        setState(417);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SQR_FUNCTION: {
        _localctx = _tracker.createInstance<SqrExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(419);
        match(transitionsParser::KEY_SQR_FUNCTION);
        setState(420);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(421);
        expression(0);
        setState(422);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_SQRT_FUNCTION: {
        _localctx = _tracker.createInstance<SqrtExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(424);
        match(transitionsParser::KEY_SQRT_FUNCTION);
        setState(425);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(426);
        expression(0);
        setState(427);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::KEY_POWER_FUNCTION: {
        _localctx = _tracker.createInstance<PowExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(429);
        match(transitionsParser::KEY_POWER_FUNCTION);
        setState(430);
        match(transitionsParser::LEFTROUNDBRACKET);
        setState(431);
        expression(0);
        setState(432);
        match(transitionsParser::COMMA);
        setState(433);
        expression(0);
        setState(434);
        match(transitionsParser::RIGHTROUNDBRACKET);
        break;
      }

      case transitionsParser::SCINUM:
      case transitionsParser::NUMBER: {
        _localctx = _tracker.createInstance<ConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(436);
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
        setState(437);
        match(transitionsParser::VARIABLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(451);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(449);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpExpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(440);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(441);
          match(transitionsParser::EXPONENT);
          setState(442);
          expression(31);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExpMulDivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(443);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(444);
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
          setState(445);
          expression(28);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExpAddSubContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(446);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(447);
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
          setState(448);
          expression(27);
          break;
        }

        } 
      }
      setState(453);
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

bool transitionsParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 18: return const_expressionSempred(dynamic_cast<Const_expressionContext *>(context), predicateIndex);
    case 19: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool transitionsParser::const_expressionSempred(Const_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 28);
    case 1: return precpred(_ctx, 25);
    case 2: return precpred(_ctx, 24);

  default:
    break;
  }
  return true;
}

bool transitionsParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
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
std::vector<dfa::DFA> transitionsParser::_decisionToDFA;
atn::PredictionContextCache transitionsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN transitionsParser::_atn;
std::vector<uint16_t> transitionsParser::_serializedATN;

std::vector<std::string> transitionsParser::_ruleNames = {
  "direction", "guardcondition", "updatefunction", "resetmap", "jump", "transitions", 
  "condition", "polytope", "hpolytope", "vpolytope", "matrix", "vector", 
  "intervalhull", "constraints", "constraint", "system", "formula", "interval", 
  "const_expression", "expression"
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
    0x3, 0x56, 0x1c9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x33, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 
    0x5, 0x3e, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x41, 0xb, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x4f, 0xa, 0x7, 0xc, 0x7, 
    0xe, 0x7, 0x52, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0x5a, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x61, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x6b, 
    0xa, 0xb, 0x3, 0xb, 0x6, 0xb, 0x6e, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x6f, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x5, 0xc, 0x79, 0xa, 0xc, 0x3, 0xc, 0x7, 0xc, 0x7c, 0xa, 0xc, 0xc, 0xc, 
    0xe, 0xc, 0x7f, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x7, 0xd, 0x87, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x8a, 0xb, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x92, 0xa, 0xe, 0x3, 0xe, 0x7, 0xe, 0x95, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x98, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x6, 0xf, 0x9d, 0xa, 
    0xf, 0xd, 0xf, 0xe, 0xf, 0x9e, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x11, 0x6, 0x11, 0xa6, 0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 0xa7, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xac, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x5, 0x12, 0xb1, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
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
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x12e, 0xa, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x7, 0x14, 0x139, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 
    0x13c, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x5, 0x15, 0x1b9, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 
    0x15, 0x1c4, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x1c7, 0xb, 0x15, 0x3, 
    0x15, 0x2, 0x4, 0x26, 0x28, 0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2, 0x8, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x46, 0x4b, 0x3, 0x2, 
    0x3b, 0x3d, 0x3, 0x2, 0x51, 0x52, 0x3, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x3c, 
    0x3d, 0x2, 0x1fc, 0x2, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x36, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x44, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x12, 0x62, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x67, 0x3, 0x2, 0x2, 0x2, 0x16, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x82, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x22, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xb2, 0x3, 0x2, 0x2, 0x2, 0x26, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1b8, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x16, 0x2, 0x2, 0x2b, 0x2c, 0x7, 
    0x3e, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x4d, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x3e, 
    0x2, 0x2, 0x2e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x17, 0x2, 
    0x2, 0x30, 0x32, 0x7, 0x3f, 0x2, 0x2, 0x31, 0x33, 0x5, 0xe, 0x8, 0x2, 
    0x32, 0x31, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x40, 0x2, 0x2, 0x35, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x3e, 0x2, 0x2, 0x37, 0x38, 0x7, 
    0x4c, 0x2, 0x2, 0x38, 0x39, 0x5, 0x28, 0x15, 0x2, 0x39, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3b, 0x7, 0x18, 0x2, 0x2, 0x3b, 0x3f, 0x7, 0x3f, 0x2, 
    0x2, 0x3c, 0x3e, 0x5, 0x6, 0x4, 0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x40, 0x2, 0x2, 0x43, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x15, 0x2, 0x2, 0x45, 0x46, 0x7, 0x3f, 
    0x2, 0x2, 0x46, 0x47, 0x5, 0x2, 0x2, 0x2, 0x47, 0x48, 0x5, 0x4, 0x3, 
    0x2, 0x48, 0x49, 0x5, 0x8, 0x5, 0x2, 0x49, 0x4a, 0x7, 0x40, 0x2, 0x2, 
    0x4a, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x13, 0x2, 0x2, 0x4c, 
    0x50, 0x7, 0x3f, 0x2, 0x2, 0x4d, 0x4f, 0x5, 0xa, 0x6, 0x2, 0x4e, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x40, 0x2, 
    0x2, 0x54, 0xd, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x1b, 0x2, 0x2, 
    0x56, 0x59, 0x7, 0x3f, 0x2, 0x2, 0x57, 0x5a, 0x5, 0x1a, 0xe, 0x2, 0x58, 
    0x5a, 0x5, 0x10, 0x9, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 
    0x40, 0x2, 0x2, 0x5c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x60, 0x7, 0x1a, 
    0x2, 0x2, 0x5e, 0x61, 0x5, 0x12, 0xa, 0x2, 0x5f, 0x61, 0x5, 0x14, 0xb, 
    0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x11, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0x3f, 0x2, 0x2, 0x63, 
    0x64, 0x5, 0x16, 0xc, 0x2, 0x64, 0x65, 0x5, 0x18, 0xd, 0x2, 0x65, 0x66, 
    0x7, 0x40, 0x2, 0x2, 0x66, 0x13, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 
    0x3f, 0x2, 0x2, 0x68, 0x6d, 0x5, 0x18, 0xd, 0x2, 0x69, 0x6b, 0x7, 0x45, 
    0x2, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6e, 0x5, 0x18, 0xd, 0x2, 
    0x6d, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0x40, 0x2, 0x2, 0x72, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0x1c, 0x2, 0x2, 0x74, 0x75, 0x7, 0x3f, 
    0x2, 0x2, 0x75, 0x76, 0x9, 0x2, 0x2, 0x2, 0x76, 0x7d, 0x5, 0x18, 0xd, 
    0x2, 0x77, 0x79, 0x7, 0x45, 0x2, 0x2, 0x78, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x7c, 0x5, 0x18, 0xd, 0x2, 0x7b, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x80, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x81, 0x7, 0x40, 0x2, 0x2, 0x81, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x83, 0x7, 0x41, 0x2, 0x2, 0x83, 0x88, 0x5, 0x26, 0x14, 0x2, 
    0x84, 0x85, 0x7, 0x45, 0x2, 0x2, 0x85, 0x87, 0x5, 0x26, 0x14, 0x2, 0x86, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x42, 
    0x2, 0x2, 0x8c, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x19, 0x2, 
    0x2, 0x8e, 0x8f, 0x7, 0x3f, 0x2, 0x2, 0x8f, 0x96, 0x5, 0x24, 0x13, 0x2, 
    0x90, 0x92, 0x7, 0x45, 0x2, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 0x91, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x95, 
    0x5, 0x24, 0x13, 0x2, 0x94, 0x91, 0x3, 0x2, 0x2, 0x2, 0x95, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 
    0x2, 0x2, 0x97, 0x99, 0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x9a, 0x7, 0x40, 0x2, 0x2, 0x9a, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x9b, 0x9d, 0x5, 0x1e, 0x10, 0x2, 0x9c, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9d, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x5, 
    0x28, 0x15, 0x2, 0xa1, 0xa2, 0x9, 0x3, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x26, 
    0x14, 0x2, 0xa3, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x5, 0x22, 0x12, 
    0x2, 0xa5, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xab, 0x7, 0x3e, 0x2, 0x2, 0xaa, 0xac, 
    0x7, 0x54, 0x2, 0x2, 0xab, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0x4e, 
    0x2, 0x2, 0xae, 0xb0, 0x5, 0x28, 0x15, 0x2, 0xaf, 0xb1, 0x5, 0x24, 0x13, 
    0x2, 0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0xb1, 0x23, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x43, 0x2, 0x2, 0xb3, 
    0xb4, 0x5, 0x26, 0x14, 0x2, 0xb4, 0xb5, 0x7, 0x45, 0x2, 0x2, 0xb5, 0xb6, 
    0x5, 0x26, 0x14, 0x2, 0xb6, 0xb7, 0x7, 0x44, 0x2, 0x2, 0xb7, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0xb9, 0x8, 0x14, 0x1, 0x2, 0xb9, 0xba, 0x7, 0x4f, 
    0x2, 0x2, 0xba, 0x12e, 0x5, 0x26, 0x14, 0x1d, 0xbb, 0xbc, 0x7, 0x50, 
    0x2, 0x2, 0xbc, 0x12e, 0x5, 0x26, 0x14, 0x1c, 0xbd, 0xbe, 0x7, 0x41, 
    0x2, 0x2, 0xbe, 0xbf, 0x5, 0x26, 0x14, 0x2, 0xbf, 0xc0, 0x7, 0x42, 0x2, 
    0x2, 0xc0, 0x12e, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x1f, 0x2, 0x2, 
    0xc2, 0xc3, 0x7, 0x41, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0x26, 0x14, 0x2, 0xc4, 
    0xc5, 0x7, 0x42, 0x2, 0x2, 0xc5, 0x12e, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 
    0x7, 0x20, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x41, 0x2, 0x2, 0xc8, 0xc9, 0x5, 
    0x26, 0x14, 0x2, 0xc9, 0xca, 0x7, 0x42, 0x2, 0x2, 0xca, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x21, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x41, 
    0x2, 0x2, 0xcd, 0xce, 0x5, 0x26, 0x14, 0x2, 0xce, 0xcf, 0x7, 0x42, 0x2, 
    0x2, 0xcf, 0x12e, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x22, 0x2, 0x2, 
    0xd1, 0xd2, 0x7, 0x41, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x26, 0x14, 0x2, 0xd3, 
    0xd4, 0x7, 0x42, 0x2, 0x2, 0xd4, 0x12e, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 
    0x7, 0x23, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x41, 0x2, 0x2, 0xd7, 0xd8, 0x5, 
    0x26, 0x14, 0x2, 0xd8, 0xd9, 0x7, 0x42, 0x2, 0x2, 0xd9, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x24, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x41, 
    0x2, 0x2, 0xdc, 0xdd, 0x5, 0x26, 0x14, 0x2, 0xdd, 0xde, 0x7, 0x42, 0x2, 
    0x2, 0xde, 0x12e, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x25, 0x2, 0x2, 
    0xe0, 0xe1, 0x7, 0x41, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x26, 0x14, 0x2, 0xe2, 
    0xe3, 0x7, 0x42, 0x2, 0x2, 0xe3, 0x12e, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 
    0x7, 0x26, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x41, 0x2, 0x2, 0xe6, 0xe7, 0x5, 
    0x26, 0x14, 0x2, 0xe7, 0xe8, 0x7, 0x42, 0x2, 0x2, 0xe8, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x2a, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x41, 
    0x2, 0x2, 0xeb, 0xec, 0x5, 0x26, 0x14, 0x2, 0xec, 0xed, 0x7, 0x42, 0x2, 
    0x2, 0xed, 0x12e, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x7, 0x2b, 0x2, 0x2, 
    0xef, 0xf0, 0x7, 0x41, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x26, 0x14, 0x2, 0xf1, 
    0xf2, 0x7, 0x42, 0x2, 0x2, 0xf2, 0x12e, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 
    0x7, 0x2c, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x41, 0x2, 0x2, 0xf5, 0xf6, 0x5, 
    0x26, 0x14, 0x2, 0xf6, 0xf7, 0x7, 0x42, 0x2, 0x2, 0xf7, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x2d, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0x41, 
    0x2, 0x2, 0xfa, 0xfb, 0x5, 0x26, 0x14, 0x2, 0xfb, 0xfc, 0x7, 0x42, 0x2, 
    0x2, 0xfc, 0x12e, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x2e, 0x2, 0x2, 
    0xfe, 0xff, 0x7, 0x41, 0x2, 0x2, 0xff, 0x100, 0x5, 0x26, 0x14, 0x2, 
    0x100, 0x101, 0x7, 0x42, 0x2, 0x2, 0x101, 0x12e, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0x103, 0x7, 0x2f, 0x2, 0x2, 0x103, 0x104, 0x7, 0x41, 0x2, 0x2, 
    0x104, 0x105, 0x5, 0x26, 0x14, 0x2, 0x105, 0x106, 0x7, 0x42, 0x2, 0x2, 
    0x106, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0x30, 0x2, 0x2, 
    0x108, 0x109, 0x7, 0x41, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x26, 0x14, 0x2, 
    0x10a, 0x10b, 0x7, 0x42, 0x2, 0x2, 0x10b, 0x12e, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x10d, 0x7, 0x27, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x41, 0x2, 0x2, 
    0x10e, 0x10f, 0x5, 0x26, 0x14, 0x2, 0x10f, 0x110, 0x7, 0x42, 0x2, 0x2, 
    0x110, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x28, 0x2, 0x2, 
    0x112, 0x113, 0x7, 0x41, 0x2, 0x2, 0x113, 0x114, 0x5, 0x26, 0x14, 0x2, 
    0x114, 0x115, 0x7, 0x42, 0x2, 0x2, 0x115, 0x12e, 0x3, 0x2, 0x2, 0x2, 
    0x116, 0x117, 0x7, 0x29, 0x2, 0x2, 0x117, 0x118, 0x7, 0x41, 0x2, 0x2, 
    0x118, 0x119, 0x5, 0x26, 0x14, 0x2, 0x119, 0x11a, 0x7, 0x42, 0x2, 0x2, 
    0x11a, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x32, 0x2, 0x2, 
    0x11c, 0x11d, 0x7, 0x41, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0x26, 0x14, 0x2, 
    0x11e, 0x11f, 0x7, 0x42, 0x2, 0x2, 0x11f, 0x12e, 0x3, 0x2, 0x2, 0x2, 
    0x120, 0x121, 0x7, 0x33, 0x2, 0x2, 0x121, 0x122, 0x7, 0x41, 0x2, 0x2, 
    0x122, 0x123, 0x5, 0x26, 0x14, 0x2, 0x123, 0x124, 0x7, 0x42, 0x2, 0x2, 
    0x124, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x35, 0x2, 0x2, 
    0x126, 0x127, 0x7, 0x41, 0x2, 0x2, 0x127, 0x128, 0x5, 0x26, 0x14, 0x2, 
    0x128, 0x129, 0x7, 0x45, 0x2, 0x2, 0x129, 0x12a, 0x5, 0x26, 0x14, 0x2, 
    0x12a, 0x12b, 0x7, 0x42, 0x2, 0x2, 0x12b, 0x12e, 0x3, 0x2, 0x2, 0x2, 
    0x12c, 0x12e, 0x9, 0x4, 0x2, 0x2, 0x12d, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x12d, 
    0xbb, 0x3, 0x2, 0x2, 0x2, 0x12d, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x12d, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0x12d, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x12d, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x12d, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0x12d, 0xda, 0x3, 0x2, 0x2, 0x2, 0x12d, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0x12d, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x12d, 0xe9, 0x3, 0x2, 0x2, 0x2, 
    0x12d, 0xee, 0x3, 0x2, 0x2, 0x2, 0x12d, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x12d, 
    0xf8, 0x3, 0x2, 0x2, 0x2, 0x12d, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x12d, 0x107, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x12d, 0x111, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x116, 
    0x3, 0x2, 0x2, 0x2, 0x12d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x120, 
    0x3, 0x2, 0x2, 0x2, 0x12d, 0x125, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 
    0xc, 0x1e, 0x2, 0x2, 0x130, 0x131, 0x7, 0x53, 0x2, 0x2, 0x131, 0x139, 
    0x5, 0x26, 0x14, 0x1f, 0x132, 0x133, 0xc, 0x1b, 0x2, 0x2, 0x133, 0x134, 
    0x9, 0x5, 0x2, 0x2, 0x134, 0x139, 0x5, 0x26, 0x14, 0x1c, 0x135, 0x136, 
    0xc, 0x1a, 0x2, 0x2, 0x136, 0x137, 0x9, 0x6, 0x2, 0x2, 0x137, 0x139, 
    0x5, 0x26, 0x14, 0x1b, 0x138, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x138, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x135, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13c, 
    0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 
    0x3, 0x2, 0x2, 0x2, 0x13b, 0x27, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x13d, 0x13e, 0x8, 0x15, 0x1, 0x2, 0x13e, 0x13f, 0x7, 
    0x4f, 0x2, 0x2, 0x13f, 0x1b9, 0x5, 0x28, 0x15, 0x1f, 0x140, 0x141, 0x7, 
    0x50, 0x2, 0x2, 0x141, 0x1b9, 0x5, 0x28, 0x15, 0x1e, 0x142, 0x143, 0x7, 
    0x41, 0x2, 0x2, 0x143, 0x144, 0x5, 0x28, 0x15, 0x2, 0x144, 0x145, 0x7, 
    0x42, 0x2, 0x2, 0x145, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x7, 
    0x1f, 0x2, 0x2, 0x147, 0x148, 0x7, 0x41, 0x2, 0x2, 0x148, 0x149, 0x5, 
    0x28, 0x15, 0x2, 0x149, 0x14a, 0x7, 0x42, 0x2, 0x2, 0x14a, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x14b, 0x14c, 0x7, 0x20, 0x2, 0x2, 0x14c, 0x14d, 0x7, 
    0x41, 0x2, 0x2, 0x14d, 0x14e, 0x5, 0x28, 0x15, 0x2, 0x14e, 0x14f, 0x7, 
    0x42, 0x2, 0x2, 0x14f, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x7, 
    0x21, 0x2, 0x2, 0x151, 0x152, 0x7, 0x41, 0x2, 0x2, 0x152, 0x153, 0x5, 
    0x28, 0x15, 0x2, 0x153, 0x154, 0x7, 0x42, 0x2, 0x2, 0x154, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x155, 0x156, 0x7, 0x22, 0x2, 0x2, 0x156, 0x157, 0x7, 
    0x41, 0x2, 0x2, 0x157, 0x158, 0x5, 0x28, 0x15, 0x2, 0x158, 0x159, 0x7, 
    0x42, 0x2, 0x2, 0x159, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x7, 
    0x23, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x41, 0x2, 0x2, 0x15c, 0x15d, 0x5, 
    0x28, 0x15, 0x2, 0x15d, 0x15e, 0x7, 0x42, 0x2, 0x2, 0x15e, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x15f, 0x160, 0x7, 0x24, 0x2, 0x2, 0x160, 0x161, 0x7, 
    0x41, 0x2, 0x2, 0x161, 0x162, 0x5, 0x28, 0x15, 0x2, 0x162, 0x163, 0x7, 
    0x42, 0x2, 0x2, 0x163, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x7, 
    0x25, 0x2, 0x2, 0x165, 0x166, 0x7, 0x41, 0x2, 0x2, 0x166, 0x167, 0x5, 
    0x28, 0x15, 0x2, 0x167, 0x168, 0x7, 0x42, 0x2, 0x2, 0x168, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x169, 0x16a, 0x7, 0x26, 0x2, 0x2, 0x16a, 0x16b, 0x7, 
    0x41, 0x2, 0x2, 0x16b, 0x16c, 0x5, 0x28, 0x15, 0x2, 0x16c, 0x16d, 0x7, 
    0x42, 0x2, 0x2, 0x16d, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x7, 
    0x2a, 0x2, 0x2, 0x16f, 0x170, 0x7, 0x41, 0x2, 0x2, 0x170, 0x171, 0x5, 
    0x28, 0x15, 0x2, 0x171, 0x172, 0x7, 0x42, 0x2, 0x2, 0x172, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x173, 0x174, 0x7, 0x2b, 0x2, 0x2, 0x174, 0x175, 0x7, 
    0x41, 0x2, 0x2, 0x175, 0x176, 0x5, 0x28, 0x15, 0x2, 0x176, 0x177, 0x7, 
    0x42, 0x2, 0x2, 0x177, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x7, 
    0x2c, 0x2, 0x2, 0x179, 0x17a, 0x7, 0x41, 0x2, 0x2, 0x17a, 0x17b, 0x5, 
    0x28, 0x15, 0x2, 0x17b, 0x17c, 0x7, 0x42, 0x2, 0x2, 0x17c, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x17d, 0x17e, 0x7, 0x2d, 0x2, 0x2, 0x17e, 0x17f, 0x7, 
    0x41, 0x2, 0x2, 0x17f, 0x180, 0x5, 0x28, 0x15, 0x2, 0x180, 0x181, 0x7, 
    0x42, 0x2, 0x2, 0x181, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x7, 
    0x2e, 0x2, 0x2, 0x183, 0x184, 0x7, 0x41, 0x2, 0x2, 0x184, 0x185, 0x5, 
    0x28, 0x15, 0x2, 0x185, 0x186, 0x7, 0x42, 0x2, 0x2, 0x186, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x187, 0x188, 0x7, 0x2f, 0x2, 0x2, 0x188, 0x189, 0x7, 
    0x41, 0x2, 0x2, 0x189, 0x18a, 0x5, 0x28, 0x15, 0x2, 0x18a, 0x18b, 0x7, 
    0x42, 0x2, 0x2, 0x18b, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x7, 
    0x30, 0x2, 0x2, 0x18d, 0x18e, 0x7, 0x41, 0x2, 0x2, 0x18e, 0x18f, 0x5, 
    0x28, 0x15, 0x2, 0x18f, 0x190, 0x7, 0x42, 0x2, 0x2, 0x190, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x191, 0x192, 0x7, 0x31, 0x2, 0x2, 0x192, 0x193, 0x7, 
    0x41, 0x2, 0x2, 0x193, 0x194, 0x5, 0x28, 0x15, 0x2, 0x194, 0x195, 0x7, 
    0x42, 0x2, 0x2, 0x195, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x7, 
    0x27, 0x2, 0x2, 0x197, 0x198, 0x7, 0x41, 0x2, 0x2, 0x198, 0x199, 0x5, 
    0x28, 0x15, 0x2, 0x199, 0x19a, 0x7, 0x42, 0x2, 0x2, 0x19a, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x19b, 0x19c, 0x7, 0x28, 0x2, 0x2, 0x19c, 0x19d, 0x7, 
    0x41, 0x2, 0x2, 0x19d, 0x19e, 0x5, 0x28, 0x15, 0x2, 0x19e, 0x19f, 0x7, 
    0x42, 0x2, 0x2, 0x19f, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x7, 
    0x29, 0x2, 0x2, 0x1a1, 0x1a2, 0x7, 0x41, 0x2, 0x2, 0x1a2, 0x1a3, 0x5, 
    0x28, 0x15, 0x2, 0x1a3, 0x1a4, 0x7, 0x42, 0x2, 0x2, 0x1a4, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x7, 0x32, 0x2, 0x2, 0x1a6, 0x1a7, 0x7, 
    0x41, 0x2, 0x2, 0x1a7, 0x1a8, 0x5, 0x28, 0x15, 0x2, 0x1a8, 0x1a9, 0x7, 
    0x42, 0x2, 0x2, 0x1a9, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x7, 
    0x33, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0x41, 0x2, 0x2, 0x1ac, 0x1ad, 0x5, 
    0x28, 0x15, 0x2, 0x1ad, 0x1ae, 0x7, 0x42, 0x2, 0x2, 0x1ae, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x7, 0x35, 0x2, 0x2, 0x1b0, 0x1b1, 0x7, 
    0x41, 0x2, 0x2, 0x1b1, 0x1b2, 0x5, 0x28, 0x15, 0x2, 0x1b2, 0x1b3, 0x7, 
    0x45, 0x2, 0x2, 0x1b3, 0x1b4, 0x5, 0x28, 0x15, 0x2, 0x1b4, 0x1b5, 0x7, 
    0x42, 0x2, 0x2, 0x1b5, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b9, 0x9, 
    0x7, 0x2, 0x2, 0x1b7, 0x1b9, 0x7, 0x3e, 0x2, 0x2, 0x1b8, 0x13d, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x140, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x142, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x146, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x14b, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x150, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x155, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x15f, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x164, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x169, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x173, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x178, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x17d, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x182, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x187, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x191, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x196, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x19b, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1a5, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1af, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b7, 0x3, 
    0x2, 0x2, 0x2, 0x1b9, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0xc, 
    0x20, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x53, 0x2, 0x2, 0x1bc, 0x1c4, 0x5, 
    0x28, 0x15, 0x21, 0x1bd, 0x1be, 0xc, 0x1d, 0x2, 0x2, 0x1be, 0x1bf, 0x9, 
    0x5, 0x2, 0x2, 0x1bf, 0x1c4, 0x5, 0x28, 0x15, 0x1e, 0x1c0, 0x1c1, 0xc, 
    0x1c, 0x2, 0x2, 0x1c1, 0x1c2, 0x9, 0x6, 0x2, 0x2, 0x1c2, 0x1c4, 0x5, 
    0x28, 0x15, 0x1d, 0x1c3, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1bd, 0x3, 
    0x2, 0x2, 0x2, 0x1c3, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c7, 0x3, 
    0x2, 0x2, 0x2, 0x1c5, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 
    0x2, 0x2, 0x2, 0x1c6, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c5, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x32, 0x3f, 0x50, 0x59, 0x60, 0x6a, 0x6f, 0x78, 0x7d, 
    0x88, 0x91, 0x96, 0x9e, 0xa7, 0xab, 0xb0, 0x12d, 0x138, 0x13a, 0x1b8, 
    0x1c3, 0x1c5, 
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
