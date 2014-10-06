#include <iostream>
#include "Piece.h"

using namespace std;

class Actor:public Piece{
protected:
    int life;
public:
    Actor();
    ~Actor();
    void move(int&, int&); //No se si ponerlo aquí.
};