
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/token.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  token : public antlr4::Lexer {
public:
  enum {
    KEY_NAME = 1, KEY_SWITCH_ON = 2, KEY_SWITCH_OFF = 3, KEY_BOOL_TRUE = 4, 
    KEY_BOOL_FALSE = 5, KEY_INFINITY = 6, SCINUM = 7, NUMBER = 8, VARIABLE = 9, 
    LEFTCURLYBRACKET = 10, RIGHTCURLYBRACKET = 11, LEFTROUNDBRACKET = 12, 
    RIGHTROUNDBRACKET = 13, LEFTSQUAREBRACKET = 14, RIGHTSQUAREBRACKET = 15, 
    COMMA = 16, EQUAL = 17, UNEQUAL = 18, GEQ = 19, LEQ = 20, LSS = 21, 
    GTR = 22, DEFINE = 23, FROMTO = 24, ASSIGN = 25, PLUS = 26, MINUS = 27, 
    MULTIPLY = 28, DIVIDE = 29, EXPONENT = 30, DERIVATIVE = 31, COMMENT = 32, 
    WS = 33
  };

  token(antlr4::CharStream *input);
  ~token();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

