%option yylineno 
%{
#include <stdio.h>
#include <stdlib.h>
#include "a.tab.h"
%}
%%
\n {}
[0-9]+ {printf("%s\n", yytext); return NUMBER;}
\[ {printf("[\n"); return SQUA_OPEN;}
\] {printf("]\n"); return SQUA_CLOSE;}
"++" {printf("++\n"); return DPLUS;}
"--" {printf("--\n"); return DMINUS;}
"-" {printf("-\n"); return MINUS;}
"+" {printf("+\n"); return PLUS;}
"*" {printf("*\n"); return MUL;}
"/" {printf("/\n"); return DIV;}
"%" {printf(" MOD\n"); return MOD;}
";" {printf(";\n"); return SS;}
":=" {printf(":=\n"); return COLEQU;}
"," {printf(",\n"); return CO;}
"=" {printf("=\n"); return EQUAL;}
">" {printf(">\n"); return GREATER_THAN;}
">=" {printf(">=\n"); return GREATER_THAN_EQUAL;}
"<" {printf("<\n"); return LESSER_THAN;}
"<=" {printf("<=\n"); return LESSER_THAN_EQUAL;}
"==" {printf("==\n"); return EQUALS;}
"!=" {printf("!=\n"); return NOT_EQUALS;}
"(" {printf("(\n"); return OPEN_BRAC;}
")" {printf(")\n"); return CLOSE_BRAC;}
"{" {printf("{\n"); return OPEN_FLOW;}
"}" {printf("}\n"); return CLOSE_FLOW;}
"." {printf(".\n"); return DOT;}
":" {printf(":\n"); return COLON;}
\" {printf("DC\n"); return DOUBLE_QUOTE;}
"var" {printf("var\n"); return VAR;}
"type" {printf("type\n"); return TYP;}
"import" {printf("import\n"); return IMPORT;}
"package" {printf("package\n"); return PACKAGE;}
"func" {printf("func\n"); return FUNC;}
"struct" {printf("struct\n"); return STRUCT;}
"break" {printf("break\n"); return BREAK;}
"continue" {printf("continue\n"); return CONTINUE;}
"return" {printf("return\n"); return RETURN;}
"int" {printf("%s\n", yytext); return TYPE;}
"bool" {printf("%s\n", yytext); return TYPE;}
"int64" {printf("%s\n", yytext); return TYPE;}
"int32" {printf("%s\n", yytext); return TYPE;}
"float32" {printf("%s\n", yytext); return TYPE;}
"float64" {printf("%s\n", yytext); return TYPE;}
"main" {printf("%s\n", yytext); return MAIN;}
"while" {printf("%s\n", yytext); return WHILE;}
"for" {printf("%s\n", yytext); return FOR;}
"if" {printf("if\n"); return IF;}
"else" {printf("else\n"); return ELSE;}
[a-zA-Z][a-zA-Z0-9_]* {printf("%s\n", yytext); return ID;}
. {}
%%
int yywrap(){
	return 1;
}

int yyerror(char *msg){
	printf("%d: %s at '%s' Invalid Expression\n",yylineno,msg,yytext);
	return 1;
}
