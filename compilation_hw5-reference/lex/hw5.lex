%{

/* Declarations section */
#include <stdio.h>
#include "hw5.hpp"
#include "hw5.tab.hpp"
#include <iostream>


%}

%option yylineno
%option noyywrap
	
mulDiv 			([\/\*])	
number			([1-9][0-9]*|0)
type			(int|matrix)		
identifier		([a-zA-Z][a-zA-Z0-9_]*)	
ignoreA			("//"[^\n]*\n)
ignoreB			([\n\r\t ]*)		
fullIgnore		({ignoreA}|{ignoreB})								

	
%%

\(															return LP;												
\)															return RP;
\{															return LC;
\}															return RC;
\[															return LB;
\]															return RB;
\,															return CS;
\;															return SC;	
=															return ASSIGN;	
\-															return MINUS;
\+															return PLUS;
\*															return MUL;
\/															return DIV;
\<															return REL_OP_LESS;
\>															return REL_OP_GRAETER;
\<=															return REL_OP_L_EQUAL;
\>=															return REL_OP_G_EQUAL;
!=															return REL_OP_NOT_EQUAL;
==															return REL_OP_EQUAL;
&&															return LOGIC_AND;
\|\|														return LOGIC_OR;
!															return NOT;
\"[^"]*\"													{	
																yylval.id = yytext;
																yylval.type = "string";
																return STRING;
															}															
print 														return PRINT;
read														return READ;
true														return TRUE;
false														return FALSE;
if															return IF;
else 														return ELSE;
while 														return WHILE;
foreach														return FOREACH;
in 															return IN;
{number}													{	
																yylval.val = atoi(yytext);
																yylval.type = "int";
																yylval.constVar = true;
																return NUM;
															}
transpose													return TRANSPOSE;
{type}														{	
																yylval.type = yytext;
																return TYPE;
															}
{identifier}												{	
																yylval.id = yytext;
																yylval.constVar = false;
																return ID;
															}
{fullIgnore}												{;}
.															{	
																std::cout << "LEXICAL ERROR" << std::endl;
																exit(1);
															}

%%
