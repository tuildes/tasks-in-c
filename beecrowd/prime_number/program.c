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
#define BEECROWD_EXERCISE 1165

unsigned short int isPrime(int number) {

    if (number <= 3) return 1;

    if (number % 2 == 0) return 0;

    for (int i = 3; i < number; i += 2)
        if (number % i == 0) return 0;

    return 1;
}

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    unsigned int lines;
    int number;

    scanf("%d", &lines);

    for (unsigned int i = 0; i < lines; i++) {
        scanf("%d", &number);
        if (isPrime(number)) printf("%d eh primo\n", number);
        else printf("%d nao eh primo\n", number);
    }

    return 0;
}
