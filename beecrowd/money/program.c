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
#define BEECROWD_EXERCISE 1018

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    int money;

    scanf("%d", &money);

    printf("%d nota(s) de R$ 100,00\n", (money / 100));
    money %= 100;

    printf("%d nota(s) de R$ 50,00\n", (money / 50));
    money %= 50;

    printf("%d nota(s) de R$ 20,00\n", (money / 20));
    money %= 20;

    printf("%d nota(s) de R$ 10,00\n", (money / 10));
    money %= 10;

    printf("%d nota(s) de R$ 5,00\n", (money / 5));
    money %= 5;

    printf("%d nota(s) de R$ 2,00\n", (money / 2));
    money %= 2;

    printf("%d nota(s) de R$ 1,00\n", money);

    return 0;
}
