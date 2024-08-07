#include <stdio.h>
#include "palindromo.h"

int main(int argc, const char **argv) {
    if (argc == 1) {
        puts("uso: ./palindromos palabras+");
        puts("");
        puts("\tImprime las palabras que son palíndromo.");
    }

    for (int i = 0; i < argc; ++i) {
        if (es_palindromo(argv[i])) {
            puts(argv[i]);
        }
    }

    return 0;
}
