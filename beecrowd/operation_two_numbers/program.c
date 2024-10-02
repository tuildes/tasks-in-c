// Includes de todo o projeto
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Defines de todo o projet
#define BEECROWD_EXERCISE 1024
#define SUM(a, b) (a + b)
#define PRODUCT(a,b) (a * b)

// Global variables

// Functions
/**
 *  Function name
 *  Function description
 *
 *  @param { type } name - use
 *  @return { type } - use
 * 
 **/

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    int a, b;

    scanf("%d%d", &a, &b);
    printf("SOMA = %d\n", SUM(a,b));
    printf("PROD = %d\n", PRODUCT(a,b));

    return 0;
}
