all:
	g++ -c add_extension.cpp
	g++ -shared -o libadd.so add_extension.o 
	g++ -c main.cpp
	g++ -L. main.o -ladd -Wl,-rpath=$(CURDIR) -o main
