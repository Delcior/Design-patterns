//
// Created by Kacper on 30.04.2020.
//

#ifndef ALGOSKI_GROMMASHHOLD_H
#define ALGOSKI_GROMMASHHOLD_H

#include <vector>
#include <string>
#include <map>
#include "Weaponsmith.h"
#include "Creator.h"

class GrommashHold {
private:
    std::vector<Weaponsmith> workers;
    std::map<std::string,Creator*> patterns;

public:
    GrommashHold();
    Weapon* giveOrder(std::string typeOfWeapon);
};


#endif //ALGOSKI_GROMMASHHOLD_H
