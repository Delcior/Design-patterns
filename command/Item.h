//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Item.h
//  @ Date : 08.05.2020
//  @ Author : 
//
//


#if !defined(_ITEM_H)
#define _ITEM_H

#include <iostream>

class Item {
private:
    std::string name;
public:
    Item(std::string name);
	void buy();
	void sell();
};

#endif  //_ITEM_H
