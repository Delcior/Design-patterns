//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Phone.h
//  @ Date : 15.05.2020
//  @ Author : 
//
//


#if !defined(_PHONE_H)
#define _PHONE_H

#include <string>
#include <iostream>
class Phone {
private:
    std::string processor;
    std::string RAM;
    std::string display;
public:
	void setProcessor(std::string processorPlaceholder);
	void setRAM(std::string RAMPlaceholder);
	void setDisplay(std::string displayPlaceholder);
	void printInfo();
};

#endif  //_PHONE_H
