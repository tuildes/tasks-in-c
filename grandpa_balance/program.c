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
#define BEECROWD_EXERCISE 2434

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

    int N, balance, smallerBalance, actualBalance;

    scanf("%d%d", &N, &smallerBalance);
    actualBalance = smallerBalance;

    for (int i = 1; i <= N; i++) {
        scanf("%d", &balance);
        actualBalance += balance;
        if (actualBalance < smallerBalance) smallerBalance = actualBalance;
    }

    printf("%d\n", smallerBalance);

    return 0;
}
