/* 
O arquivo file.bin contem um trecho de um poema. Cada caracter do texto está codificado em 5 bytes, sendo 4 bytes para a posição do catacter no texto e 1 byte para o caracter. Por exemplo, a sequencia de bytes com o conteúdo 64n indica que o caracter 'n' deve ser colocado na posição 64 da string de texto. Escreva um programa em C que decodifique a mensagem contida no aquivo file.bin e a imprima na tela
*/

// Includes de todo o projeto
#include <stdio.h>

#define PATH_FILE "file.bin"
#define TOTAL_CHAR 340

int main (/* int argc, char *argv[] */) {

	char text[(TOTAL_CHAR + 1)];
	FILE *archive;
	int aux1;
	char aux2;

	archive = fopen(PATH_FILE, "r");

	if (archive == NULL) {
		printf("Erro ao abrir arquivo! Abortando...\n");
		return 1;
	}

	for(unsigned int i = 0; i < TOTAL_CHAR; i++) {
		fread(&aux1, sizeof(int), 1, archive);
		fread(&aux2, sizeof(char), 1, archive);
		text[aux1] = aux2;
	}

	text[TOTAL_CHAR] = '\0'; // Terminador da STRING

	printf("%s\n", text);

	fclose(archive);

    return 0;
}
