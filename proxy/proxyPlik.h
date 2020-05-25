//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : proxyPlik.h
//  @ Date : 06.05.2020
//  @ Author : 
//
//


#if !defined(_PROXYPLIK_H)
#define _PROXYPLIK_H

#include "plik.h"
#include "konkretnyPlik.h"
#include <unordered_map>
#include <vector>

class proxyPlik : public plik {
private:
    std::vector<std::string> rzeczyDoZapisania;
    plik *wskaznikNaPlik;
    std::string nazwa;
public:
    proxyPlik(std::string nazwa);
    void znajdz();
    void zapisz(std::string coZapisac);
	~proxyPlik();
};

#endif  //_PROXYPLIK_H
