/**
 *  TABELA DE CONVENCOES
 *  ------------------------------------
 *  MACRO - MACRO_NAME
 *  FUNCOES - function_name()
 *  FUNCOES INDIRETAS - _function_name()
 *  VARIAVEIS - variableName
 *  STRUCTS - StructName
 *  ------------------------------------
 *
 *  Function name
 *  Function description
 *
 *  @param { type } name - use
 *  @returns { type } - use 
 *
 * */

// Includes de todo o projeto
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Defines de todo o projeto
#define BEECROWD_EXERCISE 1096

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    short int j = 7;

    for (short int i = 1; i < 10; i += 2, j += 2) {
        printf("I=%hd J=%hd\n", i, j);
        printf("I=%hd J=%hd\n", i, (j - 1));
        printf("I=%hd J=%hd\n", i, (j - 2));
    }

    return 0;
}
