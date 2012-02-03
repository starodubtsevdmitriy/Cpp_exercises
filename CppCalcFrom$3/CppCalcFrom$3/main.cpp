//
//  main.cpp
//  CppCalcFrom$3
//
//  Created by Dmitriy Starodubtsev on 03.02.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#include <iostream>
#include <string>
#include <map>
#include <cctype>
#include <sstream>
//#include <conio.h>

using namespace std;

istream* input;
int no_of_errors;
map<string,double> table;

double          number_value;
string          string_value;

int no_of_strings=0;

enum Token_value
{
    NAME,NUMBER,END,PLUS='+',MINUS='-',MUL='*',DIV='/',
    PRINT=',',ASSIGN='=',LP='(',RP=')' 
};

Token_value curr_tok=PRINT;

double term(bool get);
double prim(bool get);
double expr(bool get);
int error(const string &s);
Token_value get_token();

double expr(bool get)
{
    double left=term(get);
    for(;;)
    {
        switch(curr_tok)
        {
            case PLUS       :       left+=term(true);break;
            case MINUS      :       left-=term(true);break;
            default         :       return left;
        };
    };
};

double term(bool get)
{
    double left=prim(get);
    for(;;)
    {
        switch(curr_tok)
        {
            case MUL        :       left*=prim(true);break;
            case DIV        :       if(double d=prim(true))
            {
                left/=d;
                break;
            };
                return error("DIVIZION BY ZERO");
            default         :       return left;
        };
    };
};

double prim(bool get)
{
    if(get)get_token();
    switch(curr_tok)
    {
        case NUMBER     :
        {
            double v=number_value;
            get_token();
            return v;
        };
        case NAME       :
        {
            double&v=table[string_value];
            if(get_token()==ASSIGN)v=expr(true);
            return v;
        };
        case MINUS      :       return -prim(true);
        case LP         :
        {
            double e=expr(true);
            if(curr_tok!=RP)return error(") EXPECTED");
            get_token();
            return e;
        };
        default         :       return error("PRIMARY EXPRESSION EXPECTED");
    };
};

Token_value get_token()
{
    char ch=0;
    do{if(!input->get(ch))return curr_tok=END;}
    while(ch!='\n'&&isspace(ch));
    switch(ch)
    {
        case 0          :       return curr_tok=END;
            
        case ':': case '*': case '/': case '+':
        case '-': case '(': case ')':
        case '='        :
            return curr_tok=Token_value(ch);
        case '0': case '1': case '2': case '3':
        case '4': case '5': case '6': case '7':
        case '8': case '9':
        case '.'        :
            input->putback(ch);
            *input>>number_value;
            return curr_tok=NUMBER;
        case ';'        :
        case '\n'       :
            no_of_strings++;
            return curr_tok=PRINT;
            
        default         :
            if (isalpha(ch))
            {
                string_value=ch;
                while(input->get(ch)&&isalpha(ch))
                    string_value.push_back(ch);
                input->putback(ch);
                return curr_tok=NAME;
            };
            error("INCORECT WORD");
            return curr_tok=PRINT;
    };
};

int error(const string &s)
{
    no_of_errors++;
    cerr<<no_of_strings<<" :-: ERROR:"<<s<<'\n';
    return 1;
};

int main(int argc, char* argv[])
{
    switch(argc)
    {
        case 1:
            input=&cin;
            break;
        case 2:
            input=new istringstream(argv[1]);
            break;
        default:
            error("To mach parameters!!!");
            return 1;
    };
    table ["pi"]=3.1415926535897932385;
    table["e"]      =2.7128272824590452354;
    
    while(input)
    {
        get_token();
        if(curr_tok==END)break;
        if(curr_tok==PRINT)continue;
        cout<<expr(false)<<'\n';
    };
    if(input!=&cin)delete input;
    
    return no_of_errors;
};


