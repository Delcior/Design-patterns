#include <iostream>
#include "proxyPlik.h"
using namespace std;

int main()
{
    proxyPlik p("plik");

    p.zapisz("ala");
    p.zapisz("ma kota");

    p.znajdz();
    return 0;
}