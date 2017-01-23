%{
/* Declarations section */

#include "hw5.hpp"
#include "hw5.tab.hpp"

%}

%option yylineno
%option noyywrap

%%

"(" {
	return LP;
}

")" {
	return RP;
}

"{" {
	return LC;
}

"}" {
	return RC;
}

"[" {
	return LB;
}

"]" {
	return RB;
}

"," {
	return CS;
}

";" {
	return SC;
}

"=" {
	return ASSIGN;
}

"*" {
	yylval.string_val = yytext;
	return ARITH_OP_MULT;
}

"/" {
	yylval.string_val = yytext;
	return ARITH_OP_DIVISION;
}

[+-] {
	yylval.string_val = yytext;
	return ARITH_OP_PLUS_MINUS;
}

("=="|"!="|"<="|">="|"<"|">") {
	yylval.string_val = yytext;
	return REL_OP;
}

("&&") {
	yylval.string_val = yytext;
	return LOGIC_OP_AND;
}

("||") {
	yylval.string_val = yytext;
	return LOGIC_OP_OR;
}

("!") {
	yylval.string_val = yytext;
	return NOT;
}

0|[1-9][0-9]* {
	yylval.int_val = atoi(yytext);
	yylval.type = Integer_type; 
	yylval.is_const = true;
	return NUM;
}

int {
	return TYPE_INT;
}

matrix {
	return TYPE_MATRIX;
}

print {
	return PRINT;
}

read {
	return READ;
}

true {
	return TRUE;
}

false {
	return FALSE;
}

if {
	return IF;
}

else {
	return ELSE;
}

while {
	return WHILE;
}

foreach {
	return FOREACH;
}

in {
	return IN;
}

[a-zA-Z]+ {
	yylval.string_val = yytext;
	return ID;
}

(\")(([^"])*)(\")	{
	string value = yytext;
	yylval.string_val = value.substr(1, value.size()-2);
	yylval.type = String_type;
	return STRING;
}

"//"[^\n]*\n ; /* Comments - ignore */

([\n\t ]) ; /* White spaces - ignore */

. errLex();

%%
