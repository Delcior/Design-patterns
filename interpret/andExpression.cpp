//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : andExpression.cpp
//  @ Date : 14.05.2020
//  @ Author : 
//
//


#include "andExpression.h"
andExpression::andExpression(expression *one, expression *two){
    this->expOne=one;
    this->expTwo=two;
}
bool andExpression::interpret(std::string context) {
    return expOne->interpret(context) && expTwo->interpret(context);
}
