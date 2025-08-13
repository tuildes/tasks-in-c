#include <stdio.h>
#include <stdlib.h>

void imprimir_grafo (unsigned int **grafo, unsigned int n) {

    // Cabecalho
    printf("  \033[33m");
    for(unsigned int i = 0; i < n; i++) {
        printf("%u ", i);
    }
    printf("\e[0m\n");

    // Grafo
    for(unsigned int i = 0; i < n; i++) {
        printf("\033[33m%u\e[0m ", i); // Linha
        for(unsigned int j = 0; j < n; j++) {
            printf("%u ", grafo[i][j]);
        }
        printf("\n");
    }
}

void multiplica_grafo (unsigned int **a, unsigned int **b, unsigned int n, unsigned int **c) {
    unsigned int aux = 0;
    unsigned int **res;

    // Matriz resultado vazia
    if ((res = malloc(n * sizeof(unsigned int *))) == NULL) {
        printf("Erro ao criar matriz resultado\n");
        return;
    }

    // Criar matriz resultado
    for (unsigned int i = 0; i < n; i++) {
        if ((res[i] = calloc(n, sizeof(unsigned int))) == NULL) {
            printf("Erro ao criar matriz[%u] resultado\n", i);
            return;
        }
    }

    for(unsigned int i = 0; i < n; i++) {
		for(unsigned int j = 0; j < n; j++) {
			res[i][j] = 0;

			for(unsigned int x = 0; x < n; x++) {
				aux +=  a[i][x] * b[x][j];
			}

			res[i][j] = aux;
			aux = 0;
		}
	}

    // Copiar o resultado em res
    for(unsigned int i = 0; i < n; i++) {
        for(unsigned int j = 0; j < n; j++) {
            c[i][j] = res[i][j];
        }
    }

    for (unsigned int i = 0; i < n; i++) {
        free(res[i]);
    }
    free(res);
}

int main() {
    unsigned int vertices, u, v;
    unsigned int **grafo, **aux, **res;

    if (!scanf("%u", &vertices)) { return 1; } // Entrada impossivel

    // Criar matirz
    if ((grafo = malloc(vertices * sizeof(unsigned int *))) == NULL) {
        printf("Erro ao criar matriz\n");
        return 1;
    }

    for (unsigned int i = 0; i < vertices; i++) {
        if ((grafo[i] = calloc(vertices, sizeof(unsigned int))) == NULL) {
            printf("Erro ao criar matriz[%u]\n", i);
            return 1;
        }
    }

    // Preencher grafo
    if (!scanf("%u %u", &u, &v)) { return 1; }
    while((u != 0) || (v != 0)) {
        if((u >= vertices) || (v >= vertices)) { return 1; } // Intervalo impossivel

        grafo[u][v] = 1;
        grafo[v][u] = 1;

        printf("Vertice %u ligado a %u\n", u, v);
        if (!scanf("%u %u", &u, &v)) { return 1; } // Entrada impossivel
    }

    printf("\nGrafo final:\n\n");
    imprimir_grafo(grafo, vertices);

    // Ler o ultimo par de vertices
    if (!scanf("%u %u", &u, &v)) { return 1; }

    // Verificar o menor caminho entre dois pontos
    aux = grafo;

    // Criar matriz resultado
    if ((res = malloc(vertices * sizeof(unsigned int *))) == NULL) {
        printf("Erro ao criar matriz resultado\n");
        return 1;
    }

    // Criar matriz resultado
    for (unsigned int i = 0; i < vertices; i++) {
        if ((res[i] = calloc(vertices, sizeof(unsigned int))) == NULL) {
            printf("Erro ao criar matriz[%u] resultado\n", i);
            return 1;
        }
    }

    aux = grafo;
    for(unsigned int i = 0; i < 5; i++) {
        multiplica_grafo(grafo, aux, vertices, res);

        // printf("\nGrafo de multiplicidade %u:\n\n", i);
        // imprimir_grafo(res, vertices);

        if(res[u][v] != 0) {
            printf("\nExiste o caminho entre %u e %u, sendo %u saltos\n", u, v, (i + 1));
            goto SALTO_AQUI;
        }

        aux = res;
    }

    printf("\nNao existe caminho :(\n");

SALTO_AQUI:
    // Destruir grafo
    for (unsigned int i = 0; i < vertices; i++) {
        free(grafo[i]);
        free(res[i]);
    }
    free(grafo);
    free(res);

    return 0;
}
