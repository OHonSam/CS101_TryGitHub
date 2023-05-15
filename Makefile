output: first.o
	g++ first.o -o output
first.o: first.cpp
	g++ -c first.cpp
clean:
	-del *.o *.exe output