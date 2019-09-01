
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/settings.g4 by ANTLR 4.7.2


#include "settingsListener.h"
#include "settingsVisitor.h"

#include "settingsParser.h"


using namespace antlrcpp;
using namespace antlr4;

settingsParser::settingsParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

settingsParser::~settingsParser() {
  delete _interpreter;
}

std::string settingsParser::getGrammarFileName() const {
  return "settings.g4";
}

const std::vector<std::string>& settingsParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& settingsParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TimeHorizonsettingContext ------------------------------------------------------------------

settingsParser::TimeHorizonsettingContext::TimeHorizonsettingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::TimeHorizonsettingContext::KEY_TIME_HORIZON() {
  return getToken(settingsParser::KEY_TIME_HORIZON, 0);
}

tree::TerminalNode* settingsParser::TimeHorizonsettingContext::DEFINE() {
  return getToken(settingsParser::DEFINE, 0);
}

settingsParser::IntervalContext* settingsParser::TimeHorizonsettingContext::interval() {
  return getRuleContext<settingsParser::IntervalContext>(0);
}


size_t settingsParser::TimeHorizonsettingContext::getRuleIndex() const {
  return settingsParser::RuleTimeHorizonsetting;
}

void settingsParser::TimeHorizonsettingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimeHorizonsetting(this);
}

void settingsParser::TimeHorizonsettingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimeHorizonsetting(this);
}


antlrcpp::Any settingsParser::TimeHorizonsettingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitTimeHorizonsetting(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::TimeHorizonsettingContext* settingsParser::timeHorizonsetting() {
  TimeHorizonsettingContext *_localctx = _tracker.createInstance<TimeHorizonsettingContext>(_ctx, getState());
  enterRule(_localctx, 0, settingsParser::RuleTimeHorizonsetting);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(settingsParser::KEY_TIME_HORIZON);
    setState(47);
    match(settingsParser::DEFINE);
    setState(48);
    interval();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StepSettingContext ------------------------------------------------------------------

settingsParser::StepSettingContext::StepSettingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::StepSettingContext::KEY_STEP() {
  return getToken(settingsParser::KEY_STEP, 0);
}

tree::TerminalNode* settingsParser::StepSettingContext::DEFINE() {
  return getToken(settingsParser::DEFINE, 0);
}

tree::TerminalNode* settingsParser::StepSettingContext::NUMBER() {
  return getToken(settingsParser::NUMBER, 0);
}


size_t settingsParser::StepSettingContext::getRuleIndex() const {
  return settingsParser::RuleStepSetting;
}

void settingsParser::StepSettingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStepSetting(this);
}

void settingsParser::StepSettingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStepSetting(this);
}


antlrcpp::Any settingsParser::StepSettingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitStepSetting(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::StepSettingContext* settingsParser::stepSetting() {
  StepSettingContext *_localctx = _tracker.createInstance<StepSettingContext>(_ctx, getState());
  enterRule(_localctx, 2, settingsParser::RuleStepSetting);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(settingsParser::KEY_STEP);
    setState(51);
    match(settingsParser::DEFINE);
    setState(52);
    match(settingsParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeometrysettingContext ------------------------------------------------------------------

settingsParser::GeometrysettingContext::GeometrysettingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::GeometrysettingContext::KEY_GEOMETRY() {
  return getToken(settingsParser::KEY_GEOMETRY, 0);
}

tree::TerminalNode* settingsParser::GeometrysettingContext::DEFINE() {
  return getToken(settingsParser::DEFINE, 0);
}

tree::TerminalNode* settingsParser::GeometrysettingContext::KEY_INTERVAL_HULL() {
  return getToken(settingsParser::KEY_INTERVAL_HULL, 0);
}

tree::TerminalNode* settingsParser::GeometrysettingContext::KEY_POLYTOPE() {
  return getToken(settingsParser::KEY_POLYTOPE, 0);
}


size_t settingsParser::GeometrysettingContext::getRuleIndex() const {
  return settingsParser::RuleGeometrysetting;
}

void settingsParser::GeometrysettingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeometrysetting(this);
}

void settingsParser::GeometrysettingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeometrysetting(this);
}


antlrcpp::Any settingsParser::GeometrysettingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitGeometrysetting(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::GeometrysettingContext* settingsParser::geometrysetting() {
  GeometrysettingContext *_localctx = _tracker.createInstance<GeometrysettingContext>(_ctx, getState());
  enterRule(_localctx, 4, settingsParser::RuleGeometrysetting);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(settingsParser::KEY_GEOMETRY);
    setState(55);
    match(settingsParser::DEFINE);
    setState(56);
    dynamic_cast<GeometrysettingContext *>(_localctx)->VALUE = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == settingsParser::KEY_INTERVAL_HULL

    || _la == settingsParser::KEY_POLYTOPE)) {
      dynamic_cast<GeometrysettingContext *>(_localctx)->VALUE = _errHandler->recoverInline(this);
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

//----------------- PlotsettingContext ------------------------------------------------------------------

settingsParser::PlotsettingContext::PlotsettingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::PlotsettingContext::KEY_PLOT_FLAG() {
  return getToken(settingsParser::KEY_PLOT_FLAG, 0);
}

tree::TerminalNode* settingsParser::PlotsettingContext::DEFINE() {
  return getToken(settingsParser::DEFINE, 0);
}

tree::TerminalNode* settingsParser::PlotsettingContext::KEY_SWITCH_ON() {
  return getToken(settingsParser::KEY_SWITCH_ON, 0);
}

tree::TerminalNode* settingsParser::PlotsettingContext::KEY_SWITCH_OFF() {
  return getToken(settingsParser::KEY_SWITCH_OFF, 0);
}


size_t settingsParser::PlotsettingContext::getRuleIndex() const {
  return settingsParser::RulePlotsetting;
}

void settingsParser::PlotsettingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlotsetting(this);
}

void settingsParser::PlotsettingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlotsetting(this);
}


antlrcpp::Any settingsParser::PlotsettingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitPlotsetting(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::PlotsettingContext* settingsParser::plotsetting() {
  PlotsettingContext *_localctx = _tracker.createInstance<PlotsettingContext>(_ctx, getState());
  enterRule(_localctx, 6, settingsParser::RulePlotsetting);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(settingsParser::KEY_PLOT_FLAG);
    setState(59);
    match(settingsParser::DEFINE);
    setState(60);
    dynamic_cast<PlotsettingContext *>(_localctx)->SWITCH = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == settingsParser::KEY_SWITCH_ON

    || _la == settingsParser::KEY_SWITCH_OFF)) {
      dynamic_cast<PlotsettingContext *>(_localctx)->SWITCH = _errHandler->recoverInline(this);
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

//----------------- PrintsettingContext ------------------------------------------------------------------

settingsParser::PrintsettingContext::PrintsettingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::PrintsettingContext::KEY_PRINT_FLAG() {
  return getToken(settingsParser::KEY_PRINT_FLAG, 0);
}

tree::TerminalNode* settingsParser::PrintsettingContext::DEFINE() {
  return getToken(settingsParser::DEFINE, 0);
}

tree::TerminalNode* settingsParser::PrintsettingContext::KEY_SWITCH_ON() {
  return getToken(settingsParser::KEY_SWITCH_ON, 0);
}

tree::TerminalNode* settingsParser::PrintsettingContext::KEY_SWITCH_OFF() {
  return getToken(settingsParser::KEY_SWITCH_OFF, 0);
}


size_t settingsParser::PrintsettingContext::getRuleIndex() const {
  return settingsParser::RulePrintsetting;
}

void settingsParser::PrintsettingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintsetting(this);
}

void settingsParser::PrintsettingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintsetting(this);
}


antlrcpp::Any settingsParser::PrintsettingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitPrintsetting(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::PrintsettingContext* settingsParser::printsetting() {
  PrintsettingContext *_localctx = _tracker.createInstance<PrintsettingContext>(_ctx, getState());
  enterRule(_localctx, 8, settingsParser::RulePrintsetting);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(settingsParser::KEY_PRINT_FLAG);
    setState(63);
    match(settingsParser::DEFINE);
    setState(64);
    dynamic_cast<PrintsettingContext *>(_localctx)->SWITCH = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == settingsParser::KEY_SWITCH_ON

    || _la == settingsParser::KEY_SWITCH_OFF)) {
      dynamic_cast<PrintsettingContext *>(_localctx)->SWITCH = _errHandler->recoverInline(this);
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

//----------------- AnalysissettingContext ------------------------------------------------------------------

settingsParser::AnalysissettingContext::AnalysissettingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::AnalysissettingContext::KEY_ANALYSIS() {
  return getToken(settingsParser::KEY_ANALYSIS, 0);
}

tree::TerminalNode* settingsParser::AnalysissettingContext::DEFINE() {
  return getToken(settingsParser::DEFINE, 0);
}

tree::TerminalNode* settingsParser::AnalysissettingContext::KEY_ANALYSIS_FORWARD() {
  return getToken(settingsParser::KEY_ANALYSIS_FORWARD, 0);
}

tree::TerminalNode* settingsParser::AnalysissettingContext::KEY_ANALYSIS_BACKWARD() {
  return getToken(settingsParser::KEY_ANALYSIS_BACKWARD, 0);
}


size_t settingsParser::AnalysissettingContext::getRuleIndex() const {
  return settingsParser::RuleAnalysissetting;
}

void settingsParser::AnalysissettingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnalysissetting(this);
}

void settingsParser::AnalysissettingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnalysissetting(this);
}


antlrcpp::Any settingsParser::AnalysissettingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitAnalysissetting(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::AnalysissettingContext* settingsParser::analysissetting() {
  AnalysissettingContext *_localctx = _tracker.createInstance<AnalysissettingContext>(_ctx, getState());
  enterRule(_localctx, 10, settingsParser::RuleAnalysissetting);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(settingsParser::KEY_ANALYSIS);
    setState(67);
    match(settingsParser::DEFINE);
    setState(68);
    dynamic_cast<AnalysissettingContext *>(_localctx)->ANALYSIS = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == settingsParser::KEY_ANALYSIS_FORWARD

    || _la == settingsParser::KEY_ANALYSIS_BACKWARD)) {
      dynamic_cast<AnalysissettingContext *>(_localctx)->ANALYSIS = _errHandler->recoverInline(this);
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

//----------------- MaxjumpsettingContext ------------------------------------------------------------------

settingsParser::MaxjumpsettingContext::MaxjumpsettingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::MaxjumpsettingContext::KEY_MAX_JUMP() {
  return getToken(settingsParser::KEY_MAX_JUMP, 0);
}

tree::TerminalNode* settingsParser::MaxjumpsettingContext::DEFINE() {
  return getToken(settingsParser::DEFINE, 0);
}

tree::TerminalNode* settingsParser::MaxjumpsettingContext::NUMBER() {
  return getToken(settingsParser::NUMBER, 0);
}


size_t settingsParser::MaxjumpsettingContext::getRuleIndex() const {
  return settingsParser::RuleMaxjumpsetting;
}

void settingsParser::MaxjumpsettingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaxjumpsetting(this);
}

