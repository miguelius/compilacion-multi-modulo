#include <assert.h>      /* en relacion al directorio estándar del sistema de Includes */
#include "palindromo.h"  /* relativo al directorio en el que estoy compilando */

int main(void) {
    assert( es_palindromo("aba") == 1 );
    assert( es_palindromo("aab") == 0 );
    assert( es_palindromo("baa") == 0 );
    assert( es_palindromo("aca") == 1 );
    assert( es_palindromo("acca") == 1 );
    assert( es_palindromo("basdasd") == 0 );

    return 0;
}