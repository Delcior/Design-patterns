//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : plik.h
//  @ Date : 06.05.2020
//  @ Author : 
//
//


#if !defined(_PLIK_H)
#define _PLIK_H

#include <fstream>
#include <string>
#include <iostream>
class plik {
public:
	virtual void znajdz()=0;
	virtual void zapisz(std::string coZapisac)=0;
	virtual ~plik(){};
};

#endif  //_PLIK_H
