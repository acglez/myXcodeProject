#include "Piece.h"

Piece::Piece(){
    symbol= '.';
}

Piece::Piece(char &theSymbol){
    symbol= theSymbol;
}

Piece::~Piece(){
    
}

void Piece::setSymbol(char &sym){
    symbol = sym;
}

char Piece::getSymbol(){
    return symbol;
}
