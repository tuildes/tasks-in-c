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
#define BEECROWD_EXERCISE 1010

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

    unsigned int code, amount;
    unsigned int code2,  amount2;
    float price, price2;

    scanf("%d%d%f", &code, &amount, &price);
    scanf("%d%d%f", &code2, &amount2, &price2);
    printf("VALOR A PAGAR = R$ %.2f\n", ((price * amount) + (price2 * amount2)));

    return 0;
}
