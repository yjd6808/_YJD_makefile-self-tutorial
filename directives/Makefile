VAR1 := var
VAR2 :=
VAR3  = var

ifdef VAR2
	VAR4 := var4
endif

ifdef VAR3
	VAR5 := var5
endif

ifeq ($(VAR1),$(VAR3))	
	VAR6 := var6
endif

ifneq ($(VAR1),$(VAR3))
	VAR7 := var7
else ifeq ($(VAR1),$(VAR2))
	VAR7 := var7 great
else
	VAR7 := var7 not good
endif

test:
	@echo $(VAR1)
	@echo $(VAR2)
	@echo $(VAR3)
	@echo $(VAR4)
	@echo $(VAR5)
	@echo $(VAR6)
	@echo $(VAR7)
