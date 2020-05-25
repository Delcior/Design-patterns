//
// Created by Kacper on 02.05.2020.
//

#include "Head.h"


Head::Head(std::string type) {
    this->type=type;
    this->name="helmet";
}
void Head::printData() {
    std::cout<<"name: "<<this->name<<", type: "<<this->type;
}