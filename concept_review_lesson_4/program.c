// Includes de todo o projeto
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

    // Retorno sobre entrada
    if (argc != 2) {
        printf("Executar ./program archive_name.txt\n");
        return 1;
    }

    FILE *arquivo, *auxiliar;
    unsigned int quantidade, quantAux;
    char popular[101], atual[101], aux[101];

    arquivo = fopen(argv[1], "r");
    auxiliar = fopen(argv[1], "r");

    // Se der erro ao abrir arquivo
    if ((arquivo == NULL) || (auxiliar == NULL)) {
        printf("Erro ao abrir arquivo!\n");
	    return 1;
    }

    quantidade = 0;

    while(!feof(arquivo)) {
        fscanf(arquivo, "%s", atual);

        quantAux = 0;

        while(!feof(auxiliar)) {
            // Compara o atual 
            fscanf(auxiliar, "%s", aux);
            if(!strcmp(aux, atual)) quantAux++;
        }

        // Se for a mais popular
        if (quantAux > quantidade) {
            strcpy(popular, atual);
            quantidade = quantAux;
        }

        fseek(auxiliar, 0, SEEK_SET);

        // Resetar o ponteiro do auxiliar
    }

    printf("Palavra mais popular: %s (%u)\n", popular, quantidade);

    // Fecha o arquivo no fim
    fclose(arquivo);
    fclose(auxiliar);

    return 0;
}
