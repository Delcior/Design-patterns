//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : textureCreatorHandler.h
//  @ Date : 18.05.2020
//  @ Author : 
//
//


#if !defined(_TEXTURECREATORHANDLER_H)
#define _TEXTURECREATORHANDLER_H
#include "texture.h"

class textureCreatorHandler {
public:
	virtual texture* create(std::string name)=0;
	virtual void setNextStep(textureCreatorHandler *step)=0;
};

#endif  //_TEXTURECREATORHANDLER_H
