#include <string.h>
#include <sdtio.h>

char *get_middle(char outp[3], const char *inp) {
  
	// Variaveis
    unsigned int lenght = 0; // Tamanho da entrada
  
	// Descobre o tamanho
    for (unsigned int i = 0; inp[i] != '\0'; i++)
      lenght++;
  
    // Caso impar
    if ((lenght % 2) == 1) {
      outp[0] = inp[(lenght-1)/2];
      outp[1] = '\0';
    } else { // Caso par (duas letras no meio)
      outp[0] = inp[(lenght-1)/2];
      outp[1] = inp[((lenght-1)/2)+1];
      outp[2] = '\0';
    }
  
    return outp;
}
