//
//  Board.h
//  Roguelike_
//
//  Created by Adrián Calzadilla González on 22/09/14.
//  Copyright (c) 2014 Adrián Calzadilla González. All rights reserved.
//

#ifndef __Roguelike___Board__
#define __Roguelike___Board__

#include <iostream>
#include "Square.h"

using namespace std;

class Board{
private:
    int static const row= 10;
    int static const col= 10;
    Square **ptrMyBoard;
public:
    Board();
    ~Board();
    void printBoard();
    void printSquare();
};
#endif /* defined(__Roguelike___Board__) */