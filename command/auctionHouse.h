//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : auctionHouse.h
//  @ Date : 08.05.2020
//  @ Author : 
//
//


#if !defined(_AUCTIONHOUSE_H)
#define _AUCTIONHOUSE_H

#include <vector>
#include "command.h"
class auctionHouse {
public:
	void addAuction(command *command);
	void closeAuctions();
private:
	std::vector<command*> commands;
};

#endif  //_AUCTIONHOUSE_H
