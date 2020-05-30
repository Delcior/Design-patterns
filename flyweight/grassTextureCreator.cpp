//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : grassTextureCreator.cpp
//  @ Date : 18.05.2020
//  @ Author : 
//
//


#include "grassTextureCreator.h"

texture* grassTextureCreator::create(std::string name) {
    if(name=="grass")
        return new grassTexture;
    if(nextStep)
        return nextStep->create(name);
    return nullptr;
}

void grassTextureCreator::setNextStep(textureCreatorHandler *step) {
    this->nextStep=step;
}

