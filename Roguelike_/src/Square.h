#include <iostream>
#include "Piece.h"

using namespace std;

#ifndef SQUARE_H_
#define SQUARE_H_

class Square {
private:
    Piece background;
	Piece *ptrPeople;
	Piece *ptrObject[2];
    Piece *ptrConstructorElement;
public:
	Square();
	~Square();
	char seeSquare();
	void setPeople(Piece*);
	void setObject(Piece*);
	void setConstructorElement(Piece*);
};
#endif /* SQUARE_H_ */