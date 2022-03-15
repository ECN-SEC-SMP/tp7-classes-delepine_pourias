run: main
	./main

main: classe1.o main.o 
	g++ -o main  main.o classe1.o

classe1.o: classe1.cpp
	g++ -c classe1.cpp

main.o: main.cpp
	g++ -c main.cpp

