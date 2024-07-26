// Includes de todo o projeto
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Defines de todo o projet
#define BEECROWD_EXERCISE 1024
#define PI 3.14159

// Global variables

// Functions
/**
 *  Método que calcula a área do círculo
 *
 *  @param { double } ray - Raio do circulo
 *  @return { double } - Area do circulo usando o PI do define
 * 
 **/
double circle_area (double ray) { return (round(PI * ray * ray * 10000) / 10000); }

int main (/* int argc, char *argv[] */) {

    printf("Exercício da beecrowd: %d\n\n", BEECROWD_EXERCISE);

    double ray;

    scanf("%lf", &ray);
    printf("A=%.4lf\n", circle_area(ray));

    return 0;
}
