#include <iostream>
#include "object.h"
#include "rememberedStates.h"
using namespace std;

int main(){

    object ob;
    rememberedStates rem;

    ob.setState(10);
    rem.add(ob.createMemento());
    std::cout<<ob.getState()<<'\n';

    ob.setState(112);
    rem.add(ob.createMemento());
    std::cout<<ob.getState()<<'\n';

    ob.restore(rem.get(0));
    std::cout<<ob.getState();
    return 0;
}