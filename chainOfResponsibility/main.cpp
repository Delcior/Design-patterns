#include <iostream>
#include <vector>
#include "merchantHandler.h"
#include "Borrow.h"
#include "Buy.h"
#include "Sell.h"

using namespace std;

merchantHandler* getHandler(){
    merchantHandler *buy=new Buy;
    merchantHandler *sell=new Sell;
    merchantHandler *borrow=new Borrow;

    buy->setNextStep(sell);
    sell->setNextStep(borrow);

    return buy;
}

int main(){
    //tworze
    merchantHandler *hand=getHandler();

    hand->handle("borrow");
    std::cout<<"===========\n";
    hand->handle("sell");
    return 0;
}