/**
 *  TABELA DE CONVENCOES
 *  ------------------------------------
 *  MACRO - MACRO_NAME
 *  FUNCOES - function_name()
 *  FUNCOES INDIRETAS - _function_name()
 *  VARIAVEIS - variableName
 *  STRUCTS - StructName
 *  ------------------------------------
 * */

// Includes de todo o projeto
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Defines de todo o projet
#define BEECROWD_EXERCISE 2006

// Global variables

/**
 *  Function name
 *  Function description
 *
 *  @param { type } name - use
 *  @return { type } - use
 * 
 **/
// Function

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    unsigned int type, choose, total;

    total = 0;
    scanf("%d", &type);

    for (unsigned int i = 0; i < 5; i++) {
        scanf("%d", &choose);
        if (choose == type) total++;
    }

    printf("%d\n", total);

    return 0;
}
