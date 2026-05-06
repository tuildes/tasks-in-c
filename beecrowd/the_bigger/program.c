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
#define BEECROWD_EXERCISE 1013

int maiorAB(int a, int b) { return ((a + b + abs((a - b))) / 2); }

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d eh o maior\n", maiorAB(c, maiorAB(a, b)));

    return 0;
}
