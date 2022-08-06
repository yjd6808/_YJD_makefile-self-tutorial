CPP_1 	:= $(wildcard *.cpp)
CPP_2   := $(shell find -maxdepth 1 -name '*.cpp')

OBJ_1	:= $(CPP_1:%.cpp=%.o)
OBJ_2	:= $(subst .cpp,.o,$(CPP_2))

$(info CPP_1 : $(CPP_1))
$(info CPP_2 : $(CPP_2))

$(info OBJ_1 : $(OBJ_1))
$(info OBJ_2 : $(OBJ_2))