void settingsParser::MaxjumpsettingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaxjumpsetting(this);
}


antlrcpp::Any settingsParser::MaxjumpsettingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitMaxjumpsetting(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::MaxjumpsettingContext* settingsParser::maxjumpsetting() {
  MaxjumpsettingContext *_localctx = _tracker.createInstance<MaxjumpsettingContext>(_ctx, getState());
  enterRule(_localctx, 12, settingsParser::RuleMaxjumpsetting);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(settingsParser::KEY_MAX_JUMP);
    setState(71);
    match(settingsParser::DEFINE);
    setState(72);
    match(settingsParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StartmodelidsettingContext ------------------------------------------------------------------

settingsParser::StartmodelidsettingContext::StartmodelidsettingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::StartmodelidsettingContext::KEY_START_MODEL_ID() {
  return getToken(settingsParser::KEY_START_MODEL_ID, 0);
}

tree::TerminalNode* settingsParser::StartmodelidsettingContext::DEFINE() {
  return getToken(settingsParser::DEFINE, 0);
}

tree::TerminalNode* settingsParser::StartmodelidsettingContext::VARIABLE() {
  return getToken(settingsParser::VARIABLE, 0);
}


size_t settingsParser::StartmodelidsettingContext::getRuleIndex() const {
  return settingsParser::RuleStartmodelidsetting;
}

void settingsParser::StartmodelidsettingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStartmodelidsetting(this);
}

void settingsParser::StartmodelidsettingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStartmodelidsetting(this);
}


antlrcpp::Any settingsParser::StartmodelidsettingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitStartmodelidsetting(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::StartmodelidsettingContext* settingsParser::startmodelidsetting() {
  StartmodelidsettingContext *_localctx = _tracker.createInstance<StartmodelidsettingContext>(_ctx, getState());
  enterRule(_localctx, 14, settingsParser::RuleStartmodelidsetting);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(settingsParser::KEY_START_MODEL_ID);
    setState(75);
    match(settingsParser::DEFINE);
    setState(76);
    match(settingsParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitialconditionsettingContext ------------------------------------------------------------------

settingsParser::InitialconditionsettingContext::InitialconditionsettingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::InitialconditionsettingContext::KEY_INITIAL_CONDITION() {
  return getToken(settingsParser::KEY_INITIAL_CONDITION, 0);
}

tree::TerminalNode* settingsParser::InitialconditionsettingContext::DEFINE() {
  return getToken(settingsParser::DEFINE, 0);
}

settingsParser::ConditionContext* settingsParser::InitialconditionsettingContext::condition() {
  return getRuleContext<settingsParser::ConditionContext>(0);
}


size_t settingsParser::InitialconditionsettingContext::getRuleIndex() const {
  return settingsParser::RuleInitialconditionsetting;
}

void settingsParser::InitialconditionsettingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitialconditionsetting(this);
}

void settingsParser::InitialconditionsettingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitialconditionsetting(this);
}


antlrcpp::Any settingsParser::InitialconditionsettingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitInitialconditionsetting(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::InitialconditionsettingContext* settingsParser::initialconditionsetting() {
  InitialconditionsettingContext *_localctx = _tracker.createInstance<InitialconditionsettingContext>(_ctx, getState());
  enterRule(_localctx, 16, settingsParser::RuleInitialconditionsetting);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(settingsParser::KEY_INITIAL_CONDITION);
    setState(79);
    match(settingsParser::DEFINE);
    setState(80);
    condition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SettingContext ------------------------------------------------------------------

settingsParser::SettingContext::SettingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::SettingContext::KEY_SETTINGS() {
  return getToken(settingsParser::KEY_SETTINGS, 0);
}

tree::TerminalNode* settingsParser::SettingContext::LEFTCURLYBRACKET() {
  return getToken(settingsParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* settingsParser::SettingContext::RIGHTCURLYBRACKET() {
  return getToken(settingsParser::RIGHTCURLYBRACKET, 0);
}

std::vector<settingsParser::TimeHorizonsettingContext *> settingsParser::SettingContext::timeHorizonsetting() {
  return getRuleContexts<settingsParser::TimeHorizonsettingContext>();
}

settingsParser::TimeHorizonsettingContext* settingsParser::SettingContext::timeHorizonsetting(size_t i) {
  return getRuleContext<settingsParser::TimeHorizonsettingContext>(i);
}

std::vector<settingsParser::StepSettingContext *> settingsParser::SettingContext::stepSetting() {
  return getRuleContexts<settingsParser::StepSettingContext>();
}

settingsParser::StepSettingContext* settingsParser::SettingContext::stepSetting(size_t i) {
  return getRuleContext<settingsParser::StepSettingContext>(i);
}

std::vector<settingsParser::PlotsettingContext *> settingsParser::SettingContext::plotsetting() {
  return getRuleContexts<settingsParser::PlotsettingContext>();
}

settingsParser::PlotsettingContext* settingsParser::SettingContext::plotsetting(size_t i) {
  return getRuleContext<settingsParser::PlotsettingContext>(i);
}

std::vector<settingsParser::PrintsettingContext *> settingsParser::SettingContext::printsetting() {
  return getRuleContexts<settingsParser::PrintsettingContext>();
}

settingsParser::PrintsettingContext* settingsParser::SettingContext::printsetting(size_t i) {
  return getRuleContext<settingsParser::PrintsettingContext>(i);
}

std::vector<settingsParser::AnalysissettingContext *> settingsParser::SettingContext::analysissetting() {
  return getRuleContexts<settingsParser::AnalysissettingContext>();
}

settingsParser::AnalysissettingContext* settingsParser::SettingContext::analysissetting(size_t i) {
  return getRuleContext<settingsParser::AnalysissettingContext>(i);
}

std::vector<settingsParser::GeometrysettingContext *> settingsParser::SettingContext::geometrysetting() {
  return getRuleContexts<settingsParser::GeometrysettingContext>();
}

settingsParser::GeometrysettingContext* settingsParser::SettingContext::geometrysetting(size_t i) {
  return getRuleContext<settingsParser::GeometrysettingContext>(i);
}

std::vector<settingsParser::MaxjumpsettingContext *> settingsParser::SettingContext::maxjumpsetting() {
  return getRuleContexts<settingsParser::MaxjumpsettingContext>();
}

settingsParser::MaxjumpsettingContext* settingsParser::SettingContext::maxjumpsetting(size_t i) {
  return getRuleContext<settingsParser::MaxjumpsettingContext>(i);
}

std::vector<settingsParser::StartmodelidsettingContext *> settingsParser::SettingContext::startmodelidsetting() {
  return getRuleContexts<settingsParser::StartmodelidsettingContext>();
}

settingsParser::StartmodelidsettingContext* settingsParser::SettingContext::startmodelidsetting(size_t i) {
  return getRuleContext<settingsParser::StartmodelidsettingContext>(i);
}

std::vector<settingsParser::InitialconditionsettingContext *> settingsParser::SettingContext::initialconditionsetting() {
  return getRuleContexts<settingsParser::InitialconditionsettingContext>();
}

settingsParser::InitialconditionsettingContext* settingsParser::SettingContext::initialconditionsetting(size_t i) {
  return getRuleContext<settingsParser::InitialconditionsettingContext>(i);
}


size_t settingsParser::SettingContext::getRuleIndex() const {
  return settingsParser::RuleSetting;
}

void settingsParser::SettingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetting(this);
}

void settingsParser::SettingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetting(this);
}


antlrcpp::Any settingsParser::SettingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitSetting(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::SettingContext* settingsParser::setting() {
  SettingContext *_localctx = _tracker.createInstance<SettingContext>(_ctx, getState());
  enterRule(_localctx, 18, settingsParser::RuleSetting);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(settingsParser::KEY_SETTINGS);
    setState(83);
    match(settingsParser::LEFTCURLYBRACKET);
    setState(93); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(93);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case settingsParser::KEY_TIME_HORIZON: {
          setState(84);
          timeHorizonsetting();
          break;
        }

        case settingsParser::KEY_STEP: {
          setState(85);
          stepSetting();
          break;
        }

        case settingsParser::KEY_PLOT_FLAG: {
          setState(86);
          plotsetting();
          break;
        }

        case settingsParser::KEY_PRINT_FLAG: {
          setState(87);
          printsetting();
          break;
        }

        case settingsParser::KEY_ANALYSIS: {
          setState(88);
          analysissetting();
          break;
        }

        case settingsParser::KEY_GEOMETRY: {
          setState(89);
          geometrysetting();
          break;
        }

        case settingsParser::KEY_MAX_JUMP: {
          setState(90);
          maxjumpsetting();
          break;
        }

        case settingsParser::KEY_START_MODEL_ID: {
          setState(91);
          startmodelidsetting();
          break;
        }

        case settingsParser::KEY_INITIAL_CONDITION: {
          setState(92);
          initialconditionsetting();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(95); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << settingsParser::KEY_ANALYSIS)
      | (1ULL << settingsParser::KEY_TIME_HORIZON)
      | (1ULL << settingsParser::KEY_STEP)
      | (1ULL << settingsParser::KEY_GEOMETRY)
      | (1ULL << settingsParser::KEY_PLOT_FLAG)
      | (1ULL << settingsParser::KEY_PRINT_FLAG)
      | (1ULL << settingsParser::KEY_MAX_JUMP)
      | (1ULL << settingsParser::KEY_START_MODEL_ID)
      | (1ULL << settingsParser::KEY_INITIAL_CONDITION))) != 0));
    setState(97);
    match(settingsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

settingsParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::ConditionContext::KEY_CONDITION() {
  return getToken(settingsParser::KEY_CONDITION, 0);
}

tree::TerminalNode* settingsParser::ConditionContext::LEFTCURLYBRACKET() {
  return getToken(settingsParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* settingsParser::ConditionContext::RIGHTCURLYBRACKET() {
  return getToken(settingsParser::RIGHTCURLYBRACKET, 0);
}

settingsParser::IntervalhullContext* settingsParser::ConditionContext::intervalhull() {
  return getRuleContext<settingsParser::IntervalhullContext>(0);
}

settingsParser::PolytopeContext* settingsParser::ConditionContext::polytope() {
  return getRuleContext<settingsParser::PolytopeContext>(0);
}


size_t settingsParser::ConditionContext::getRuleIndex() const {
  return settingsParser::RuleCondition;
}

void settingsParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void settingsParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any settingsParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::ConditionContext* settingsParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 20, settingsParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(settingsParser::KEY_CONDITION);
    setState(100);
    match(settingsParser::LEFTCURLYBRACKET);
    setState(103);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case settingsParser::KEY_INTERVAL_HULL: {
        setState(101);
        intervalhull();
        break;
      }

      case settingsParser::KEY_POLYTOPE: {
        setState(102);
        polytope();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(105);
    match(settingsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PolytopeContext ------------------------------------------------------------------

settingsParser::PolytopeContext::PolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::PolytopeContext::KEY_POLYTOPE() {
  return getToken(settingsParser::KEY_POLYTOPE, 0);
}

settingsParser::HpolytopeContext* settingsParser::PolytopeContext::hpolytope() {
  return getRuleContext<settingsParser::HpolytopeContext>(0);
}

settingsParser::VpolytopeContext* settingsParser::PolytopeContext::vpolytope() {
  return getRuleContext<settingsParser::VpolytopeContext>(0);
}


size_t settingsParser::PolytopeContext::getRuleIndex() const {
  return settingsParser::RulePolytope;
}

void settingsParser::PolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPolytope(this);
}

void settingsParser::PolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPolytope(this);
}


antlrcpp::Any settingsParser::PolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitPolytope(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::PolytopeContext* settingsParser::polytope() {
  PolytopeContext *_localctx = _tracker.createInstance<PolytopeContext>(_ctx, getState());
  enterRule(_localctx, 22, settingsParser::RulePolytope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(settingsParser::KEY_POLYTOPE);
    setState(110);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(108);
      hpolytope();
      break;
    }

    case 2: {
      setState(109);
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

settingsParser::HpolytopeContext::HpolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::HpolytopeContext::LEFTCURLYBRACKET() {
  return getToken(settingsParser::LEFTCURLYBRACKET, 0);
}

settingsParser::MatrixContext* settingsParser::HpolytopeContext::matrix() {
  return getRuleContext<settingsParser::MatrixContext>(0);
}

settingsParser::VectorContext* settingsParser::HpolytopeContext::vector() {
  return getRuleContext<settingsParser::VectorContext>(0);
}

tree::TerminalNode* settingsParser::HpolytopeContext::RIGHTCURLYBRACKET() {
  return getToken(settingsParser::RIGHTCURLYBRACKET, 0);
}


size_t settingsParser::HpolytopeContext::getRuleIndex() const {
  return settingsParser::RuleHpolytope;
}

void settingsParser::HpolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHpolytope(this);
}

void settingsParser::HpolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHpolytope(this);
}


antlrcpp::Any settingsParser::HpolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitHpolytope(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::HpolytopeContext* settingsParser::hpolytope() {
  HpolytopeContext *_localctx = _tracker.createInstance<HpolytopeContext>(_ctx, getState());
  enterRule(_localctx, 24, settingsParser::RuleHpolytope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(settingsParser::LEFTCURLYBRACKET);
    setState(113);
    matrix();
    setState(114);
    vector();
    setState(115);
    match(settingsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VpolytopeContext ------------------------------------------------------------------

settingsParser::VpolytopeContext::VpolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::VpolytopeContext::LEFTCURLYBRACKET() {
  return getToken(settingsParser::LEFTCURLYBRACKET, 0);
}

std::vector<settingsParser::VectorContext *> settingsParser::VpolytopeContext::vector() {
  return getRuleContexts<settingsParser::VectorContext>();
}

settingsParser::VectorContext* settingsParser::VpolytopeContext::vector(size_t i) {
  return getRuleContext<settingsParser::VectorContext>(i);
}

tree::TerminalNode* settingsParser::VpolytopeContext::RIGHTCURLYBRACKET() {
  return getToken(settingsParser::RIGHTCURLYBRACKET, 0);
}

std::vector<tree::TerminalNode *> settingsParser::VpolytopeContext::COMMA() {
  return getTokens(settingsParser::COMMA);
}

tree::TerminalNode* settingsParser::VpolytopeContext::COMMA(size_t i) {
  return getToken(settingsParser::COMMA, i);
}


size_t settingsParser::VpolytopeContext::getRuleIndex() const {
  return settingsParser::RuleVpolytope;
}

void settingsParser::VpolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVpolytope(this);
}

void settingsParser::VpolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVpolytope(this);
}


antlrcpp::Any settingsParser::VpolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitVpolytope(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::VpolytopeContext* settingsParser::vpolytope() {
  VpolytopeContext *_localctx = _tracker.createInstance<VpolytopeContext>(_ctx, getState());
  enterRule(_localctx, 26, settingsParser::RuleVpolytope);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(settingsParser::LEFTCURLYBRACKET);
    setState(118);
    vector();
    setState(123); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(120);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == settingsParser::COMMA) {
        setState(119);
        match(settingsParser::COMMA);
      }
      setState(122);
      vector();
      setState(125); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == settingsParser::LEFTROUNDBRACKET

    || _la == settingsParser::COMMA);
    setState(127);
    match(settingsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatrixContext ------------------------------------------------------------------

settingsParser::MatrixContext::MatrixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::MatrixContext::KEY_MATRIX() {
  return getToken(settingsParser::KEY_MATRIX, 0);
}

tree::TerminalNode* settingsParser::MatrixContext::LEFTCURLYBRACKET() {
  return getToken(settingsParser::LEFTCURLYBRACKET, 0);
}

std::vector<settingsParser::VectorContext *> settingsParser::MatrixContext::vector() {
  return getRuleContexts<settingsParser::VectorContext>();
}

settingsParser::VectorContext* settingsParser::MatrixContext::vector(size_t i) {
  return getRuleContext<settingsParser::VectorContext>(i);
}

tree::TerminalNode* settingsParser::MatrixContext::RIGHTCURLYBRACKET() {
  return getToken(settingsParser::RIGHTCURLYBRACKET, 0);
}

tree::TerminalNode* settingsParser::MatrixContext::KEY_ROW_MAJOR_ORDER() {
  return getToken(settingsParser::KEY_ROW_MAJOR_ORDER, 0);
}

tree::TerminalNode* settingsParser::MatrixContext::KEY_COL_MAJOR_ORDER() {
  return getToken(settingsParser::KEY_COL_MAJOR_ORDER, 0);
}

std::vector<tree::TerminalNode *> settingsParser::MatrixContext::COMMA() {
  return getTokens(settingsParser::COMMA);
}

tree::TerminalNode* settingsParser::MatrixContext::COMMA(size_t i) {
  return getToken(settingsParser::COMMA, i);
}


size_t settingsParser::MatrixContext::getRuleIndex() const {
  return settingsParser::RuleMatrix;
}

void settingsParser::MatrixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrix(this);
}

void settingsParser::MatrixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrix(this);
}


antlrcpp::Any settingsParser::MatrixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitMatrix(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::MatrixContext* settingsParser::matrix() {
  MatrixContext *_localctx = _tracker.createInstance<MatrixContext>(_ctx, getState());
  enterRule(_localctx, 28, settingsParser::RuleMatrix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(settingsParser::KEY_MATRIX);
    setState(130);
    match(settingsParser::LEFTCURLYBRACKET);
    setState(131);
    dynamic_cast<MatrixContext *>(_localctx)->MAJOR_ORDER = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == settingsParser::KEY_ROW_MAJOR_ORDER

    || _la == settingsParser::KEY_COL_MAJOR_ORDER)) {
      dynamic_cast<MatrixContext *>(_localctx)->MAJOR_ORDER = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(132);
    vector();
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == settingsParser::LEFTROUNDBRACKET

    || _la == settingsParser::COMMA) {
      setState(134);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == settingsParser::COMMA) {
        setState(133);
        match(settingsParser::COMMA);
      }
      setState(136);
      vector();
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(142);
    match(settingsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorContext ------------------------------------------------------------------

settingsParser::VectorContext::VectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::VectorContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

std::vector<tree::TerminalNode *> settingsParser::VectorContext::NUMBER() {
  return getTokens(settingsParser::NUMBER);
}

tree::TerminalNode* settingsParser::VectorContext::NUMBER(size_t i) {
  return getToken(settingsParser::NUMBER, i);
}

tree::TerminalNode* settingsParser::VectorContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

std::vector<tree::TerminalNode *> settingsParser::VectorContext::PLUS() {
  return getTokens(settingsParser::PLUS);
}

tree::TerminalNode* settingsParser::VectorContext::PLUS(size_t i) {
  return getToken(settingsParser::PLUS, i);
}

std::vector<tree::TerminalNode *> settingsParser::VectorContext::MINUS() {
  return getTokens(settingsParser::MINUS);
}

tree::TerminalNode* settingsParser::VectorContext::MINUS(size_t i) {
  return getToken(settingsParser::MINUS, i);
}

std::vector<tree::TerminalNode *> settingsParser::VectorContext::COMMA() {
  return getTokens(settingsParser::COMMA);
}

tree::TerminalNode* settingsParser::VectorContext::COMMA(size_t i) {
  return getToken(settingsParser::COMMA, i);
}


size_t settingsParser::VectorContext::getRuleIndex() const {
  return settingsParser::RuleVector;
}

void settingsParser::VectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVector(this);
}

void settingsParser::VectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVector(this);
}


antlrcpp::Any settingsParser::VectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitVector(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::VectorContext* settingsParser::vector() {
  VectorContext *_localctx = _tracker.createInstance<VectorContext>(_ctx, getState());
  enterRule(_localctx, 30, settingsParser::RuleVector);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(settingsParser::LEFTROUNDBRACKET);
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == settingsParser::PLUS

    || _la == settingsParser::MINUS) {
      setState(145);
      dynamic_cast<VectorContext *>(_localctx)->_tset115 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == settingsParser::PLUS

      || _la == settingsParser::MINUS)) {
        dynamic_cast<VectorContext *>(_localctx)->_tset115 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<VectorContext *>(_localctx)->OP.push_back(dynamic_cast<VectorContext *>(_localctx)->_tset115);
    }
    setState(148);
    match(settingsParser::NUMBER);
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (settingsParser::NUMBER - 59))
      | (1ULL << (settingsParser::COMMA - 59))
      | (1ULL << (settingsParser::PLUS - 59))
      | (1ULL << (settingsParser::MINUS - 59)))) != 0)) {
      setState(150);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == settingsParser::COMMA) {
        setState(149);
        match(settingsParser::COMMA);
      }
      setState(153);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == settingsParser::PLUS

      || _la == settingsParser::MINUS) {
        setState(152);
        dynamic_cast<VectorContext *>(_localctx)->_tset135 = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == settingsParser::PLUS

        || _la == settingsParser::MINUS)) {
          dynamic_cast<VectorContext *>(_localctx)->_tset135 = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        dynamic_cast<VectorContext *>(_localctx)->OP.push_back(dynamic_cast<VectorContext *>(_localctx)->_tset135);
      }
      setState(155);
      match(settingsParser::NUMBER);
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(161);
    match(settingsParser::RIGHTROUNDBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalhullContext ------------------------------------------------------------------

settingsParser::IntervalhullContext::IntervalhullContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::IntervalhullContext::KEY_INTERVAL_HULL() {
  return getToken(settingsParser::KEY_INTERVAL_HULL, 0);
}

tree::TerminalNode* settingsParser::IntervalhullContext::LEFTCURLYBRACKET() {
  return getToken(settingsParser::LEFTCURLYBRACKET, 0);
}

std::vector<settingsParser::IntervalContext *> settingsParser::IntervalhullContext::interval() {
  return getRuleContexts<settingsParser::IntervalContext>();
}

settingsParser::IntervalContext* settingsParser::IntervalhullContext::interval(size_t i) {
  return getRuleContext<settingsParser::IntervalContext>(i);
}

tree::TerminalNode* settingsParser::IntervalhullContext::RIGHTCURLYBRACKET() {
  return getToken(settingsParser::RIGHTCURLYBRACKET, 0);
}

std::vector<tree::TerminalNode *> settingsParser::IntervalhullContext::COMMA() {
  return getTokens(settingsParser::COMMA);
}

tree::TerminalNode* settingsParser::IntervalhullContext::COMMA(size_t i) {
  return getToken(settingsParser::COMMA, i);
}


size_t settingsParser::IntervalhullContext::getRuleIndex() const {
  return settingsParser::RuleIntervalhull;
}

void settingsParser::IntervalhullContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntervalhull(this);
}

