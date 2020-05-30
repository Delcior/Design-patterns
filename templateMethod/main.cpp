#include <iostream>
#include <vector>
#include "sortowanieMalejaco.h"
#include "sortowanieRosnaco.h"
using namespace std;

const int* get(){return new int(5);}

int main(){
    vector<int> a{1,2,3,4,5};

    sortowanieMalejaco ab;
    ab.sortuj(a);
    cout<<'\n';
    
    sortowanieRosnaco ac;
    ac.sortuj(a);
    return 0;
}