//
//  main.cpp
//  Roguelike_
//
//  Created by Adrián Calzadilla González on 22/09/14.
//  Copyright (c) 2014 Adrián Calzadilla González. All rights reserved.
//

#include <iostream>
#include "Square.h"
#include "Piece.h"
#include "Board.h"

using namespace std;

int main(){
    // insert code here...
    std::cout << "Hello, World!\n";

    Piece myPiece;
    Square mySquare;
    cout << "Pieza: "<< myPiece.getSymbol()<< endl;
    cout << "Casilla: "<< mySquare.seeSquare()<< endl;
    
    Board myChessBoard;
    cout << "Tablero: ";
    myChessBoard.printBoard();
    
    return 0;
}