void settingsParser::IntervalhullContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntervalhull(this);
}


antlrcpp::Any settingsParser::IntervalhullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitIntervalhull(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::IntervalhullContext* settingsParser::intervalhull() {
  IntervalhullContext *_localctx = _tracker.createInstance<IntervalhullContext>(_ctx, getState());
  enterRule(_localctx, 32, settingsParser::RuleIntervalhull);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(settingsParser::KEY_INTERVAL_HULL);
    setState(164);
    match(settingsParser::LEFTCURLYBRACKET);
    setState(165);
    interval();
    setState(172);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == settingsParser::LEFTSQUAREBRACKET

    || _la == settingsParser::COMMA) {
      setState(167);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == settingsParser::COMMA) {
        setState(166);
        match(settingsParser::COMMA);
      }
      setState(169);
      interval();
      setState(174);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(175);
    match(settingsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintsContext ------------------------------------------------------------------

settingsParser::ConstraintsContext::ConstraintsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<settingsParser::ConstraintContext *> settingsParser::ConstraintsContext::constraint() {
  return getRuleContexts<settingsParser::ConstraintContext>();
}

settingsParser::ConstraintContext* settingsParser::ConstraintsContext::constraint(size_t i) {
  return getRuleContext<settingsParser::ConstraintContext>(i);
}


size_t settingsParser::ConstraintsContext::getRuleIndex() const {
  return settingsParser::RuleConstraints;
}

void settingsParser::ConstraintsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraints(this);
}

void settingsParser::ConstraintsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraints(this);
}


