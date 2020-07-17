CPP = g++ -c -std=c++11 -Wall -Werror

.PHONY: all clean

all: test

clean:
	rm -f *.o Test
test: main.o Merge.o
	g++ main.o Merge.o -o Test
main.o: main.cpp
	$(CPP)  main.cpp
Merge.o: Merge.cpp
	$(CPP) Merge.cpp
