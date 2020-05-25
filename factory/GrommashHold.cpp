//
// Created by Kacper on 30.04.2020.
//

#include "GrommashHold.h"

GrommashHold::GrommashHold() {
    workers.push_back(Weaponsmith());
    patterns["sword"]=new swordPattern();
    patterns["polearm"]=new polearmPattern();
    patterns["axe"]=new axePattern();
}
Weapon* GrommashHold::giveOrder(std::string typeOfWeapon) {
    Weaponsmith freeWorker=workers[0];

    return freeWorker.createWeapon(patterns[typeOfWeapon]);
}