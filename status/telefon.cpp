//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : telefon.cpp
//  @ Date : 13.05.2020
//  @ Author : 
//
//


#include "telefon.h"
telefon::telefon(tryb* tryb){
    this->tryb_telefonu=tryb;
}
void telefon::dzwon() {
    tryb_telefonu->rozmowa();
}

void telefon::wyslij_sms() {
    tryb_telefonu->sms();
}

void telefon::przegladaj_internet() {
    tryb_telefonu->internet();
}
void telefon::ustawTryb(tryb *nowy_tryb) {
    this->tryb_telefonu=nowy_tryb;
}
