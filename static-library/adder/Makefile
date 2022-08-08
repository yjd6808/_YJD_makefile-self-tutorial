CPP_FILES := $(wildcard *.cpp)
OBJ_FILES := $(CPP_FILES:.cpp=.o)

add: $(OBJ_FILES)
	ar -rc $(OUT_LIB_DIR)lib$@.a $^

$(OBJ_FILES): %.o: %.cpp
	$(CXX) -o $@ -c $<

clean: ; rm -f *.o *.a




