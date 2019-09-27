/**
 @brief tokens' defination
 */
lexer grammar token;

//  @brief identifier
KEY_NAME: 'NAME';
KEY_SWITCH_ON: 'ON';
KEY_SWITCH_OFF: 'OFF';
KEY_BOOL_TRUE: 'TRUE';
KEY_BOOL_FALSE: 'FALSE';
KEY_INFINITY: 'INF' | 'inf' | 'Inf';

SCINUM: NUMBER 'e' (PLUS | MINUS)? NUMBER;

//  @brief numbers and variables
NUMBER: DIGIT+ ('.' DIGIT+)?;
//  @brief using only decimals

VARIABLE: (UPPERCASE | LOWERCASE)
	(
		UPPERCASE
		| LOWERCASE
		| DIGIT
		| SPECIALCHARACTER
	)*;

//  @brief brackets
LEFTCURLYBRACKET: '{';
RIGHTCURLYBRACKET: '}';
LEFTROUNDBRACKET: '(';
RIGHTROUNDBRACKET: ')';
LEFTSQUAREBRACKET: '[';
RIGHTSQUAREBRACKET: ']';
COMMA: ',';

//  @brief operators
EQUAL: '==';
UNEQUAL: '!=';
GEQ: '>=';
LEQ: '<=';
LSS: '<';
GTR: '>';
DEFINE: ':=';
FROMTO: '->' | '<-'; //two directions
ASSIGN: '=';
PLUS: '+';
MINUS: '-';
MULTIPLY: '*';
DIVIDE: '/';
EXPONENT: '^';
DERIVATIVE: '\'';

//  @brief comment tag
COMMENT: '#' ~[\r\n]* -> channel(HIDDEN);
//follow the symbol # and before the new line symbols, everyting should be regards as nothing

//  @brief basic definations
fragment UPPERCASE: [A-Z];
fragment LOWERCASE: [a-z];
fragment DIGIT: [0-9];
fragment SPECIALCHARACTER: [_\\];
//  @brief or use '_'|'\' instead

//  @brief another line or something
WS: [ \t\r\n]+ -> channel(HIDDEN);