antlrcpp::Any settingsParser::ConstraintsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitConstraints(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::ConstraintsContext* settingsParser::constraints() {
  ConstraintsContext *_localctx = _tracker.createInstance<ConstraintsContext>(_ctx, getState());
  enterRule(_localctx, 34, settingsParser::RuleConstraints);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(177);
      constraint();
      setState(180); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 29) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 29)) & ((1ULL << (settingsParser::KEY_SIN_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_ARCSIN_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_COS_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_ARCCOS_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_TAN_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_ARCTAN_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_COT_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_ARCCOT_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_LN_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_LOG_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_NATURAL_EXP_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_SINH_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_ARCSINH_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_COSH_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_ARCCOSH_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_TANH_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_ARCTANH_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_COTH_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_ARCCOTH_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_SQR_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_SQRT_FUNCTION - 29))
      | (1ULL << (settingsParser::KEY_POWER_FUNCTION - 29))
      | (1ULL << (settingsParser::SCINUM - 29))
      | (1ULL << (settingsParser::NUMBER - 29))
      | (1ULL << (settingsParser::VARIABLE - 29))
      | (1ULL << (settingsParser::LEFTROUNDBRACKET - 29))
      | (1ULL << (settingsParser::PLUS - 29))
      | (1ULL << (settingsParser::MINUS - 29)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintContext ------------------------------------------------------------------

settingsParser::ConstraintContext::ConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<settingsParser::ExpressionContext *> settingsParser::ConstraintContext::expression() {
  return getRuleContexts<settingsParser::ExpressionContext>();
}

settingsParser::ExpressionContext* settingsParser::ConstraintContext::expression(size_t i) {
  return getRuleContext<settingsParser::ExpressionContext>(i);
}

tree::TerminalNode* settingsParser::ConstraintContext::EQUAL() {
  return getToken(settingsParser::EQUAL, 0);
}

tree::TerminalNode* settingsParser::ConstraintContext::UNEQUAL() {
  return getToken(settingsParser::UNEQUAL, 0);
}

tree::TerminalNode* settingsParser::ConstraintContext::GEQ() {
  return getToken(settingsParser::GEQ, 0);
}

tree::TerminalNode* settingsParser::ConstraintContext::LEQ() {
  return getToken(settingsParser::LEQ, 0);
}

tree::TerminalNode* settingsParser::ConstraintContext::LSS() {
  return getToken(settingsParser::LSS, 0);
}

tree::TerminalNode* settingsParser::ConstraintContext::GTR() {
  return getToken(settingsParser::GTR, 0);
}


size_t settingsParser::ConstraintContext::getRuleIndex() const {
  return settingsParser::RuleConstraint;
}

void settingsParser::ConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraint(this);
}

void settingsParser::ConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraint(this);
}


antlrcpp::Any settingsParser::ConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitConstraint(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::ConstraintContext* settingsParser::constraint() {
  ConstraintContext *_localctx = _tracker.createInstance<ConstraintContext>(_ctx, getState());
  enterRule(_localctx, 36, settingsParser::RuleConstraint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    expression(0);
    setState(183);
    dynamic_cast<ConstraintContext *>(_localctx)->RELATION = _input->LT(1);
    _la = _input->LA(1);
    if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (settingsParser::EQUAL - 68))
      | (1ULL << (settingsParser::UNEQUAL - 68))
      | (1ULL << (settingsParser::GEQ - 68))
      | (1ULL << (settingsParser::LEQ - 68))
      | (1ULL << (settingsParser::LSS - 68))
      | (1ULL << (settingsParser::GTR - 68)))) != 0))) {
      dynamic_cast<ConstraintContext *>(_localctx)->RELATION = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(184);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SystemContext ------------------------------------------------------------------

settingsParser::SystemContext::SystemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<settingsParser::FormulaContext *> settingsParser::SystemContext::formula() {
  return getRuleContexts<settingsParser::FormulaContext>();
}

settingsParser::FormulaContext* settingsParser::SystemContext::formula(size_t i) {
  return getRuleContext<settingsParser::FormulaContext>(i);
}


size_t settingsParser::SystemContext::getRuleIndex() const {
  return settingsParser::RuleSystem;
}

void settingsParser::SystemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSystem(this);
}

void settingsParser::SystemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSystem(this);
}


antlrcpp::Any settingsParser::SystemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitSystem(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::SystemContext* settingsParser::system() {
  SystemContext *_localctx = _tracker.createInstance<SystemContext>(_ctx, getState());
  enterRule(_localctx, 38, settingsParser::RuleSystem);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(186);
      formula();
      setState(189); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == settingsParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

settingsParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::FormulaContext::VARIABLE() {
  return getToken(settingsParser::VARIABLE, 0);
}

tree::TerminalNode* settingsParser::FormulaContext::ASSIGN() {
  return getToken(settingsParser::ASSIGN, 0);
}

settingsParser::ExpressionContext* settingsParser::FormulaContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::FormulaContext::DERIVATIVE() {
  return getToken(settingsParser::DERIVATIVE, 0);
}

settingsParser::IntervalContext* settingsParser::FormulaContext::interval() {
  return getRuleContext<settingsParser::IntervalContext>(0);
}


size_t settingsParser::FormulaContext::getRuleIndex() const {
  return settingsParser::RuleFormula;
}

void settingsParser::FormulaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormula(this);
}

void settingsParser::FormulaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormula(this);
}


antlrcpp::Any settingsParser::FormulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitFormula(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::FormulaContext* settingsParser::formula() {
  FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, getState());
  enterRule(_localctx, 40, settingsParser::RuleFormula);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    match(settingsParser::VARIABLE);
    setState(193);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == settingsParser::DERIVATIVE) {
      setState(192);
      match(settingsParser::DERIVATIVE);
    }
    setState(195);
    match(settingsParser::ASSIGN);
    setState(196);
    expression(0);
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == settingsParser::LEFTSQUAREBRACKET) {
      setState(197);
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

settingsParser::IntervalContext::IntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* settingsParser::IntervalContext::LEFTSQUAREBRACKET() {
  return getToken(settingsParser::LEFTSQUAREBRACKET, 0);
}

tree::TerminalNode* settingsParser::IntervalContext::COMMA() {
  return getToken(settingsParser::COMMA, 0);
}

tree::TerminalNode* settingsParser::IntervalContext::RIGHTSQUAREBRACKET() {
  return getToken(settingsParser::RIGHTSQUAREBRACKET, 0);
}

std::vector<tree::TerminalNode *> settingsParser::IntervalContext::NUMBER() {
  return getTokens(settingsParser::NUMBER);
}

tree::TerminalNode* settingsParser::IntervalContext::NUMBER(size_t i) {
  return getToken(settingsParser::NUMBER, i);
}

std::vector<tree::TerminalNode *> settingsParser::IntervalContext::SCINUM() {
  return getTokens(settingsParser::SCINUM);
}

tree::TerminalNode* settingsParser::IntervalContext::SCINUM(size_t i) {
  return getToken(settingsParser::SCINUM, i);
}

std::vector<tree::TerminalNode *> settingsParser::IntervalContext::KEY_INFINITY() {
  return getTokens(settingsParser::KEY_INFINITY);
}

tree::TerminalNode* settingsParser::IntervalContext::KEY_INFINITY(size_t i) {
  return getToken(settingsParser::KEY_INFINITY, i);
}

std::vector<tree::TerminalNode *> settingsParser::IntervalContext::PLUS() {
  return getTokens(settingsParser::PLUS);
}

tree::TerminalNode* settingsParser::IntervalContext::PLUS(size_t i) {
  return getToken(settingsParser::PLUS, i);
}

std::vector<tree::TerminalNode *> settingsParser::IntervalContext::MINUS() {
  return getTokens(settingsParser::MINUS);
}

tree::TerminalNode* settingsParser::IntervalContext::MINUS(size_t i) {
  return getToken(settingsParser::MINUS, i);
}


size_t settingsParser::IntervalContext::getRuleIndex() const {
  return settingsParser::RuleInterval;
}

void settingsParser::IntervalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterval(this);
}

