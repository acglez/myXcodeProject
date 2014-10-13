#include <iostream>
#include "Piece.h"

using namespace std;

class Actor:public Piece{
protected:
    int life;
    int strong;
public:
    Actor();
    ~Actor();
    int getStrong();
    void lessLife(int&);
};