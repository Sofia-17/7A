t: solve.o Makefile
	gcc -o t solve.o 
solve.o: solve.c fun.h Makefile
	gcc -c solve.c
clean:
	rm t solve.o
