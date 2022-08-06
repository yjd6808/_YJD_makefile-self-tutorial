VAR1 := b.cpp
VAR2 := c.cpp 

RESULT := 	$(if $(filter $(VAR1),$(VAR2)),		\
				equal value,					\
				not equal value  				\
			)

test1:
	@echo $(RESULT)

VAR1 :=  
VAR2 := var2
VAR3 := var3

RESULT :=	$(or $(VAR1),$(VAR2),$(VAR3))

test2:
	@echo $(RESULT)

VAR1 :=  
VAR2 := var2
VAR3 := var3
RESULT1 :=	$(and $(VAR1),$(VAR2),$(VAR3))

VAR1 := var1
VAR2 := var2
VAR3 := var3
RESULT2 :=	$(and $(VAR1),$(VAR2),$(VAR3))

test3:
	@echo --$(RESULT1)==
	@echo --$(RESULT2)==
