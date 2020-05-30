#include <iostream>
#include <vector>
#include "komputerA.h"
using namespace std;

int main(){
    router *rout=new router;
    komputer *ab= new komputerA("pierwszy",rout);
    komputer *ac= new komputerA("drugi",rout);
    komputer *ad= new komputerA("trzeci",rout);

    ac->ping(ab);
    ad->ping(ab);
    return 0;
}