//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : axe.h
//  @ Date : 17.05.2020
//  @ Author : 
//
//


#if !defined(_AXE_H)
#define _AXE_H

#include "weapon.h"

class axe : public weapon {
protected:
    transmogrification* transmogrificationType;
public:
    axe(transmogrification* transmogrificationType);
	void setTransmogrification(transmogrification* transmogrificationType);
	void showWeapon();
};

#endif  //_AXE_H