void settingsParser::IntervalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterval(this);
}


antlrcpp::Any settingsParser::IntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitInterval(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::IntervalContext* settingsParser::interval() {
  IntervalContext *_localctx = _tracker.createInstance<IntervalContext>(_ctx, getState());
  enterRule(_localctx, 42, settingsParser::RuleInterval);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(settingsParser::LEFTSQUAREBRACKET);
    setState(202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == settingsParser::PLUS

    || _la == settingsParser::MINUS) {
      setState(201);
      dynamic_cast<IntervalContext *>(_localctx)->_tset251 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == settingsParser::PLUS

      || _la == settingsParser::MINUS)) {
        dynamic_cast<IntervalContext *>(_localctx)->_tset251 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<IntervalContext *>(_localctx)->OP.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset251);
    }
    setState(204);
    dynamic_cast<IntervalContext *>(_localctx)->_tset264 = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << settingsParser::KEY_INFINITY)
      | (1ULL << settingsParser::SCINUM)
      | (1ULL << settingsParser::NUMBER))) != 0))) {
      dynamic_cast<IntervalContext *>(_localctx)->_tset264 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    dynamic_cast<IntervalContext *>(_localctx)->VAL.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset264);
    setState(205);
    match(settingsParser::COMMA);
    setState(207);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == settingsParser::PLUS

    || _la == settingsParser::MINUS) {
      setState(206);
      dynamic_cast<IntervalContext *>(_localctx)->_tset284 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == settingsParser::PLUS

      || _la == settingsParser::MINUS)) {
        dynamic_cast<IntervalContext *>(_localctx)->_tset284 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<IntervalContext *>(_localctx)->OP.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset284);
    }
    setState(209);
    dynamic_cast<IntervalContext *>(_localctx)->_tset297 = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << settingsParser::KEY_INFINITY)
      | (1ULL << settingsParser::SCINUM)
      | (1ULL << settingsParser::NUMBER))) != 0))) {
      dynamic_cast<IntervalContext *>(_localctx)->_tset297 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    dynamic_cast<IntervalContext *>(_localctx)->VAL.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset297);
    setState(210);
    match(settingsParser::RIGHTSQUAREBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

settingsParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t settingsParser::ExpressionContext::getRuleIndex() const {
  return settingsParser::RuleExpression;
}

void settingsParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TanExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::TanExpContext::KEY_TAN_FUNCTION() {
  return getToken(settingsParser::KEY_TAN_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::TanExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::TanExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::TanExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::TanExpContext::TanExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::TanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanExp(this);
}
void settingsParser::TanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanExp(this);
}

antlrcpp::Any settingsParser::TanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitTanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::SqrExpContext::KEY_SQR_FUNCTION() {
  return getToken(settingsParser::KEY_SQR_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::SqrExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::SqrExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::SqrExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::SqrExpContext::SqrExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::SqrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrExp(this);
}
void settingsParser::SqrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrExp(this);
}

antlrcpp::Any settingsParser::SqrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitSqrExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::ConstantContext::NUMBER() {
  return getToken(settingsParser::NUMBER, 0);
}

tree::TerminalNode* settingsParser::ConstantContext::SCINUM() {
  return getToken(settingsParser::SCINUM, 0);
}

settingsParser::ConstantContext::ConstantContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}
void settingsParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}

antlrcpp::Any settingsParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinhExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::AsinhExpContext::KEY_ARCSINH_FUNCTION() {
  return getToken(settingsParser::KEY_ARCSINH_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::AsinhExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::AsinhExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::AsinhExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::AsinhExpContext::AsinhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::AsinhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinhExp(this);
}
void settingsParser::AsinhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinhExp(this);
}

antlrcpp::Any settingsParser::AsinhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitAsinhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcosExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::AcosExpContext::KEY_ARCCOS_FUNCTION() {
  return getToken(settingsParser::KEY_ARCCOS_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::AcosExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::AcosExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::AcosExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::AcosExpContext::AcosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::AcosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcosExp(this);
}
void settingsParser::AcosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcosExp(this);
}

antlrcpp::Any settingsParser::AcosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitAcosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcothExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::AcothExpContext::KEY_ARCCOTH_FUNCTION() {
  return getToken(settingsParser::KEY_ARCCOTH_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::AcothExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::AcothExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::AcothExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::AcothExpContext::AcothExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::AcothExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcothExp(this);
}
void settingsParser::AcothExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcothExp(this);
}

antlrcpp::Any settingsParser::AcothExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitAcothExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcoshExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::AcoshExpContext::KEY_ARCCOSH_FUNCTION() {
  return getToken(settingsParser::KEY_ARCCOSH_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::AcoshExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::AcoshExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::AcoshExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::AcoshExpContext::AcoshExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::AcoshExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcoshExp(this);
}
void settingsParser::AcoshExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcoshExp(this);
}

antlrcpp::Any settingsParser::AcoshExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitAcoshExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CosExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::CosExpContext::KEY_COS_FUNCTION() {
  return getToken(settingsParser::KEY_COS_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::CosExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::CosExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::CosExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::CosExpContext::CosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::CosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCosExp(this);
}
void settingsParser::CosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCosExp(this);
}

antlrcpp::Any settingsParser::CosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitCosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::PowExpContext::KEY_POWER_FUNCTION() {
  return getToken(settingsParser::KEY_POWER_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::PowExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

std::vector<settingsParser::ExpressionContext *> settingsParser::PowExpContext::expression() {
  return getRuleContexts<settingsParser::ExpressionContext>();
}

settingsParser::ExpressionContext* settingsParser::PowExpContext::expression(size_t i) {
  return getRuleContext<settingsParser::ExpressionContext>(i);
}

tree::TerminalNode* settingsParser::PowExpContext::COMMA() {
  return getToken(settingsParser::COMMA, 0);
}

tree::TerminalNode* settingsParser::PowExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::PowExpContext::PowExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::PowExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowExp(this);
}
void settingsParser::PowExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowExp(this);
}

antlrcpp::Any settingsParser::PowExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitPowExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CothExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::CothExpContext::KEY_COTH_FUNCTION() {
  return getToken(settingsParser::KEY_COTH_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::CothExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::CothExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::CothExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::CothExpContext::CothExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::CothExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCothExp(this);
}
void settingsParser::CothExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCothExp(this);
}

antlrcpp::Any settingsParser::CothExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitCothExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PosExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::PosExpContext::PLUS() {
  return getToken(settingsParser::PLUS, 0);
}

settingsParser::ExpressionContext* settingsParser::PosExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

settingsParser::PosExpContext::PosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::PosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosExp(this);
}
void settingsParser::PosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosExp(this);
}

antlrcpp::Any settingsParser::PosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitPosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::NegExpContext::MINUS() {
  return getToken(settingsParser::MINUS, 0);
}

settingsParser::ExpressionContext* settingsParser::NegExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

settingsParser::NegExpContext::NegExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::NegExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegExp(this);
}
void settingsParser::NegExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegExp(this);
}

antlrcpp::Any settingsParser::NegExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitNegExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpBraContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::ExpBraContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::ExpBraContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::ExpBraContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::ExpBraContext::ExpBraContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::ExpBraContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpBra(this);
}
void settingsParser::ExpBraContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpBra(this);
}

antlrcpp::Any settingsParser::ExpBraContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitExpBra(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanhExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::AtanhExpContext::KEY_ARCTANH_FUNCTION() {
  return getToken(settingsParser::KEY_ARCTANH_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::AtanhExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::AtanhExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::AtanhExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::AtanhExpContext::AtanhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::AtanhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanhExp(this);
}
void settingsParser::AtanhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanhExp(this);
}

antlrcpp::Any settingsParser::AtanhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitAtanhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::SinExpContext::KEY_SIN_FUNCTION() {
  return getToken(settingsParser::KEY_SIN_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::SinExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::SinExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::SinExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::SinExpContext::SinExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::SinExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinExp(this);
}
void settingsParser::SinExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinExp(this);
}

antlrcpp::Any settingsParser::SinExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitSinExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LnExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::LnExpContext::KEY_LN_FUNCTION() {
  return getToken(settingsParser::KEY_LN_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::LnExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::LnExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::LnExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::LnExpContext::LnExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::LnExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLnExp(this);
}
void settingsParser::LnExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLnExp(this);
}

antlrcpp::Any settingsParser::LnExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitLnExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TanhExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::TanhExpContext::KEY_TANH_FUNCTION() {
  return getToken(settingsParser::KEY_TANH_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::TanhExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::TanhExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::TanhExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::TanhExpContext::TanhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::TanhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanhExp(this);
}
void settingsParser::TanhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanhExp(this);
}

antlrcpp::Any settingsParser::TanhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitTanhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrtExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::SqrtExpContext::KEY_SQRT_FUNCTION() {
  return getToken(settingsParser::KEY_SQRT_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::SqrtExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::SqrtExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::SqrtExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::SqrtExpContext::SqrtExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::SqrtExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrtExp(this);
}
void settingsParser::SqrtExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrtExp(this);
}

antlrcpp::Any settingsParser::SqrtExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitSqrtExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpMulDivContext ------------------------------------------------------------------

std::vector<settingsParser::ExpressionContext *> settingsParser::ExpMulDivContext::expression() {
  return getRuleContexts<settingsParser::ExpressionContext>();
}

settingsParser::ExpressionContext* settingsParser::ExpMulDivContext::expression(size_t i) {
  return getRuleContext<settingsParser::ExpressionContext>(i);
}

tree::TerminalNode* settingsParser::ExpMulDivContext::MULTIPLY() {
  return getToken(settingsParser::MULTIPLY, 0);
}

tree::TerminalNode* settingsParser::ExpMulDivContext::DIVIDE() {
  return getToken(settingsParser::DIVIDE, 0);
}

settingsParser::ExpMulDivContext::ExpMulDivContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::ExpMulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpMulDiv(this);
}
void settingsParser::ExpMulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpMulDiv(this);
}

