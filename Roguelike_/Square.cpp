//
//  File.cpp
//  Roguelike_
//
//  Created by Adrián Calzadilla González on 22/09/14.
//  Copyright (c) 2014 Adrián Calzadilla González. All rights reserved.
//

#include "Square.h"

Square::Square() {
	people = &background;
	object[0]= &background;
	object[1]= &background;
	constructorElement = &background;
    
}


Square::~Square() {
	// TODO Auto-generated destructor stub
}


char Square::seeSquare(){
	if(people != &background){
		return people->getSymbol();
	}
	else if(object[0]!= &background){
		return object[0]->getSymbol();
	}
    else if(object[1]!= &background){
        return object[1]->getSymbol();
    }
    else{
        return constructorElement->getSymbol();
    }
}


void Square::setPeople(Piece *pCharacter){
	people = pCharacter;
}


void Square::setObject(Piece* tObject){
	if(object[0]== &background){
		object[0]= tObject;
	}
	else if(object[1]== &background){
		object[1]= tObject;
	}
}

