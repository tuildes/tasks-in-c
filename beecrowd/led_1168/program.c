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
#define BEECROWD_EXERCISE 1168

// Retorna quantos LEDs precisa para o digito
unsigned int _leds_required_digit(unsigned int digit) {
    switch (digit) {
        case 0:
            return 6;
        case 1:
            return 2;
        case 2:
            return 5;
        case 3:
            return 5;
        case 4:
            return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            return 3;
        case 8:
            return 7;
        case 9:
            return 6;
        default:
            return 0;
    }
}

// Retorna o total de LEDs para um numero
unsigned int leds_required(char number[]) {
    unsigned int result = 0;
    unsigned int i = 0;

    while (number[i] != '\0') {
        result += _leds_required_digit((number[i] - '0'));
        i++;
    }

    return result;
}

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    unsigned int lines;
    char number[101];

    // Verifica quantidade de numeros
    scanf("%u", &lines);

    while(lines > 0) {

        scanf("%s", number);
        printf("%u leds\n", leds_required(number));

        lines--;
    }

    return 0;
}
