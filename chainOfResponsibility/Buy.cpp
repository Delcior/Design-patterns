//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Buy.cpp
//  @ Date : 16.05.2020
//  @ Author : 
//
//


#include "Buy.h"

void Buy::handle(std::string request) {
    if(request=="buying"){
        std::cout<<"buying item\n";
        return;
    }
    if(nextStep) {
        std::cout<<"delegating actions\n";
        this->nextStep->handle(request);
    }
}

void Buy::setNextStep(merchantHandler* step) {
    this->nextStep=step;
}

