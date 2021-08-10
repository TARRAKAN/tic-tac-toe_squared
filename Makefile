all: tic_tac_toe

tic_tac_toe: main.o board.o
	g++ main.o board.o -o tic_tac_toe -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -c main.cpp

board.o: board.cpp
	g++ -c board.cpp

clean:
	rm -rf *.o tic_tac_toe 
