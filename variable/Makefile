SHELL := /bin/bash

VAR1 := $(shell echo $$RANDOM) 
VAR2  = $(shell echo $$RANDOM) 
VAR3 ?= $(shell echo $$RANDOM)
VAR4 += $(shell echo $$RANDOM)

VAR1 += -
VAR2 += - 
VAR3 += -
VAR4 += -

gazua:
	@echo $(VAR1) $(VAR1) $(VAR1)
	@echo $(VAR2) $(VAR2) $(VAR2)
	@echo $(VAR3) $(VAR3) $(VAR3)
	@echo $(VAR4) $(VAR4) $(VAR4)


