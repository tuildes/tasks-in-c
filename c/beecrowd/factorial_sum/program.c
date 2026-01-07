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
#define BEECROWD_EXERCISE 1161

long long unsigned int factorial(unsigned int n) {
    long long unsigned int result = 1;
    for(unsigned int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    unsigned int n, m;
    long long unsigned int result;

    // Verifica se tem linhas
    while ((scanf("%u %u", &n, &m) != EOF)) {
        result = (factorial(n) + factorial(m));
        printf("%llu\n", result);
    }

    return 0;
}
