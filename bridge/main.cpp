#include <iostream>
#include <vector>
#include "swordTransmogrification.h"
#include "staffTransmogrification.h"
#include "axeTransmogrification.h"
#include "weapon.h"
#include "staff.h"
#include "sword.h"
#include "axe.h"

using namespace std;
int main(){
    transmogrification *swordTransmo=new swordTransmogrification;
    transmogrification *axeTransmo=new axeTransmogrification;
    transmogrification *staffTransmo=new axeTransmogrification;


    weapon *axeWeapon=new axe(axeTransmo);
    weapon *swordWeapon=new sword(swordTransmo);
    weapon *staffWeapon=new staff(staffTransmo);

    axeWeapon->showWeapon();
    axeWeapon->setTransmogrification(swordTransmo);
    axeWeapon->showWeapon();
    axeWeapon->setTransmogrification(staffTransmo);
    axeWeapon->showWeapon();
    std::cout<<"===========\n";
    staffWeapon->showWeapon();
    staffWeapon->setTransmogrification(swordTransmo);
    staffWeapon->showWeapon();

    return 0;
}