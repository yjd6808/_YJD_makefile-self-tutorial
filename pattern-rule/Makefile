CPP := $(shell find -name '*.cpp')
OBJ := $(CPP:.cpp=.o)

main: $(OBJ)
	g++ -o $@ $^

%.o: %.cpp 
	g++ -o $@ -c $< 

clean: ; find $(CURDIR) -name '*.o' -delete 
.PHONY := clean
