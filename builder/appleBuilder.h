//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : appleBuilder.h
//  @ Date : 15.05.2020
//  @ Author : 
//
//


#if !defined(_APPLEBUILDER_H)
#define _APPLEBUILDER_H

#include "builder.h"

class appleBuilder : public builder {
private:
    Phone* applePhone;
public:
    void initializePhone();
	void placeProcessor();
	void placeRAM();
	void placeDisplay();
	Phone* getPhone();
};

#endif  //_APPLEBUILDER_H