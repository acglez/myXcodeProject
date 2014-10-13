all: main

main: main.o Piece.o Square.o Board.o Actor.o Hero.o Monster.o Dragon.o
	g++ main.o Piece.o Square.o Board.o Actor.o Hero.o Monster.o Dragon.o -o main

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

clean:
	rm -rf *.o main