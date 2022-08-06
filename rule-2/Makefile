main: main.o
	g++ -o $@ $<

main.o: main.cpp
	g++ -c $<

main.cpp:
	if ! test -f $@; then echo 'int main() { return 0; }' > $@; fi

