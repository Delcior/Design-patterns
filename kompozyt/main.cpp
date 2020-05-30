#include <iostream>
#include "Koszyk.h"
#include "produktA.h"
#include "produktB.h"

int main(){

    Koszyk koszyk;

    koszyk.dodaj(new produktA());
    koszyk.dodaj(new produktA());
    koszyk.dodaj(new produktB());
    koszyk.dodaj(new produktB());

    //i teraz przy kasie pani skanuje produkty i sprzedaje, baza danych jest uaktualniana itd
    //nie wazne jakie tam sa produkty, czy mleko czy gra nasz koszyk sprzeda wszystko.
    koszyk.sprzedaj();
    return 0;
}