%{
/****************************************************************************
parser.y
ParserWizard generated YACC file.

Date: 07 December 2000
****************************************************************************/

#include "function.h"
#include "lexer.h"
#include "codegen.h"


%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// parser name
%name myparser

// class definition
{
public:
	void	setCurrentLexer(class mylexer *_lexer);
	void	setBaseNode(class CTreeNode *_baseNode);

	// Overridden parser functions
	void	yyerror(const char *_text);
	int		yyparse();

private:
	class mylexer	*m_currentLexer;
	class CTreeNode	*m_baseNode;

	// Ugh! (pkg)
	class CTreeNode	*m_functionArgs;
	int				m_functionNumber;

}

// constructor
{
	// place any extra initialisation code here
}

//// attribute type
//%include {
//#ifndef YYSTYPE
//#define YYSTYPE int
//#endif
//}

%union {
	int					variableIdx;
	signed short		value;
	int					functionNumber;
	class CTreeNode		*treenode;
}



// place any declarations here


%token	STOP
%token	IF
%token	ELSE
%token	PAUSE
%token	PRINT
%token	ASSIGN
%token	EQUAL
%token	NOTEQUAL
%token	PLUS
%token	END_STMT
%token	OPEN_PAR
%token	CLOSE_PAR
%token	BEGIN_CS
%token	END_CS
%token	COMMA
%token	<variableIdx>		VARIABLE
%token	<value>				VALUE
%token	<functionNumber>	FUNCTION


%type	<treenode>		program statement_list statement
%type	<treenode>		assign_expression
%type	<treenode>		expression equal_expression notequal_expression
%type	<treenode>		variable
%type	<treenode>		value
%type	<treenode>		function

%%


/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)

program
	:statement_list										{s_baseTreeNode=$1;}
	;													

statement_list											
	:statement_list statement							{$$=new CTreeNode(STMT_LIST,$1,$2);}
	|													{$$=new CTreeNode(EMPTY_STMT);}
	;

statement
	:END_STMT											{$$=new CTreeNode(EMPTY_STMT);}
	|STOP END_STMT										{$$=new CTreeNode(STOP_STMT);}
	|PAUSE END_STMT										{$$=new CTreeNode(PAUSE_STMT);}
	|PRINT OPEN_PAR value CLOSE_PAR END_STMT			{$$=new CTreeNode(PRINT_STMT,$3);}
	|assign_expression END_STMT							{$$=$1;}
	|IF OPEN_PAR expression CLOSE_PAR statement			{$$=new CTreeNode(IF_STMT,$3,$5);}
	|IF OPEN_PAR expression CLOSE_PAR statement ELSE statement	{$$=new CTreeNode(IFELSE_STMT,$3,$5,$7);}
	|BEGIN_CS statement_list END_CS						{$$=new CTreeNode(STMT_LIST,$2);}
	|function END_STMT									{$$=new CTreeNode(STMT_LIST,$1,new CTreeNode(POP_STMT));}
	;


assign_expression
	:variable ASSIGN value								{$$=new CTreeNode(ASSIGN_EXPR,$1,$3);}
	;													
														
														
expression												
	:OPEN_PAR expression CLOSE_PAR						{$$=$2;}
	|equal_expression									{$$=$1;}
	|notequal_expression								{$$=$1;}
	;													
														
equal_expression										
	:value EQUAL value									{$$=new CTreeNode(EQUAL_EXPR,$1,$3);}
	;													
														
notequal_expression										
	:value NOTEQUAL value								{$$=new CTreeNode(NOTEQUAL_EXPR,$1,$3);}
	;													
														
														
variable												
	:VARIABLE											{$$=new CTreeNode(VARIABLE_EXPR,$1);}		// variable id
	;													
														
value													
	:VALUE												{$$=new CTreeNode(VALUE_EXPR,$1);}
	|VARIABLE											{$$=new CTreeNode(VARIABLE_EXPR,$1);}		// variable value
	|value PLUS value									{$$=new CTreeNode(PLUS_EXPR,$1,$3);}
	|function											{$$=$1;}
	;													


function
	:FUNCTION OPEN_PAR									{if($1!=-1){m_functionNumber=$1;m_functionArgs=getFunctionArgs($1);}}
	 CLOSE_PAR											{$$=new CTreeNode(STMT_LIST,m_functionArgs,new CTreeNode(FUNCTION_EXPR,m_functionNumber));}
	;



%%


/////////////////////////////////////////////////////////////////////////////
// programs section
