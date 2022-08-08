CXX := g++
CXXFLAGS := -Wall

OUT_BIN_DIR := $(CURDIR)/out/bin/
OUT_LIB_DIR := $(CURDIR)/out/lib/

export OUT_BIN_DIR
export OUT_LIB_DIR

all: main

main: main.o add sub
	$(CXX) $< -L$(OUT_LIB_DIR) $(foreach lib,$(filter-out %.o,$^),-l$(lib) ) -o $(OUT_BIN_DIR)$@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

add: ; cd adder; $(MAKE) $(MAKECMDGOALS)
sub: ; cd suber; $(MAKE) $(MAKECMDGOALS)

clean: add sub
	rm -f *.o $(OUT_BIN_DIR)* $(OUT_LIB_DIR)*


