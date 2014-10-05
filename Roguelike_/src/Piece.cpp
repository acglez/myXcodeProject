#include "Piece.h"

Piece::Piece(){
    symbol= '.';
}

Piece::~Piece(){
    
}

void Piece::setSymbol(char &sym){
    symbol = sym;
}

char Piece::getSymbol(){
    return symbol;
}
