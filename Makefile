output: first.o
	g++ first.o -o output
first.o: first.cpp
	g++ -c first.cpp
delete:
	-del *.o *.exe output