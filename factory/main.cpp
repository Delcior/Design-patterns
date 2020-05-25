#include <iostream>
#include "GrommashHold.h"

int main(){

    GrommashHold mainBuilding;

    Weapon *Frostmourne=mainBuilding.giveOrder("sword");

    std::cout<<Frostmourne->getType()<<'\n';

    Weapon *axe=mainBuilding.giveOrder("axe");
    std::cout<<axe->getType();
    return 0;
}