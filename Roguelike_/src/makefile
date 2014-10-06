all: main

main: main.o Piece.o Square.o Board.o Actor.o
	g++ main.o Piece.o Square.o Board.o Actor.o -o main

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

clean:
	rm -rf *.o main