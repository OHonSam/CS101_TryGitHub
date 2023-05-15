output: first.o second.o
	g++ first.o second.o -o output
first.o: first.cpp
	g++ -c first.cpp
second.o: second.cpp
	g++ -c second.cpp
clean:
	-del *.o *.exe output