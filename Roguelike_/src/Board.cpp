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
}

void Board::printBoard(){
    for (int i=0; i< row; i++) {
        for (int j=0; j< col; j++) {
            cout << myBoard[i][j].seeSquare();
        }
        cout<< endl;
    }
}

void Board::printSquare(){
    cout << myBoard[0][0].seeSquare()<<endl;
}