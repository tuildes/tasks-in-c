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

// Defines de todo o projeto
#define BEECROWD_EXERCISE 1253
#define MAX_STR_LENGHT 51

void cesar_cipher(char *original, char *crypted, unsigned int cipher) {

    char temp;

    while(*original != '\0') {
        temp = *original - cipher;
        if (temp < 'A') temp += 26;
        *crypted = temp;
        
        original++;
        crypted++;
    }

    *crypted = '\0';
}

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);
    
    unsigned int amount, cipher;
    char original[MAX_STR_LENGHT], crypted[MAX_STR_LENGHT];

    scanf("%u", &amount); 

    for (unsigned int i = 0; i < amount; i++) {
        scanf("%50s %u", original, &cipher);
        cesar_cipher(original, crypted, cipher);
        printf("%s\n", crypted);
    }

    return 0;
}
