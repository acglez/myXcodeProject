#include "Actor.h"

Actor::Actor():Piece(){
    life = 3;
    strong = 0;
}

Actor::~Actor(){
    
}

int Actor::getStrong(){
    return strong;
}

void Actor::lessLife(int &num){
    life = life - num;
}