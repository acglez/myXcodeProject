#include "Actor.h"

class Hero: public Actor {
private:
    Piece* ptrBag[3];
public:
    Hero();
    ~Hero();
    void Attack(Actor&);
    void setStrong(int&);
    void useObject();
};