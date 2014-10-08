//
//  File.cpp
//  Roguelike_
//
//  Created by Adrián Calzadilla González on 22/09/14.
//  Copyright (c) 2014 Adrián Calzadilla González. All rights reserved.
//

#include "Square.h"

Square::Square() {
	ptrPeople = &background;
	ptrObject[0]= &background;
	ptrObject[1]= &background;
	ptrConstructorElement = &background;
    
}


Square::~Square() {
	// TODO Auto-generated destructor stub
}


char Square::seeSquare(){
	if(ptrPeople != &background){
		return ptrPeople->getSymbol();
	}
	else if(ptrObject[0]!= &background){
		return ptrObject[0]->getSymbol();
	}
    else if(ptrObject[1]!= &background){
        return ptrObject[1]->getSymbol();
    }
    else{
        return ptrConstructorElement->getSymbol();
    }
}


void Square::setPeople(Piece *pCharacter){
	ptrPeople = pCharacter;
}


void Square::setObject(Piece *tObject){
	if(ptrObject[0]== &background){
		ptrObject[0]= tObject;
	}
	else if(ptrObject[1]== &background){
		ptrObject[1]= tObject;
	}
}

void Square::setConstructorElement(Piece *dConstructorElement){
	ptrConstructorElement = dConstructorElement;
}

