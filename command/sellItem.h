//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : sellItem.h
//  @ Date : 08.05.2020
//  @ Author : 
//
//


#if !defined(_SELLITEM_H)
#define _SELLITEM_H

#include "command.h"
#include "Item.h"
class sellItem : public command {
private:
    Item *item;
public:
    sellItem(Item *item);
	void execute();
};

#endif  //_SELLITEM_H