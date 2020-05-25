#include <iostream>
#include "SmithHold.h"
using namespace std;

int main(){

    SmithHold sm;
    //moge zamowic jakikolwiek set
    vector<Armour*> *clothSet=sm.giveOrder("cloth");
    for(Armour *tmp : *clothSet){
        tmp->printData();
        cout<<'\n';
    }
    cout<<"=================\n";

    vector<Armour*> *mailSet=sm.giveOrder("mail");
    for(Armour *tmp : *mailSet){
        tmp->printData();
        cout<<'\n';
    }
    cout<<"=================\n";

    vector<Armour*> *plateSet=sm.giveOrder("plate");
    for(Armour *tmp : *plateSet){
        tmp->printData();
        cout<<'\n';
    }
    return 0;
}