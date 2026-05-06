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
#define BEECROWD_EXERCISE 1040

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    double n1, n2, n3, n4, final, average;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    average = (((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10);

    // Saida
    printf("Media: %.1lf\n", average);

    // Verifica se aprovado ou nao
    if (average >= 7.0) {
        printf("Aluno aprovado.\n");
        return 0;
    }

    // Verifica se reprovado
    if (average < 5.0) {
        printf("Aluno reprovado.\n");
        return 0;
    }

    // Caso de exame final
    printf("Aluno em exame.\n");
    scanf("%lf", &final);
    printf("Nota do exame: %.1lf\n", final);

    average = ((final + average) / 2);

    if (average >= 5.0)
        printf("Aluno aprovado.\n");
    else
        printf("Aluno reprovado.\n");

    printf("Media final: %.1lf\n", average);
    
    return 0;
}
