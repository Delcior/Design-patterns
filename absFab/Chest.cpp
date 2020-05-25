//
// Created by Kacper on 02.05.2020.
//

#include "Chest.h"

Chest::Chest(std::string type) {
    this->type=type;
    this->name="chest armour";
}
void Chest::printData() {
    std::cout<<"name: "<<this->name<<", type: "<<this->type;
}