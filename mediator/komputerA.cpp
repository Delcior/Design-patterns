//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : komputerA.cpp
//  @ Date : 12.05.2020
//  @ Author : 
//
//


#include "komputerA.h"

komputerA::komputerA(std::string nazwa, router* routerGlowny) {
    this->routerGlowny=routerGlowny;
    this->nazwa=nazwa;
}

void komputerA::ping(komputer* cel) {
    cel->odbierzPing(this);
}

void komputerA::odbierzPing(komputer* zrodlo) {
    std::cout<<nazwa<<": odbieram ping od "<<zrodlo->getNazwa()<<'\n';
}
std::string komputerA::getNazwa(){return this->nazwa;}

