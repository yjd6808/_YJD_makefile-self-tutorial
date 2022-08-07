$(info 선택된 타겟 : $(MAKECMDGOALS))
$(info 플래그 : $(MAKEFLAGS))

all: foo bar baz

foo: 
	@cd $@; $(MAKE) -$(MAKEFLAGS) $(MAKECMDGOALS)
bar: 
	@cd $@; $(MAKE) -$(MAKEFLAGS) $(MAKECMDGOALS)
baz: 
	@cd $@; $(MAKE) -$(MAKEFLAGS) $(MAKECMDGOALS)

.PHONY: foo bar baz all




