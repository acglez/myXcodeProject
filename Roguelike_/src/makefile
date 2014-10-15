all: main

main: main.o Piece.o Square.o Board.o Actor.o Hero.o Monster.o Dragon.o Trol.o ConstructorPart.o Wall.o Floor.o Door.o Hallway.o
	g++ main.o Piece.o Square.o Board.o Actor.o Hero.o Monster.o Dragon.o Trol.o ConstructorPart.o Wall.o Floor.o Door.o Hallway.o -o main

main.o:
	g++ -c main.cpp

Piece.o:
	g++ -c Piece.cpp

Square.o:
	g++ -c Square.cpp

Board.o:
	g++ -c Board.cpp
	
Actor.o:
	g++ -c Actor.cpp

Hero.o:
	g++ -c Hero.cpp
	
Monster.o:
	g++ -c Monster.cpp

Dragon.o:
	g++ -c Dragon.cpp

Trol.o:
	g++ -c Trol.cpp

ConstructorPart.o:
	g++ -c ConstructorPart.cpp

Wall.o:
	g++ -c Wall.cpp

Floor.o:
	g++ -c Floor.cpp

Door.o:
	g++ -c Door.cpp

Hallway.o:
	g++ -c Hallway.cpp

clean:
	rm -rf *.o main