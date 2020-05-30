#include <iostream>
#include <vector>
#include "telefon.h"
#include "zwykly.h"
#include "samolotowy.h"
#include "wyciszony.h"

using namespace std;

int main(){
    telefon tel(new zwykly);
    tel.dzwon();
    tel.przegladaj_internet();
    cout<<"===================\n";
    tel.ustawTryb(new samolotowy);
    tel.dzwon();
    tel.wyslij_sms();
    cout<<"===================\n";
    tel.ustawTryb(new wyciszony);
    tel.wyslij_sms();
    return 0;
}