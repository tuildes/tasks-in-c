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
#define BEECROWD_EXERCISE 1847

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (((A > B) && (B <= C)) ||
        ((A < B) && (B < C) && ((C - B) >= (B - A))) ||
        ((A > B) && (B > C) && ((A - B) > (B - C))) ||
        ((A == B) && (B <= C)))
    {
        printf(":)\n");
        return 0;
    }

    printf(":(\n");

    return 0;
}
