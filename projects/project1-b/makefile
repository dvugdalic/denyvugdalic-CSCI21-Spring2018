project1b: project1b.o main.o
	g++ -o project1b project1b.o main.o

project1b.o: project1b.cpp project1b.h
	g++ -c project1b.cpp
	
main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o project1b