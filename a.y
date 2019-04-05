%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "q1.h"
	int yylex();
	int yyerror();
	extern FILE *yyin;
%}
%token NL PACKAGE IMPORT TYP ID COLON NUMBER DOT COLEQU DOUBLE_QUOTE VAR STRUCT FUNC RETURN BREAK CONTINUE DPLUS DMINUS IF GREATER_THAN GREATER_THAN_EQUAL LESSER_THAN LESSER_THAN_EQUAL EQUALS ELSE NOT_EQUALS SS CO OPEN_FLOW CLOSE_FLOW OPEN_BRAC CLOSE_BRAC MAIN TYPE SQUA_OPEN SQUA_CLOSE PLUS MINUS MUL DIV MOD WHILE FOR EQUAL

%right EQUAL
%precedence NOT_EQUALS
%left PLUS MINUS
%left MUL DIV


%%
program: PackageClause S
	| PackageClause Import S
	;

PackageClause: PACKAGE PackageName
	;
PackageName: ID
	;
Import: ImportDecl Import
	|
	;
ImportDecl: IMPORT ImportSpec
	;
ImportSpec: DOT ImportPath
	| PackageName ImportPath
	| ImportPath
	;
ImportPath: DOUBLE_QUOTE pp DOUBLE_QUOTE
	;
pp: ID pp
	| CO pp
	| NUMBER pp
	| MOD pp
	|
	;
S: Statement_list S
	|
	;

VarDecl: VAR VarSpec
	;

VarSpec: identifier_list Type
	| identifier_list Type EQUAL ExprList
	| identifier_list EQUAL ExprList
	;
Type: TYPE
	| TypeLit
	| TypeName
	| OPEN_BRAC Type CLOSE_BRAC
	;
TypeLit: ArrayType
	| FunctionType
	| StructType
	;
TypeName: ID
	| QualifiedIdent
	;
QualifiedIdent: ID DOT ID
	;
ArrayType: SQUA_OPEN expn SQUA_CLOSE Type
	;
StructType: STRUCT OPEN_FLOW FieldDecl CLOSE_FLOW
	;
FieldDecl: identifier_list Type FieldDecl
	| ID FieldDecl
	| MUL TypeName FieldDecl
	| 
	;
FunctionType: FUNC Signature
	;
Signature: Parameters
	| Parameters Result
	;
Result: Parameters
	| Type
	;
TypeDecl: TYP VarSpec
	;
Parameters:	OPEN_BRAC Parameter_List CO CLOSE_BRAC
	| OPEN_BRAC Parameter_List CLOSE_BRAC
	| OPEN_BRAC CLOSE_BRAC
	| OPEN_BRAC DOUBLE_QUOTE pp DOUBLE_QUOTE CLOSE_BRAC 
	| OPEN_BRAC DOUBLE_QUOTE pp DOUBLE_QUOTE CO identifier_list CLOSE_BRAC
	;
Parameter_List: Parameter_Decl
	| Parameter_Decl Param
	;
Param: CO Parameter_Decl Param
	| 
	;
Parameter_Decl: Type
	| identifier_list Type
	;

FunctionDecl: FUNC ID Signature
	| FUNC ID Function
	;
Function: Signature FunctionBody
	;
FunctionBody: Block
	;
Block: OPEN_FLOW Statement_list CLOSE_FLOW
	;
Statement_list: statement Statement_list
	|
	; 


ExprList: expn
	| expn CO ExprList
	;
identifier_list: ID
	| ID CO identifier_list
	| ID CO identifier_list EQUAL expn
	;

statement: assign_stat
	| decision_stat
	| looping_stat
	| return_stat
	| break_stat
	| continue_stat
	| Declaration
	| Block
	| SimpleStmt
	;

Declaration: VarDecl
	| FunctionDecl
	| TypeDecl
	;


SimpleStmt: inDec_stat
	| expression_stat
	| assign_stat
	| shortvarDecl
	;
expression_stat: expn
	;

shortvarDecl: identifier_list  COLEQU ExprList
	;

assign_stat: ExprList EQUAL ExprList
	| ID PLUS EQUAL expn
	| ID MUL EQUAL expn
	;
expn: simple_expn eprime 
	| primaryexpr
	;
index: SQUA_OPEN expn SQUA_CLOSE 
	;
primaryexpr: Operand
	| primaryexpr Arguments 
	| primaryexpr Selector
	| primaryexpr index
	;
Operand: Literal
	| OperandName
	| OPEN_BRAC expn CLOSE_BRAC
	;

Literal: BasicLit
	| CompositeLit
	| FunctionLit
	;
FunctionLit: FUNC Signature FunctionBody
	;
BasicLit: NUMBER
	;
CompositeLit: LiteralType LiteralValue
	;
LiteralType: StructType
	| ArrayType
	| SQUA_OPEN NUMBER SQUA_CLOSE Type
	;
LiteralValue: OPEN_FLOW CLOSE_FLOW
	| OPEN_FLOW ElementList CLOSE_FLOW
	| OPEN_FLOW ElementList CO CLOSE_FLOW
	;
ElementList: KeyedElement
	| KeyedElement CO ElementList
	;

KeyedElement: Element
	| Key COLON Element
	;
Key: ID
	| expn
	| LiteralValue
	;
Element: expn
	| LiteralValue
	;

OperandName: ID
	| QualifiedIdent
	;
Arguments: OPEN_BRAC CLOSE_BRAC 
	| OPEN_BRAC ExprList CLOSE_BRAC
	| OPEN_BRAC Type CLOSE_BRAC
	| OPEN_BRAC Type CO ExprList CLOSE_BRAC
	| OPEN_BRAC DOUBLE_QUOTE pp DOUBLE_QUOTE CLOSE_BRAC 
	| OPEN_BRAC DOUBLE_QUOTE pp DOUBLE_QUOTE CO identifier_list CLOSE_BRAC 
	;
Selector: DOT ID
	;
eprime: relop simple_expn
	|
	;
simple_expn: term seprime
	;
seprime: addop term seprime
	|
	;
term: factor tprime
	;
tprime: mulop factor tprime
	|
	;
factor: ID
	| NUMBER
	;
decision_stat: IF expn Block dprime
	;
dprime: ELSE Block
	| ELSE decision_stat
	|
	;
looping_stat: FOR ForClause Block
	| FOR Condition Block
	| FOR Block
	;
ForClause: stml SS exprTT SS stml
	|
	;

Condition: expn
	|
	;
stml: SimpleStmt
	| 
	;
inDec_stat: expn DPLUS
	| expn DMINUS
	;

exprTT: expn
	|
	;
return_stat: RETURN
	| RETURN ExprList
	;
break_stat: BREAK
	;
continue_stat: CONTINUE
	;
relop: GREATER_THAN
	| GREATER_THAN_EQUAL
	| LESSER_THAN
	| LESSER_THAN_EQUAL
	| EQUALS
	| NOT_EQUALS
	;
addop: PLUS
	| MINUS
	;
mulop: DIV
	| MUL
	| MOD
	;
%%

void main(){
	yyin = fopen("in.txt", "r");
	do{
		if(yyparse()){
			printf("\n Failure");
			exit(0);
		}
	}while(!feof(yyin));
	fp=fopen("in.txt","r");
	fout = fopen("out.c","w");
	col = 1;
	Initialize();
	while(getNextToken());
	printSymbolTable();
	printf("success");
}

