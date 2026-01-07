#ifndef MORSE_H
#define MORSE_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void print_help (const char *programName);

void encode_to_morse (const char *text);

#endif // MORSE_H
