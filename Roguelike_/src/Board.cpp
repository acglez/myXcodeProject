//
//  Board.cpp
//  Roguelike_
//
//  Created by Adrián Calzadilla González on 22/09/14.
//  Copyright (c) 2014 Adrián Calzadilla González. All rights reserved.
//

#include "Board.h"

Board::Board(){
    ptrMyBoard = new Square* [row];
    for (int i=0; i<= row; i++) {
        ptrMyBoard[i]= new Square [col];
    }
}

Board::~Board(){
    for (int i=0; i<=row; i++) {
        delete [] ptrMyBoard[i];
    }
    delete ptrMyBoard;
}

void Board::printBoard(){
    for (int i=0; i< row; i++) {
        for (int j=0; j< col; j++) {
            cout << ptrMyBoard[i][j].seeSquare();
        }
        cout<< endl;
    }
}

void Board::printSquare(){
    cout << ptrMyBoard[0][0].seeSquare()<<endl;
}