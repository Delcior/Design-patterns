//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : komputer.h
//  @ Date : 12.05.2020
//  @ Author : 
//
//


#if !defined(_KOMPUTER_H)
#define _KOMPUTER_H
#include <string>
#include <iostream>
class komputer {
public:
	virtual void ping(komputer* cel)=0;
	virtual void odbierzPing(komputer* zrodlo)=0;
	virtual std::string getNazwa()=0;
};
#include "router.h"
#endif  //_KOMPUTER_H