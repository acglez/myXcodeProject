all: main

main: main.o Piece.o Square.o Board.o
	g++ main.o Piece.o Square.o Board.o -o main

main.o:
	g++ -c main.cpp

Piece.o:
	g++ -c Piece.cpp

Square.o:
	g++ -c Square.cpp

Board.o:
	g++ -c Board.cpp

clean:
	rm -rf *.o main