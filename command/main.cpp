#include <iostream>
#include "auctionHouse.h"
#include "Item.h"
#include "sellItem.h"
#include "buyItem.h"
using namespace std;

int main(){
    Item *i1=new Item("neck");
    Item *i2=new Item("cape");
    Item *i3=new Item("boots");

    command *command1=new buyItem(i1);
    command *command2=new buyItem(i2);
    command *command3=new sellItem(i3);

    auctionHouse AH;
    AH.addAuction(command1);
    AH.addAuction(command2);
    AH.addAuction(command3);

    AH.closeAuctions();
    return 0;
}