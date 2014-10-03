#ifndef PIECE_H
#define PIECE_H

#include<iostream>
using namespace std;

class Piece{
protected:
    char symbol;
public:
    Piece();
    Piece(char&);
    ~Piece();
    void setSymbol(char&);
    char getSymbol();
};

#endif