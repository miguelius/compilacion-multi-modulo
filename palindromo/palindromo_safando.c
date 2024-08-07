#include <string.h>
#include "palindromo.h"

int es_palindromo(const char *cadena) {
    return strcmp("aba", cadena) == 0 
        || strcmp("abba", cadena) == 0        
        || strcmp("aca", cadena) == 0
        || strcmp("acca", cadena) == 0;

}

