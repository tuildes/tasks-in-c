#include <stdio.h>

#include "include/morse.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        print_help(argv[0]);
        return 1;
    }

    // === Encode to Morse ===
    if((strcmp(argv[1], "enc") == 0) || (strcmp(argv[1], "encode") == 0))  {
        encode_to_morse(argv[2]);
        return 0;
    }

    // === Decode morse to text ===
    if((strcmp(argv[1], "dec") == 0) || (strcmp(argv[1], "decode") == 0))  {
        return 0;
    }

    // === Fallback Error ===
    printf("ERROR: Input invalid\n\n");
    print_help(argv[0]);
    return 1;
}
