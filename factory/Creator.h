//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Creator.h
//  @ Date : 30.04.2020
//  @ Author : 
//
//


#if !defined(_CREATOR_H)
#define _CREATOR_H

#include <iostream>
#include "Weapon.h"

class Creator {
public:
	virtual Weapon* createWeapon()=0;
};

#include "axePattern.h"
#include "polearmPattern.h"
#include "swordPattern.h"

#endif  //_CREATOR_H
