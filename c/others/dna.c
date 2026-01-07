#include <stdio.h>
#include <stdlib.h>

#define YELLOW "\033[0;33m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define RED "\033[0;31m"

#define CLEAR "\033[0;37m"

// Faz a fita copia do DNA
// Faz uma ALOCACAO DINAMICA propria
char *dna_strand(const char *dna) {

	unsigned int dnaLenght = 0;
	char *dnaStrand;

	// Pega o tamanho do array dna
	for (unsigned int i = 0; dna[i] != '\0'; i++)
		dnaLenght++;

	// Nao verifica se o dna ja existia (refaz o malloc)
	if ((dnaStrand = malloc (dnaLenght * sizeof(char))) == NULL)
		return NULL;

	for (unsigned int i = 0; i <= dnaLenght; i++) {
		switch (dna[i]) {
			case 'a':
			case 'A':
				dnaStrand[i] = 'T';
				break;
			case 't':
			case 'T':
			case 'u':
			case 'U':
				dnaStrand[i] = 'A';
				break;
			case 'c':
			case 'C':
				dnaStrand[i] = 'G';
				break;
			case 'g':
			case 'G':
				dnaStrand[i] = 'C';
				break;
			default:
				dnaStrand[i] = 'n';
				break;
		}
	}

	dnaStrand[dnaLenght] = '\0';

    return dnaStrand;
}

void print_nucleotide (char nucleotide, char *color) {
	printf("%s%c%s", color, nucleotide, CLEAR);
} 

// Imprime a FITA de DNA
// Com cores
void print_dna (const char *target, const char *dnaName) {

	printf("DNA (%.*s): ", 4, dnaName);
	for (unsigned int i = 0; target[i] != '\0'; i++) {
		switch (target[i]) {
			case 'a':
			case 'A':
				print_nucleotide(target[i], YELLOW);
				break;
			case 't':
			case 'T':
			case 'u':
			case 'U':
				print_nucleotide(target[i], GREEN);
				break;
			case 'c':
			case 'C':
				print_nucleotide(target[i], BLUE);
				break;
			case 'g':
			case 'G':
				print_nucleotide(target[i], RED);
				break;
			default:
				print_nucleotide('_', CLEAR);
				break;
		}

		if (((i + 1) % 3) == 0) printf(" ");
	}
	printf("\n");

}

int main () {

	//const char *target = "AAATTTCCCGGGATCGUWKKATC";
	const char *target = "tcgtctgtgaatccattgcggagcggagtgaatcgagccacgatgtcattataaaaaaccggggtgtcgtacttcccattgaacttagaaaaaaacaaat";

	char *dnaStrand;

	dnaStrand = dna_strand(target);

	print_dna(target, "Original");
	print_dna(dnaStrand, "Copy");

	free (dnaStrand);

	return 0;
}
