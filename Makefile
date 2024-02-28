all: main.o
	g++ main.o -o run -fopenmp

main.o: main.cpp
	g++ -c -fopenmp main.cpp

clean:
	rm -rf *.o
