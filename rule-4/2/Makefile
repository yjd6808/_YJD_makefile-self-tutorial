

# 복수 필요 타겟
main: main.o add.o sub.o
	g++ -o $@ $^

main.o add.o sub.o: 
	g++ -c $(subst .o,.cpp,$@)



	
