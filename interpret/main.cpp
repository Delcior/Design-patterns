#include <iostream>
#include <vector>
#include "andExpression.h"
#include "terminalExpression.h"
#include "orExpression.h"
using namespace std;

int main(){
    auto *ter1=new terminalExpression("tauren");
    auto *ter2=new terminalExpression("orc");
    auto *ter3=new terminalExpression("undead");
    auto *ter4=new terminalExpression("troll");

    expression *isHorde=new orExpression(ter1,new orExpression(ter2, new orExpression(ter3, ter4)));

    cout<<isHorde->interpret("orc")<<'\n';
    cout<<isHorde->interpret("human");
    return 0;
}