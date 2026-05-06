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
#define BEECROWD_EXERCISE 1239

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    char original[51];
    char web[200];

    int italic, bold;
    unsigned int i, j;

    while (scanf("%50[^\n]", original) != EOF) {
        getchar();

        i = 0;
        j = 0;
        italic = 1;
        bold = 1;

        while(original[j] != '\0') {
    
            if (original[j] == '_') {
                web[i++] = '<';
                if (italic == (-1))
                   web[i++] = '/';
            
                italic *= (-1);
                web[i++] = 'i';
                web[i++] = '>';
            
            } else if (original[j] == '*') {

                web[i++] = '<';

                if (bold == (-1))
                    web[i++] = '/';
            
                bold *= (-1);
                web[i++] = 'b';
                web[i++] = '>';

            } else
                web[i++] = original[j];
        
            j++;
        }

        web[i] = '\0';
        printf("%s\n", web);

    }

    return 0;
}
