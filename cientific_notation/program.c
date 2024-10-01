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
#include <math.h>

// Defines de todo o projeto
#define BEECROWD_EXERCISE 1958

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    double x;
    int amount = 0;
    char sinal = '+';

    scanf("%lf", &x);

    // Inverter sinal para a operacao
    if (copysign(1.0, x) < 0.0) {
        x *= (-1);
        sinal = '-';
    }

    while (((x > 10) || (x <= 1)) && (x != 0)) {
        if (x <= 1) {
            x *= 10;
            amount--;
        } else {
            x /= 10;
            amount++;
        }
    }

    printf("%c%.4lfE%c%02d\n", sinal, 
                            x, 
                            (amount >= 0) ? '+' : '-',
                            (amount < 0) ? (amount * (-1)) : amount);

    return 0;
}
