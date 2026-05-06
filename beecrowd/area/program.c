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
#define BEECROWD_EXERCISE 1012
#define PI 3.14159

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    // Variaveis
    double a, b, c;
    
    // Entrada dos elementos
    scanf("%lf %lf %lf", &a, &b, &c);
    
    // Areas
    printf("TRIANGULO: %.3lf\n", ((a * c) / 2));
    printf("CIRCULO: %.3lf\n", (PI * c * c));
    printf("TRAPEZIO: %.3lf\n", (((a + b) * c) / 2));
    printf("QUADRADO: %.3lf\n", (b * b));
    printf("RETANGULO: %.3lf\n", (a * b));

    return 0;
}
