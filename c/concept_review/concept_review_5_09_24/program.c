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

// Datatype library -> uint32
// int -> palavra -> 32 bits -> 4 byte
// long -> tamanho de um endereco -> tamanho de ponteiro -> geralmente 4 bytes
// pointeiro -> tamanho 8 bytes
// Includes de todo o projeto

// structs => deixar mesmos tipos em seguida

#include <stdio.h>
#include <stdlib.h>

// Defines de todo o projeto

int main (/* int argc, char *argv[] */) {

	unsigned char vetor_char[4] = {0,0,0,0};

	unsigned int *pnt_int;

	// int *ptr = (int*) malloc(4*sizeof(int));

	pnt_int = (unsigned int*) vetor_char;

	*pnt_int = 512;

	printf("vetor_char: %d %d\n", vetor_char[0], vetor_char[1]);	
	printf("pnt_int: %d\n", *pnt_int);

    return 0;
}
