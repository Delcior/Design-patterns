//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : expression.h
//  @ Date : 14.05.2020
//  @ Author : 
//
//


#if !defined(_EXPRESSION_H)
#define _EXPRESSION_H

#include <string>

class expression {
public:
	virtual bool interpret(std::string context)=0;
};

#endif  //_EXPRESSION_H
