//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Weapon.h
//  @ Date : 30.04.2020
//  @ Author : 
//
//


#if !defined(_WEAPON_H)
#define _WEAPON_H

class Weapon {
public:
    virtual std::string getType()=0;
};
#include "sword.h"
#include "axe.h"
#include "polearm.h"

#endif  //_WEAPON_H
