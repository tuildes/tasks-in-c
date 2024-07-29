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
#define BEECROWD_EXERCISE 1037

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);
    
    float number;

    scanf("%f", &number);

    if (number >= 0 && number <= 25)
        printf("Intervalo [0,25]\n");
    else if (number > 25 && number <= 50)
         printf("Intervalo (25,50]\n");
    else if (number > 50 && number <= 75)
        printf("Intervalo (50,75]\n");
    else if (number > 75 && number <= 100)
         printf("Intervalo (75,100]\n");
    else
         printf("Fora de intervalo\n");

    return 0;
}
