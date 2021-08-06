all: tic_tac_toe

tic_tac_toe: main.o board.o MainWindow.o
	g++ main.o board.o MainWindow.o -o tic_tac_toe -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -c main.cpp

board.o: board.cpp
	g++ -c board.cpp

MainWindow.o: MainWindow.cpp
	g++ -c MainWindow.cpp

clean:
	rm -rf *.o tic_tac_toe 
