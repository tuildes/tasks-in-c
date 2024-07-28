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
#define BEECROWD_EXERCISE 1036

// Retorna o valor do delta
double delta(double a, double b, double c) { 
    return ((b * b) - (4 * a * c));
}

// Retorna 1 para IMPOSSIVEL calcular
unsigned short int bhaskara(double a, double b, double c,
                            double *root1, double *root2) {

    const double deltaRes = delta(a, b, c);

    if (a == 0) return 1;
    if (deltaRes < 0) return 1;

    *root1 = ((0 - b + sqrt(deltaRes)) / (2 * a));
    *root2 = ((0 - b - sqrt(deltaRes)) / (2 * a));

    return 0;
}

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    double A, B, C;
    double R1, R2;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (bhaskara(A, B, C, &R1, &R2)) {
        printf("Impossivel calcular\n");
        return 0;
    }

    printf("R1 = %.5f\nR2 = %.5f\n", R1, R2);

    return 0;
}
