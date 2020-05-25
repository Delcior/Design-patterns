#include <iostream>
#include "chocolate_cake.h"

int main(){
    //jestesmy userem

    cake* chocCake=new chocolate_cake();

    chocCake->setName("moj cake1");

    cake* cake2=chocCake->clone();

    std::cout<<"adres: "<<chocCake<<", dane: "<<chocCake->getName()<<'\n';
    std::cout<<"adres: "<<cake2<<", dane: "<<cake2->getName();
}