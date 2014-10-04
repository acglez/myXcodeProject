//
//  Board.cpp
//  Roguelike_
//
//  Created by Adrián Calzadilla González on 22/09/14.
//  Copyright (c) 2014 Adrián Calzadilla González. All rights reserved.
//

#include "Board.h"

Board::Board(){
    myBoard = new Square* [row];
    for (int i=0; i<= row; i++) {
        myBoard[i]= new Square [col];
    }
}

Board::~Board(){
    for (int i=0; i<=row; i++) {
        delete [] myBoard[i];
    }
    delete myBoard;
    myBoard = nullptr;
}

void Board::printBoard(){
    cout << "Voy a entrar en el printBoard"<<endl;
    cout << "row: "<< row << endl;
    for (int i=0; i<= row; i++) {
        cout <<"- Dentro del primer for."<<endl;
        for (int j=0; j<= col; j++) {
            cout << myBoard[i][j].seeSquare();
        }
        cout<< endl;
    }
    cout << "Sali de escribir el tablero" << endl;
}