//
// Created by Kacper on 02.05.2020.
//

#include "Hands.h"

Hands::Hands(std::string type) {
    this->type=type;
    this->name="gloves";
}
void Hands::printData() {
    std::cout<<"name: "<<this->name<<", type: "<<this->type;
}