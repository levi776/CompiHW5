%{
    

/* Declarations section */
#include <stdio.h>
#include <string>
#include "hw3_output.hpp"
#include "tokens.hpp"
#include "parser.tab.hpp"
using namespace std;


%}

%option yylineno
%option noyywrap

whitespace                                      ([ \t\n\r])
comment                                         (\/\/[^\r\n]*[\r]?[\n]?)
string                                          (\"([^\n\r\"\\]|\\[rnt"\\])+\")
num                                             (0|[1-9][0-9]*)
id                                              ([a-zA-Z][a-zA-Z0-9]*)
md_binop                                         ([*/])
pm_binop                                        ([-+])
relop                                           ([<>]=|>|<)
eqop                                            ([=!]=)
%%
void                                                                                {yylval=new token_att();yylval->type = string("VOID"); return VOID;}
int                                                                                 {yylval=new token_att();yylval->type = string("INT"); return INT;}
byte                                                                                {yylval=new token_att();yylval->type = string("BYTE"); return BYTE;}
b                                                                                   {yylval=new token_att();yylval->type = string("BYTE"); return B;}
bool                                                                                {yylval=new token_att();yylval->type = string("BOOL"); return BOOL;}
override                                                                            {yylval=new token_att();return OVERRIDE;}
and                                                                                 {yylval=new token_att();return AND;}
or                                                                                  {yylval=new token_att();return OR;}
not                                                                                 {yylval=new token_att();return NOT;}
true                                                                                {yylval=new token_att();yylval->type = string("BOOL"); return TRUE;}
false                                                                               {yylval=new token_att();yylval->type = string("BOOL"); return FALSE;}
return                                                                              {yylval=new token_att();return RETURN;}
if                                                                                  {yylval=new token_att();return IF;}
else                                                                                {yylval=new token_att();return ELSE;}
while                                                                               {yylval=new token_att();return WHILE;}
break                                                                               {yylval=new token_att();return BREAK;}
continue                                                                            {yylval=new token_att();return CONTINUE;}
;                                                                                   {yylval=new token_att();return SC;}
,                                                                                   {yylval=new token_att();return COMMA;}
\(                                                                                 {yylval=new token_att();return LPAREN;}
\)                                                                                  {yylval=new token_att();return RPAREN;}
\{                                                                                  {yylval=new token_att();return LBRACE;}
\}                                                                                  {yylval=new token_att();return RBRACE;}
=                                                                                   {yylval=new token_att();return ASSIGN;}
{relop}                                                                             {yylval=new token_att();yylval->name = string(yytext); return RE_RELOP;}
{eqop}                                                                              {yylval=new token_att();yylval->name = string(yytext); return EQ_RELOP;}
{md_binop}                                                                          {yylval=new token_att();yylval->name = string(yytext); return MD_BINOP;}
{pm_binop}                                                                          {yylval=new token_att();yylval->name = string(yytext); return PM_BINOP;}
{id}                                                                                {yylval=new token_att();yylval->name = string(yytext);return ID;}                                                                      
{num}                                                                               {yylval=new token_att();yylval->name = string(yytext);yylval->type = string("INT");yylval->intVal = stoi(yytext); yylval->strVal = string(yytext); return NUM;}    
{string}                                                                            {yylval=new token_att();yylval->type = "STRING";yylval->strVal = string(yytext); return STRING;}
{whitespace}*                                                                       ;
{comment}                                                                           ;
.                                                                                   {output::errorLex(yylineno);exit(0);}
%%




    