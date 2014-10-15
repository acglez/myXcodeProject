#include "Hero.h"

Hero::Hero():Actor(){
    life = 5;
    strong = 1;
}

Hero::~Hero(){
   // delete [] ptrBag;
}

void Hero::Attack(Actor &enemy){
    int num = 1;
    if(strong > enemy.getStrong()){
        enemy.lessLife(num);
        cout << "¡¡Bien hecho!! Has ganado el ataque.\n";
    }
    else if(strong < enemy.getStrong()){
        life--;
        cout << "Vaya, tu rival ha sido mas poderoso que tu.\n";
    }
    else{
        cout << "El combate ha sido igualado, no ha habido ganador.\n";
    }
}

void Hero::setStrong(int &newStrong){
    strong = newStrong;
}