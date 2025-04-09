#define MASK_SIZE 4;

// Array size of masked == string
char *maskify (char *masked, const char *string) {
  unsigned int lenght = 0;
  
  // Pega o tamanho da sua palavra
  for (unsigned int i = 0; string[i] != '\0'; i++)
    lenght++;
  
  // Finaliza a palavra
  masked[lenght] = '\0';
  if (lenght <= MASK_SIZE) {
    
    for (unsigned int i = 0; i < lenght; i++)
      masked[i] = string[i];
    
  } else {
    
    // Coloca a mascara
    for (unsigned int i = 0; i < (lenght - MASK_SIZE); i++)
      masked[i] = '#';
    
    for (unsigned int i = 1; i <= MASK_SIZE; i++)
      masked[lenght-i] = string[lenght-i];
    
  }
  
	return masked; // return it
}

/*
 * ALGORITMO MUITO MAIS LIMPO (USANDO STRING.H)
 *
 
	#include <string.h>
	char *maskify (char *masked, const char *string) {
  		int n = strlen(strcpy(masked, string)) - 4;
  		if (n > 0) memset(masked, '#', n);
		return masked;
	}

 *
 * */
