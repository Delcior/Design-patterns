//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : komputerA.h
//  @ Date : 12.05.2020
//  @ Author : 
//
//


#if !defined(_KOMPUTERA_H)
#define _KOMPUTERA_H

#include "komputer.h"

class komputerA : public komputer {
private:
    std::string nazwa;
    router* routerGlowny;
public:
    komputerA(std::string nazwa, router* routerGlowny);
	void ping(komputer* cel);
	void odbierzPing(komputer* zrodlo);
	std::string getNazwa();
};

#endif  //_KOMPUTERA_H
