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
#include <string.h>

// Defines de todo o projeto
#define MAX_STRING_SIZE 500
#define SEPARADOR " "

int main (/* int argc, char *argv[] */) {

	char string[MAX_STRING_SIZE], *token;
	unsigned short int interactor = 0;

	scanf("%500[^\n]", string);
	getchar(); // Limpar o buffer

	token = strtok(string, SEPARADOR);

	do {
		printf("%hu: %s;\n", interactor, token);
		interactor++;
	} while ((token = strtok(NULL, SEPARADOR)));

    return 0;
}