antlrcpp::Any settingsParser::ExpMulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitExpMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::AtanExpContext::KEY_ARCTAN_FUNCTION() {
  return getToken(settingsParser::KEY_ARCTAN_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::AtanExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::AtanExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::AtanExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::AtanExpContext::AtanExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::AtanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanExp(this);
}
void settingsParser::AtanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanExp(this);
}

antlrcpp::Any settingsParser::AtanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitAtanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcotExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::AcotExpContext::KEY_ARCCOT_FUNCTION() {
  return getToken(settingsParser::KEY_ARCCOT_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::AcotExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::AcotExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::AcotExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::AcotExpContext::AcotExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::AcotExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcotExp(this);
}
void settingsParser::AcotExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcotExp(this);
}

antlrcpp::Any settingsParser::AcotExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitAcotExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpExpContext ------------------------------------------------------------------

std::vector<settingsParser::ExpressionContext *> settingsParser::ExpExpContext::expression() {
  return getRuleContexts<settingsParser::ExpressionContext>();
}

settingsParser::ExpressionContext* settingsParser::ExpExpContext::expression(size_t i) {
  return getRuleContext<settingsParser::ExpressionContext>(i);
}

tree::TerminalNode* settingsParser::ExpExpContext::EXPONENT() {
  return getToken(settingsParser::EXPONENT, 0);
}

settingsParser::ExpExpContext::ExpExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::ExpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpExp(this);
}
void settingsParser::ExpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpExp(this);
}

antlrcpp::Any settingsParser::ExpExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitExpExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CoshExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::CoshExpContext::KEY_COSH_FUNCTION() {
  return getToken(settingsParser::KEY_COSH_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::CoshExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::CoshExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::CoshExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::CoshExpContext::CoshExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::CoshExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoshExp(this);
}
void settingsParser::CoshExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoshExp(this);
}

antlrcpp::Any settingsParser::CoshExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitCoshExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::LogExpContext::KEY_LOG_FUNCTION() {
  return getToken(settingsParser::KEY_LOG_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::LogExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::LogExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::LogExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::LogExpContext::LogExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::LogExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogExp(this);
}
void settingsParser::LogExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogExp(this);
}

antlrcpp::Any settingsParser::LogExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitLogExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::AsinExpContext::KEY_ARCSIN_FUNCTION() {
  return getToken(settingsParser::KEY_ARCSIN_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::AsinExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::AsinExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::AsinExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::AsinExpContext::AsinExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::AsinExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinExp(this);
}
void settingsParser::AsinExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinExp(this);
}

antlrcpp::Any settingsParser::AsinExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitAsinExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CotExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::CotExpContext::KEY_COT_FUNCTION() {
  return getToken(settingsParser::KEY_COT_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::CotExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::CotExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::CotExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::CotExpContext::CotExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::CotExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCotExp(this);
}
void settingsParser::CotExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCotExp(this);
}

antlrcpp::Any settingsParser::CotExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitCotExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::VariableContext::VARIABLE() {
  return getToken(settingsParser::VARIABLE, 0);
}

settingsParser::VariableContext::VariableContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}
void settingsParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

antlrcpp::Any settingsParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinhExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::SinhExpContext::KEY_SINH_FUNCTION() {
  return getToken(settingsParser::KEY_SINH_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::SinhExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::SinhExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::SinhExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::SinhExpContext::SinhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::SinhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinhExp(this);
}
void settingsParser::SinhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinhExp(this);
}

antlrcpp::Any settingsParser::SinhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitSinhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NexpExpContext ------------------------------------------------------------------

tree::TerminalNode* settingsParser::NexpExpContext::KEY_NATURAL_EXP_FUNCTION() {
  return getToken(settingsParser::KEY_NATURAL_EXP_FUNCTION, 0);
}

tree::TerminalNode* settingsParser::NexpExpContext::LEFTROUNDBRACKET() {
  return getToken(settingsParser::LEFTROUNDBRACKET, 0);
}

settingsParser::ExpressionContext* settingsParser::NexpExpContext::expression() {
  return getRuleContext<settingsParser::ExpressionContext>(0);
}

tree::TerminalNode* settingsParser::NexpExpContext::RIGHTROUNDBRACKET() {
  return getToken(settingsParser::RIGHTROUNDBRACKET, 0);
}

settingsParser::NexpExpContext::NexpExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::NexpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNexpExp(this);
}
void settingsParser::NexpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNexpExp(this);
}

antlrcpp::Any settingsParser::NexpExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitNexpExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpAddSubContext ------------------------------------------------------------------

std::vector<settingsParser::ExpressionContext *> settingsParser::ExpAddSubContext::expression() {
  return getRuleContexts<settingsParser::ExpressionContext>();
}

settingsParser::ExpressionContext* settingsParser::ExpAddSubContext::expression(size_t i) {
  return getRuleContext<settingsParser::ExpressionContext>(i);
}

tree::TerminalNode* settingsParser::ExpAddSubContext::PLUS() {
  return getToken(settingsParser::PLUS, 0);
}

tree::TerminalNode* settingsParser::ExpAddSubContext::MINUS() {
  return getToken(settingsParser::MINUS, 0);
}

settingsParser::ExpAddSubContext::ExpAddSubContext(ExpressionContext *ctx) { copyFrom(ctx); }

void settingsParser::ExpAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpAddSub(this);
}
void settingsParser::ExpAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<settingsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpAddSub(this);
}

antlrcpp::Any settingsParser::ExpAddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<settingsVisitor*>(visitor))
    return parserVisitor->visitExpAddSub(this);
  else
    return visitor->visitChildren(this);
}

settingsParser::ExpressionContext* settingsParser::expression() {
   return expression(0);
}

