run: main.o Computer.o Referee.o Human.o
	g++ main.o Computer.o Referee.o Human.o -o run

main.o: main.cpp
	g++ -c main.cpp

Human.o: Human.cpp Human.h
	g++ -c Human.cpp

Referee.o: Referee.cpp Referee.h
	g++ -c Referee.cpp

clean:
	rm *.o 