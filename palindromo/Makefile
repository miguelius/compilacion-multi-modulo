all: palindromo_tests palindromos
	./palindromo_tests

clean:
	rm -f *.o palindromo_tests palindromos

palindromos: palindromo_safando.o
	gcc palindromos.c palindromo_safando.o -o palindromos

palindromo_tests: palindromo_safando.o palindromo_tests.c
	gcc palindromo_tests.c palindromo_safando.o -o palindromo_tests

palindromo_safando.o: palindromo_safando.c
	gcc -c -o palindromo_safando.o palindromo_safando.c

