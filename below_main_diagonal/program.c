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
#define BEECROWD_EXERCISE 1184

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    char choose;
    float actual, total = 0;

    // Pode ser media ou soma
    scanf("%c", &choose);

    for (unsigned int i = 0; i < 144; i++) {
        scanf("%f", &actual);
        if ((i % 12) < (i / 12))
            total += actual;
    }

    if (choose == 'S') printf("%.1f\n", total);
    else printf("%.1f\n", (total / 66));

    return 0;
}
