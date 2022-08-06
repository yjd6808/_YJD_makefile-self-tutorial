CPP_1		:= $(wildcard %.cpp)
CPP_2 		:= $(wildcard *.cpp)
CPP_3 		:= *.cpp
CPP_4       := $(shell find -maxdepth 1 -name '*.cpp')
CPP_BAR 	:= $(wildcard bar/*.cpp)
CPP_FOO 	:= $(wildcard foo/*.cpp)

$(info CPP_1 : $(CPP_1))
$(info CPP_2 : $(CPP_2))
$(info CPP_3 : $(CPP_3))
$(info CPP_4 : $(CPP_4))
$(info CPP_BAR : $(CPP_BAR))
$(info CPP_FOO : $(CPP_FOO))


%.o: %.cpp
	g++ -c %<


