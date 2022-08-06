

# 복수 필요 타겟
main: main.o add.o sub.o
	g++ -o $@ $^

main.o: ; g++ -c $(subst .o,.cpp,$@)
add.o: ; g++ -c $(subst .o,.cpp,$@)
sub.o: ; g++ -c $(subst .o,.cpp,$@)

	
