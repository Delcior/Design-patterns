//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : andExpression.h
//  @ Date : 14.05.2020
//  @ Author : 
//
//


#if !defined(_ANDEXPRESSION_H)
#define _ANDEXPRESSION_H

#include "expression.h"

class andExpression : public expression {
private:
    expression* expOne;
    expression* expTwo;
public:
    andExpression(expression *one, expression *two);
	bool interpret(std::string context);
};

#endif  //_ANDEXPRESSION_H
