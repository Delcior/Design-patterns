#include <iostream>
#include "adapterVGA.h"
#include "monitorVGA.h"
#include "monitorHDMI.h"
#include "staryKomputerek.h"
using namespace std;

int main()
{
    staryKomputerek komputer(new monitorVGA());
    staryKomputerek kom(new adapterVGA(new monitorHDMI()));

    komputer.wyswietl();
    kom.wyswietl();
    return 0;
}