settingsParser::ExpressionContext* settingsParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  settingsParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  settingsParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, settingsParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(335);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case settingsParser::PLUS: {
        _localctx = _tracker.createInstance<PosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(213);
        match(settingsParser::PLUS);
        setState(214);
        expression(29);
        break;
      }

      case settingsParser::MINUS: {
        _localctx = _tracker.createInstance<NegExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(215);
        match(settingsParser::MINUS);
        setState(216);
        expression(28);
        break;
      }

      case settingsParser::LEFTROUNDBRACKET: {
        _localctx = _tracker.createInstance<ExpBraContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(217);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(218);
        expression(0);
        setState(219);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_SIN_FUNCTION: {
        _localctx = _tracker.createInstance<SinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(221);
        match(settingsParser::KEY_SIN_FUNCTION);
        setState(222);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(223);
        expression(0);
        setState(224);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_ARCSIN_FUNCTION: {
        _localctx = _tracker.createInstance<AsinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(226);
        match(settingsParser::KEY_ARCSIN_FUNCTION);
        setState(227);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(228);
        expression(0);
        setState(229);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_COS_FUNCTION: {
        _localctx = _tracker.createInstance<CosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(231);
        match(settingsParser::KEY_COS_FUNCTION);
        setState(232);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(233);
        expression(0);
        setState(234);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_ARCCOS_FUNCTION: {
        _localctx = _tracker.createInstance<AcosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(236);
        match(settingsParser::KEY_ARCCOS_FUNCTION);
        setState(237);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(238);
        expression(0);
        setState(239);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_TAN_FUNCTION: {
        _localctx = _tracker.createInstance<TanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(241);
        match(settingsParser::KEY_TAN_FUNCTION);
        setState(242);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(243);
        expression(0);
        setState(244);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_ARCTAN_FUNCTION: {
        _localctx = _tracker.createInstance<AtanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(246);
        match(settingsParser::KEY_ARCTAN_FUNCTION);
        setState(247);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(248);
        expression(0);
        setState(249);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_COT_FUNCTION: {
        _localctx = _tracker.createInstance<CotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(251);
        match(settingsParser::KEY_COT_FUNCTION);
        setState(252);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(253);
        expression(0);
        setState(254);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_ARCCOT_FUNCTION: {
        _localctx = _tracker.createInstance<AcotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(256);
        match(settingsParser::KEY_ARCCOT_FUNCTION);
        setState(257);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(258);
        expression(0);
        setState(259);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_SINH_FUNCTION: {
        _localctx = _tracker.createInstance<SinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(261);
        match(settingsParser::KEY_SINH_FUNCTION);
        setState(262);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(263);
        expression(0);
        setState(264);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_ARCSINH_FUNCTION: {
        _localctx = _tracker.createInstance<AsinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(266);
        match(settingsParser::KEY_ARCSINH_FUNCTION);
        setState(267);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(268);
        expression(0);
        setState(269);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_COSH_FUNCTION: {
        _localctx = _tracker.createInstance<CoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(271);
        match(settingsParser::KEY_COSH_FUNCTION);
        setState(272);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(273);
        expression(0);
        setState(274);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_ARCCOSH_FUNCTION: {
        _localctx = _tracker.createInstance<AcoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(276);
        match(settingsParser::KEY_ARCCOSH_FUNCTION);
        setState(277);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(278);
        expression(0);
        setState(279);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_TANH_FUNCTION: {
        _localctx = _tracker.createInstance<TanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(281);
        match(settingsParser::KEY_TANH_FUNCTION);
        setState(282);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(283);
        expression(0);
        setState(284);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_ARCTANH_FUNCTION: {
        _localctx = _tracker.createInstance<AtanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(286);
        match(settingsParser::KEY_ARCTANH_FUNCTION);
        setState(287);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(288);
        expression(0);
        setState(289);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_COTH_FUNCTION: {
        _localctx = _tracker.createInstance<CothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(291);
        match(settingsParser::KEY_COTH_FUNCTION);
        setState(292);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(293);
        expression(0);
        setState(294);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_ARCCOTH_FUNCTION: {
        _localctx = _tracker.createInstance<AcothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(296);
        match(settingsParser::KEY_ARCCOTH_FUNCTION);
        setState(297);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(298);
        expression(0);
        setState(299);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_LN_FUNCTION: {
        _localctx = _tracker.createInstance<LnExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(301);
        match(settingsParser::KEY_LN_FUNCTION);
        setState(302);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(303);
        expression(0);
        setState(304);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_LOG_FUNCTION: {
        _localctx = _tracker.createInstance<LogExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(306);
        match(settingsParser::KEY_LOG_FUNCTION);
        setState(307);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(308);
        expression(0);
        setState(309);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_NATURAL_EXP_FUNCTION: {
        _localctx = _tracker.createInstance<NexpExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(311);
        match(settingsParser::KEY_NATURAL_EXP_FUNCTION);
        setState(312);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(313);
        expression(0);
        setState(314);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_SQR_FUNCTION: {
        _localctx = _tracker.createInstance<SqrExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(316);
        match(settingsParser::KEY_SQR_FUNCTION);
        setState(317);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(318);
        expression(0);
        setState(319);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_SQRT_FUNCTION: {
        _localctx = _tracker.createInstance<SqrtExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(321);
        match(settingsParser::KEY_SQRT_FUNCTION);
        setState(322);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(323);
        expression(0);
        setState(324);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::KEY_POWER_FUNCTION: {
        _localctx = _tracker.createInstance<PowExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(326);
        match(settingsParser::KEY_POWER_FUNCTION);
        setState(327);
        match(settingsParser::LEFTROUNDBRACKET);
        setState(328);
        expression(0);
        setState(329);
        match(settingsParser::COMMA);
        setState(330);
        expression(0);
        setState(331);
        match(settingsParser::RIGHTROUNDBRACKET);
        break;
      }

      case settingsParser::SCINUM:
      case settingsParser::NUMBER: {
        _localctx = _tracker.createInstance<ConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(333);
        _la = _input->LA(1);
        if (!(_la == settingsParser::SCINUM

        || _la == settingsParser::NUMBER)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case settingsParser::VARIABLE: {
        _localctx = _tracker.createInstance<VariableContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(334);
        match(settingsParser::VARIABLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(348);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(346);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpExpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(337);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(338);
          match(settingsParser::EXPONENT);
          setState(339);
          expression(31);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExpMulDivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(340);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(341);
          dynamic_cast<ExpMulDivContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == settingsParser::MULTIPLY

          || _la == settingsParser::DIVIDE)) {
            dynamic_cast<ExpMulDivContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(342);
          expression(28);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExpAddSubContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(343);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(344);
          dynamic_cast<ExpAddSubContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == settingsParser::PLUS

          || _la == settingsParser::MINUS)) {
            dynamic_cast<ExpAddSubContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(345);
          expression(27);
          break;
        }

        } 
      }
      setState(350);
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

bool settingsParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 22: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool settingsParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
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
std::vector<dfa::DFA> settingsParser::_decisionToDFA;
atn::PredictionContextCache settingsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN settingsParser::_atn;
std::vector<uint16_t> settingsParser::_serializedATN;

std::vector<std::string> settingsParser::_ruleNames = {
  "timeHorizonsetting", "stepSetting", "geometrysetting", "plotsetting", 
  "printsetting", "analysissetting", "maxjumpsetting", "startmodelidsetting", 
  "initialconditionsetting", "setting", "condition", "polytope", "hpolytope", 
  "vpolytope", "matrix", "vector", "intervalhull", "constraints", "constraint", 
  "system", "formula", "interval", "expression"
};

std::vector<std::string> settingsParser::_literalNames = {
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

std::vector<std::string> settingsParser::_symbolicNames = {
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

dfa::Vocabulary settingsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> settingsParser::_tokenNames;

settingsParser::Initializer::Initializer() {
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
    0x3, 0x56, 0x162, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0x60, 
    0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x61, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x6a, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x71, 0xa, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0x7b, 0xa, 0xf, 0x3, 0xf, 0x6, 0xf, 0x7e, 0xa, 0xf, 0xd, 0xf, 0xe, 
    0xf, 0x7f, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0x89, 0xa, 0x10, 0x3, 0x10, 0x7, 0x10, 0x8c, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x8f, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x95, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x99, 0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 0x9c, 0xa, 0x11, 0x3, 
    0x11, 0x7, 0x11, 0x9f, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xa2, 0xb, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xaa, 0xa, 0x12, 0x3, 0x12, 0x7, 0x12, 0xad, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0xb0, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x6, 0x13, 
    0xb5, 0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 0xb6, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x15, 0x6, 0x15, 0xbe, 0xa, 0x15, 0xd, 0x15, 0xe, 
    0x15, 0xbf, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xc4, 0xa, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xc9, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0xcd, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 
    0xd2, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x152, 0xa, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x15d, 0xa, 0x18, 0xc, 0x18, 
    0xe, 0x18, 0x160, 0xb, 0x18, 0x3, 0x18, 0x2, 0x3, 0x2e, 0x19, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x2, 0xb, 0x3, 0x2, 
    0x19, 0x1a, 0x3, 0x2, 0x37, 0x38, 0x3, 0x2, 0x9, 0xa, 0x3, 0x2, 0x1d, 
    0x1e, 0x3, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x46, 0x4b, 0x3, 0x2, 0x3b, 0x3d, 
    0x3, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x51, 0x52, 0x2, 0x182, 0x2, 0x30, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x34, 0x3, 0x2, 0x2, 0x2, 0x6, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x40, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0xe, 0x48, 0x3, 0x2, 0x2, 0x2, 0x10, 0x4c, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x50, 0x3, 0x2, 0x2, 0x2, 0x14, 0x54, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x65, 0x3, 0x2, 0x2, 0x2, 0x18, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x72, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x83, 0x3, 0x2, 0x2, 0x2, 0x20, 0x92, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x24, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0xb8, 0x3, 0x2, 0x2, 0x2, 0x28, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0xca, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x151, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0xb, 0x2, 0x2, 0x31, 0x32, 0x7, 0x4c, 
    0x2, 0x2, 0x32, 0x33, 0x5, 0x2c, 0x17, 0x2, 0x33, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x35, 0x7, 0xc, 0x2, 0x2, 0x35, 0x36, 0x7, 0x4c, 0x2, 0x2, 
    0x36, 0x37, 0x7, 0x3d, 0x2, 0x2, 0x37, 0x5, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x39, 0x7, 0xd, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x4c, 0x2, 0x2, 0x3a, 0x3b, 
    0x9, 0x2, 0x2, 0x2, 0x3b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 
    0xe, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x4c, 0x2, 0x2, 0x3e, 0x3f, 0x9, 0x3, 
    0x2, 0x2, 0x3f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0xf, 0x2, 
    0x2, 0x41, 0x42, 0x7, 0x4c, 0x2, 0x2, 0x42, 0x43, 0x9, 0x3, 0x2, 0x2, 
    0x43, 0xb, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x8, 0x2, 0x2, 0x45, 
    0x46, 0x7, 0x4c, 0x2, 0x2, 0x46, 0x47, 0x9, 0x4, 0x2, 0x2, 0x47, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x7, 0x10, 0x2, 0x2, 0x49, 0x4a, 0x7, 
    0x4c, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x3d, 0x2, 0x2, 0x4b, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4d, 0x7, 0x11, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x4c, 0x2, 
    0x2, 0x4e, 0x4f, 0x7, 0x3e, 0x2, 0x2, 0x4f, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x51, 0x7, 0x12, 0x2, 0x2, 0x51, 0x52, 0x7, 0x4c, 0x2, 0x2, 0x52, 
    0x53, 0x5, 0x16, 0xc, 0x2, 0x53, 0x13, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 
    0x7, 0x7, 0x2, 0x2, 0x55, 0x5f, 0x7, 0x3f, 0x2, 0x2, 0x56, 0x60, 0x5, 
    0x2, 0x2, 0x2, 0x57, 0x60, 0x5, 0x4, 0x3, 0x2, 0x58, 0x60, 0x5, 0x8, 
    0x5, 0x2, 0x59, 0x60, 0x5, 0xa, 0x6, 0x2, 0x5a, 0x60, 0x5, 0xc, 0x7, 
    0x2, 0x5b, 0x60, 0x5, 0x6, 0x4, 0x2, 0x5c, 0x60, 0x5, 0xe, 0x8, 0x2, 
    0x5d, 0x60, 0x5, 0x10, 0x9, 0x2, 0x5e, 0x60, 0x5, 0x12, 0xa, 0x2, 0x5f, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5a, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 
    0x64, 0x7, 0x40, 0x2, 0x2, 0x64, 0x15, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 
    0x7, 0x1b, 0x2, 0x2, 0x66, 0x69, 0x7, 0x3f, 0x2, 0x2, 0x67, 0x6a, 0x5, 
    0x22, 0x12, 0x2, 0x68, 0x6a, 0x5, 0x18, 0xd, 0x2, 0x69, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x69, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x6b, 0x6c, 0x7, 0x40, 0x2, 0x2, 0x6c, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x6d, 0x70, 0x7, 0x1a, 0x2, 0x2, 0x6e, 0x71, 0x5, 0x1a, 0xe, 0x2, 0x6f, 
    0x71, 0x5, 0x1c, 0xf, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x19, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 
    0x3f, 0x2, 0x2, 0x73, 0x74, 0x5, 0x1e, 0x10, 0x2, 0x74, 0x75, 0x5, 0x20, 
    0x11, 0x2, 0x75, 0x76, 0x7, 0x40, 0x2, 0x2, 0x76, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x77, 0x78, 0x7, 0x3f, 0x2, 0x2, 0x78, 0x7d, 0x5, 0x20, 0x11, 0x2, 
    0x79, 0x7b, 0x7, 0x45, 0x2, 0x2, 0x7a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7e, 
    0x5, 0x20, 0x11, 0x2, 0x7d, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0x40, 0x2, 
    0x2, 0x82, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x1c, 0x2, 0x2, 
    0x84, 0x85, 0x7, 0x3f, 0x2, 0x2, 0x85, 0x86, 0x9, 0x5, 0x2, 0x2, 0x86, 
    0x8d, 0x5, 0x20, 0x11, 0x2, 0x87, 0x89, 0x7, 0x45, 0x2, 0x2, 0x88, 0x87, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x8c, 0x5, 0x20, 0x11, 0x2, 0x8b, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0x40, 0x2, 0x2, 0x91, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x92, 0x94, 0x7, 0x41, 0x2, 0x2, 0x93, 0x95, 
    0x9, 0x6, 0x2, 0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0xa0, 0x7, 0x3d, 
    0x2, 0x2, 0x97, 0x99, 0x7, 0x45, 0x2, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9c, 0x9, 0x6, 0x2, 0x2, 0x9b, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 
    0x7, 0x3d, 0x2, 0x2, 0x9e, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0xa4, 0x7, 0x42, 0x2, 0x2, 0xa4, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa6, 0x7, 0x19, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x3f, 0x2, 0x2, 0xa7, 
    0xae, 0x5, 0x2c, 0x17, 0x2, 0xa8, 0xaa, 0x7, 0x45, 0x2, 0x2, 0xa9, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 
    0x2, 0x2, 0x2, 0xab, 0xad, 0x5, 0x2c, 0x17, 0x2, 0xac, 0xa9, 0x3, 0x2, 
    0x2, 0x2, 0xad, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x40, 0x2, 0x2, 0xb2, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x5, 0x26, 0x14, 0x2, 0xb4, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xb9, 0x5, 0x2e, 0x18, 0x2, 0xb9, 0xba, 0x9, 0x7, 0x2, 
    0x2, 0xba, 0xbb, 0x5, 0x2e, 0x18, 0x2, 0xbb, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xbe, 0x5, 0x2a, 0x16, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 
    0x3, 0x2, 0x2, 0x2, 0xc0, 0x29, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc3, 0x7, 
    0x3e, 0x2, 0x2, 0xc2, 0xc4, 0x7, 0x54, 0x2, 0x2, 0xc3, 0xc2, 0x3, 0x2, 
    0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xc6, 0x7, 0x4e, 0x2, 0x2, 0xc6, 0xc8, 0x5, 0x2e, 0x18, 0x2, 
    0xc7, 0xc9, 0x5, 0x2c, 0x17, 0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcc, 
    0x7, 0x43, 0x2, 0x2, 0xcb, 0xcd, 0x9, 0x6, 0x2, 0x2, 0xcc, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xcf, 0x9, 0x8, 0x2, 0x2, 0xcf, 0xd1, 0x7, 0x45, 0x2, 
    0x2, 0xd0, 0xd2, 0x9, 0x6, 0x2, 0x2, 0xd1, 0xd0, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xd4, 0x9, 0x8, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x44, 0x2, 0x2, 0xd5, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x8, 0x18, 0x1, 0x2, 0xd7, 0xd8, 0x7, 
    0x4f, 0x2, 0x2, 0xd8, 0x152, 0x5, 0x2e, 0x18, 0x1f, 0xd9, 0xda, 0x7, 
    0x50, 0x2, 0x2, 0xda, 0x152, 0x5, 0x2e, 0x18, 0x1e, 0xdb, 0xdc, 0x7, 
    0x41, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x2e, 0x18, 0x2, 0xdd, 0xde, 0x7, 0x42, 
    0x2, 0x2, 0xde, 0x152, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x1f, 0x2, 
    0x2, 0xe0, 0xe1, 0x7, 0x41, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x2e, 0x18, 0x2, 
    0xe2, 0xe3, 0x7, 0x42, 0x2, 0x2, 0xe3, 0x152, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0xe5, 0x7, 0x20, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x41, 0x2, 0x2, 0xe6, 0xe7, 
    0x5, 0x2e, 0x18, 0x2, 0xe7, 0xe8, 0x7, 0x42, 0x2, 0x2, 0xe8, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x21, 0x2, 0x2, 0xea, 0xeb, 0x7, 
    0x41, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x2e, 0x18, 0x2, 0xec, 0xed, 0x7, 0x42, 
    0x2, 0x2, 0xed, 0x152, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x7, 0x22, 0x2, 
    0x2, 0xef, 0xf0, 0x7, 0x41, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x2e, 0x18, 0x2, 
    0xf1, 0xf2, 0x7, 0x42, 0x2, 0x2, 0xf2, 0x152, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf4, 0x7, 0x23, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x41, 0x2, 0x2, 0xf5, 0xf6, 
    0x5, 0x2e, 0x18, 0x2, 0xf6, 0xf7, 0x7, 0x42, 0x2, 0x2, 0xf7, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x24, 0x2, 0x2, 0xf9, 0xfa, 0x7, 
    0x41, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x2e, 0x18, 0x2, 0xfb, 0xfc, 0x7, 0x42, 
    0x2, 0x2, 0xfc, 0x152, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x25, 0x2, 
    0x2, 0xfe, 0xff, 0x7, 0x41, 0x2, 0x2, 0xff, 0x100, 0x5, 0x2e, 0x18, 
    0x2, 0x100, 0x101, 0x7, 0x42, 0x2, 0x2, 0x101, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0x103, 0x7, 0x26, 0x2, 0x2, 0x103, 0x104, 0x7, 0x41, 0x2, 
    0x2, 0x104, 0x105, 0x5, 0x2e, 0x18, 0x2, 0x105, 0x106, 0x7, 0x42, 0x2, 
    0x2, 0x106, 0x152, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0x2a, 0x2, 
    0x2, 0x108, 0x109, 0x7, 0x41, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x2e, 0x18, 
    0x2, 0x10a, 0x10b, 0x7, 0x42, 0x2, 0x2, 0x10b, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x10c, 0x10d, 0x7, 0x2b, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x41, 0x2, 
    0x2, 0x10e, 0x10f, 0x5, 0x2e, 0x18, 0x2, 0x10f, 0x110, 0x7, 0x42, 0x2, 
    0x2, 0x110, 0x152, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x2c, 0x2, 
    0x2, 0x112, 0x113, 0x7, 0x41, 0x2, 0x2, 0x113, 0x114, 0x5, 0x2e, 0x18, 
    0x2, 0x114, 0x115, 0x7, 0x42, 0x2, 0x2, 0x115, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x117, 0x7, 0x2d, 0x2, 0x2, 0x117, 0x118, 0x7, 0x41, 0x2, 
    0x2, 0x118, 0x119, 0x5, 0x2e, 0x18, 0x2, 0x119, 0x11a, 0x7, 0x42, 0x2, 
    0x2, 0x11a, 0x152, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x2e, 0x2, 
    0x2, 0x11c, 0x11d, 0x7, 0x41, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0x2e, 0x18, 
    0x2, 0x11e, 0x11f, 0x7, 0x42, 0x2, 0x2, 0x11f, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x120, 0x121, 0x7, 0x2f, 0x2, 0x2, 0x121, 0x122, 0x7, 0x41, 0x2, 
    0x2, 0x122, 0x123, 0x5, 0x2e, 0x18, 0x2, 0x123, 0x124, 0x7, 0x42, 0x2, 
    0x2, 0x124, 0x152, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x30, 0x2, 
    0x2, 0x126, 0x127, 0x7, 0x41, 0x2, 0x2, 0x127, 0x128, 0x5, 0x2e, 0x18, 
    0x2, 0x128, 0x129, 0x7, 0x42, 0x2, 0x2, 0x129, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x12a, 0x12b, 0x7, 0x31, 0x2, 0x2, 0x12b, 0x12c, 0x7, 0x41, 0x2, 
    0x2, 0x12c, 0x12d, 0x5, 0x2e, 0x18, 0x2, 0x12d, 0x12e, 0x7, 0x42, 0x2, 
    0x2, 0x12e, 0x152, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x7, 0x27, 0x2, 
    0x2, 0x130, 0x131, 0x7, 0x41, 0x2, 0x2, 0x131, 0x132, 0x5, 0x2e, 0x18, 
    0x2, 0x132, 0x133, 0x7, 0x42, 0x2, 0x2, 0x133, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0x135, 0x7, 0x28, 0x2, 0x2, 0x135, 0x136, 0x7, 0x41, 0x2, 
    0x2, 0x136, 0x137, 0x5, 0x2e, 0x18, 0x2, 0x137, 0x138, 0x7, 0x42, 0x2, 
    0x2, 0x138, 0x152, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x7, 0x29, 0x2, 
    0x2, 0x13a, 0x13b, 0x7, 0x41, 0x2, 0x2, 0x13b, 0x13c, 0x5, 0x2e, 0x18, 
    0x2, 0x13c, 0x13d, 0x7, 0x42, 0x2, 0x2, 0x13d, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x13f, 0x7, 0x32, 0x2, 0x2, 0x13f, 0x140, 0x7, 0x41, 0x2, 
    0x2, 0x140, 0x141, 0x5, 0x2e, 0x18, 0x2, 0x141, 0x142, 0x7, 0x42, 0x2, 
    0x2, 0x142, 0x152, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x7, 0x33, 0x2, 
    0x2, 0x144, 0x145, 0x7, 0x41, 0x2, 0x2, 0x145, 0x146, 0x5, 0x2e, 0x18, 
    0x2, 0x146, 0x147, 0x7, 0x42, 0x2, 0x2, 0x147, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x148, 0x149, 0x7, 0x35, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x41, 0x2, 
    0x2, 0x14a, 0x14b, 0x5, 0x2e, 0x18, 0x2, 0x14b, 0x14c, 0x7, 0x45, 0x2, 
    0x2, 0x14c, 0x14d, 0x5, 0x2e, 0x18, 0x2, 0x14d, 0x14e, 0x7, 0x42, 0x2, 
    0x2, 0x14e, 0x152, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x152, 0x9, 0x9, 0x2, 
    0x2, 0x150, 0x152, 0x7, 0x3e, 0x2, 0x2, 0x151, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0x151, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x151, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0x151, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x151, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x151, 
    0xe9, 0x3, 0x2, 0x2, 0x2, 0x151, 0xee, 0x3, 0x2, 0x2, 0x2, 0x151, 0xf3, 
    0x3, 0x2, 0x2, 0x2, 0x151, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x151, 0xfd, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x102, 0x3, 0x2, 0x2, 0x2, 0x151, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x151, 0x111, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x116, 0x3, 0x2, 0x2, 0x2, 0x151, 0x11b, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x120, 0x3, 0x2, 0x2, 0x2, 0x151, 0x125, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x151, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x134, 0x3, 0x2, 0x2, 0x2, 0x151, 0x139, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x151, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x148, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x15e, 0x3, 
    0x2, 0x2, 0x2, 0x153, 0x154, 0xc, 0x20, 0x2, 0x2, 0x154, 0x155, 0x7, 
    0x53, 0x2, 0x2, 0x155, 0x15d, 0x5, 0x2e, 0x18, 0x21, 0x156, 0x157, 0xc, 
    0x1d, 0x2, 0x2, 0x157, 0x158, 0x9, 0xa, 0x2, 0x2, 0x158, 0x15d, 0x5, 
    0x2e, 0x18, 0x1e, 0x159, 0x15a, 0xc, 0x1c, 0x2, 0x2, 0x15a, 0x15b, 0x9, 
    0x6, 0x2, 0x2, 0x15b, 0x15d, 0x5, 0x2e, 0x18, 0x1d, 0x15c, 0x153, 0x3, 
    0x2, 0x2, 0x2, 0x15c, 0x156, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x15d, 0x160, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 
    0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x19, 0x5f, 0x61, 0x69, 
    0x70, 0x7a, 0x7f, 0x88, 0x8d, 0x94, 0x98, 0x9b, 0xa0, 0xa9, 0xae, 0xb6, 
    0xbf, 0xc3, 0xc8, 0xcc, 0xd1, 0x151, 0x15c, 0x15e, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

settingsParser::Initializer settingsParser::_init;
