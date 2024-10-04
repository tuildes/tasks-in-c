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

#define PI 3.141592654

int main (/* int argc, char *argv[] */) {

    double b, c, ang;

    printf("Coloque o valor de B, C e o angulo de A\t");
    scanf("%lf %lf %lf", &b, &c, &ang);

    ang = ((ang * PI) / 180);

    printf("a² = b² + c² - 2bc*cosA\n");
    printf("a = %.3lf\n", sqrt(((b*b) + (c*c) - (2*b*c*cos(ang)))));

    return 0;
}
