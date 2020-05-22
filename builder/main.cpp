#include <iostream>
#include "engineer.h"
#include "samsungBuilder.h"
#include "appleBuilder.h"

using namespace std;
int main(){
    builder *samsungBuild=new samsungBuilder;
    builder *appleBuild=new appleBuilder;

    engineer engi;
    //inzynier uzywa budowniczych do zbudowania telefonu
    Phone *phoneOne=engi.getPhone(samsungBuild);
    phoneOne->printInfo();
    cout<<"=========================\n";
    Phone *phoneTwo=engi.getPhone(appleBuild);
    phoneTwo->printInfo();
    return 0;
}