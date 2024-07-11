#include <stdio.h>
#include <stdint.h> // Tipos de inteiros
#include <string.h>

// Defines de cores
#define YELLOW "\033[0;33m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define RED "\033[0;31m"
#define CLEAR "\033[0;37m" // Limpa as cores

// Todos os aminoacidos
// Array size = 64 + 1 (err)
// A (0), U(1), C(2), G(3)
const char aminoacids[65][4] = 
	{
		// Fallback (invalido): [0]
		"___",

		// Primeiro nucleotídeo A [1..16]
		"Lys", "Asn", "Asn", "Lys", // AA...
		"Lle", "Lle", "Lle", "Met", // AU...
		"Thr", "Thr", "Thr", "thr", // AC...
		"Arg", "Ser", "Ser", "Arg", // AG...
						
		// Primeiro nucleotídeo U [17..32]
		"END", "Tyr", "Tyr", "END", // UA...
		"Leu", "Phe", "Phe", "Leu", // UU...
		"Ser", "Ser", "Ser", "Ser", // UC...
		"END", "Cys", "Cys", "Trp", // UG...
						
		// Primeiro nucleotídeo C [33..48]
		"Gln", "His", "His", "Gln", // CA...
		"Leu", "Leu", "Leu", "Leu", // CU...
		"Pro", "Pro", "Pro", "Pro", // CC...
		"Arg", "Arg", "Arg", "Arg", // CG...
						
		// Primeiro nucleotídeo G [49..64]
		"Glu", "Asp", "Asp", "Glu", // GA...
		"Val", "Val", "Val", "Val", // GU...
		"Ala", "Ala", "Ala", "Ala", // GC...
		"Gly", "Gly", "Gly", "Gly"  // GG...
	};

// Retorna a posicao de cada nucleotideo
size_t nucleotideIndex (char nucleotide) {
	switch (nucleotide) {
		case 'A': return 0;
		case 'U': return 1;
		case 'C': return 2;
		case 'G': return 3;
		default : return 65; // Error value
	}
}

// Pega uma tripla e retorna sua posicao no array
size_t getAminoAcidIndex (const char *rna, size_t start) {

	const size_t result = (
			(nucleotideIndex(rna[start]) 		* 16) 	+
			(nucleotideIndex(rna[(start+1)]) 	* 4	)	+
			(nucleotideIndex(rna[(start+2)]))		);
	
	if (result >= 65) return 0;
	return (result + 1); // Remover a primeira posicao de erro

}

void print_codon (size_t index) {

	if (index == 0) {
		printf("%s%s %s", RED, "___", CLEAR);
		return;
	}

	if (index == 8) {
		printf("%s%s %s", GREEN, aminoacids[index], CLEAR);
		return;
	}

	if ((index == 17) || (index == 20) || (index == 29)) {
		printf("%sEND %s", YELLOW, CLEAR);
		return;
	}

	printf("%s ", aminoacids[index]);
}

// Imprime a proteina
void proteinMaker (const char *rna) {

	size_t length = strlen(rna);
	length = ((length / 3) * 3); // Remover nucleotideos sem triplas

	printf("Protein:\t");
	for (size_t i = 0; i < length; i = (i + 3))
		print_codon(getAminoAcidIndex(rna, i));
	printf("\n");
}

void print_nucleotide (char nucleotide, char *color) {
        printf("%s%c%s", color, nucleotide, CLEAR);
}

// Imprime a FITA de RNA
void print_rna (const char *target, const char *rnaName) {

        printf("RNA (%.*s):\t", 4, rnaName);
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
	
	const char *rna = 
		"CCGAUGUCGAUAAGUCCCACGGUGUAAUCUUUCAGCACGCAAGGCCCGCCUGUAAAAUUNGCNNNNNNNNN";

	print_rna (rna, "original");

	proteinMaker(rna);

	return 0;
}
