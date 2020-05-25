//
// Created by Kacper on 08.05.2020.
//

#include "adapterVGA.h"

adapterVGA::adapterVGA(urzadzenieHDMI *ptr) {
    this->monitor=ptr;
}
void adapterVGA::wyswietlVGA() {
    std::cout<<"UZYWANIE PRZEJSCIOWKI\n";
    monitor->wyswietlHDMI();
}