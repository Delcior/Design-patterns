//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : axePattern.cpp
//  @ Date : 30.04.2020
//  @ Author : 
//
//


#include "axePattern.h"

Weapon* axePattern::createWeapon() {
    std::cout<<"==zug-zug,me busy!==\n";
    return new axe();
}
