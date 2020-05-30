#include <iostream>
#include <vector>

#include "texture.h"
#include "grassTextureCreator.h"
#include "rockTextureCreator.h"
#include "textureCreatorHandler.h"
#include "textureFactory.h"
using namespace std;

int main(){
    //tworze lancuszek do tworzenia tekstur
    textureCreatorHandler *grassCreator=new grassTextureCreator;
    textureCreatorHandler *rockCreator=new rockTextureCreator;

    grassCreator->setNextStep(rockCreator);

    textureFactory factory(grassCreator);

    texture *grass=factory.getTexture("grass");
    grass->printInfo();

    texture *rock=factory.getTexture("rock");
    rock->printInfo();

    texture *grass2=factory.getTexture("grass");

    cout<<"grass address: "<<grass<<", grass2 address: "<<grass2;
    return 0;
}