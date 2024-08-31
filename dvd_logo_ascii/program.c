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

// Includes de todo o projeto
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

// Limpar a tela
#define clrscr() printf("\e[1;1H\e[2J")

// Defines de AMBIENTE
#define DVD_CHAR    35
#define BLANK_CHAR  34
#define HEIGHT      10
#define WIDTH       5

// Defines de TICKS e intervalo de execucao
#define MAX_TICK    1000
#define INTERVAL    1 // EM SEGUNDOS

void fill_screen(char screen[WIDTH][HEIGHT]) {
    for (unsigned short int i = 0; i < WIDTH; i++)
        for (unsigned short int j = 0; j < HEIGHT; j++)
            screen[i][j] = BLANK_CHAR;

    screen[0][0] = DVD_CHAR;
}

void print_screen(char screen[WIDTH][HEIGHT]) {
    for (unsigned short int i = 0; i < WIDTH; i++) {
        for (unsigned short int j = 0; j < HEIGHT; j++)
            printf("%c", screen[i][j]);
        printf("\n");
    }
}

void tick_screen(char screen[WIDTH][HEIGHT], int *vertical, int *horizontal,
                 int *xPos, int *yPos) {
    
    if (((*xPos + *horizontal) == (-1)) || ((*xPos + *horizontal) == WIDTH))
        *horizontal *= (-1);

    if (((*yPos + *vertical) == (-1)) || ((*yPos + *vertical) == HEIGHT))
        *vertical *= (-1);

    screen[*xPos][*yPos] = BLANK_CHAR;

    *xPos += *horizontal;
    *yPos += *vertical;

    screen[*xPos][*yPos] = DVD_CHAR;
}

int main (/* int argc, char *argv[] */) {

    char screen[WIDTH][HEIGHT];
    int vertical, horizontal, xPos, yPos;
    unsigned int ticks = 0;

    vertical = (-1); // Inicia indo para baixo
    horizontal = 1; // Inicia indo para direita
    
    xPos = 0; // Posicao do DVD
    yPos = 0; // Posicao do DVD

    fill_screen(screen);

    while (ticks < MAX_TICK) {
        clrscr();
        print_screen(screen);
        tick_screen(screen, &vertical, &horizontal, &xPos, &yPos);
        ticks++;
        sleep(INTERVAL);
    }

    return 0;
}
