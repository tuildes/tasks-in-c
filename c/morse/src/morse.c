#include "include/morse.h"

void print_help (const char *programName) {
    printf(
        "Usage: %s <operation> <input text>\n"
        "Operations:\n"
        "\tenc - Encode a text in morse\n"
        "\tdec - Decode a morse text\n"
        , programName);
}

void print_morse_char (const char c) {
    const char upper_c = toupper(c);

    switch (upper_c) {

        case 'A': printf(".-"   ); break;
        case 'B': printf("-..." ); break;
        case 'C': printf("-.-." ); break;
        case 'D': printf("-.."  ); break;
        case 'E': printf("."    ); break;
        case 'F': printf("..-." ); break;
        case 'G': printf("--."  ); break;
        case 'H': printf("...." ); break;
        case 'I': printf(".."   ); break;
        case 'J': printf(".---" ); break;
        case 'K': printf("-.-"  ); break;
        case 'L': printf(".-.." ); break;
        case 'M': printf("--"   ); break;
        case 'N': printf("-."   ); break;
        case 'O': printf("---"  ); break;
        case 'P': printf(".--." ); break;
        case 'Q': printf("--.-" ); break;
        case 'R': printf(".-."  ); break;
        case 'S': printf("..."  ); break;
        case 'T': printf("-"    ); break;
        case 'U': printf("..-"  ); break;
        case 'V': printf("...-" ); break;
        case 'W': printf(".--"  ); break;
        case 'X': printf("-..-" ); break;
        case 'Y': printf("-.--" ); break;
        case 'Z': printf("--.." ); break;

        case '1': printf(".----"); break;
        case '2': printf("..---"); break;
        case '3': printf("...--"); break;
        case '4': printf("....-"); break;
        case '5': printf("....."); break;
        case '6': printf("-...."); break;
        case '7': printf("--..."); break;
        case '8': printf("---.."); break;
        case '9': printf("----."); break;
        case '0': printf("-----"); break;

        case ' ': printf("/"); break;

        default:
            break;
    }

    printf(" ");
}

void encode_to_morse (const char *text) {
    const unsigned int text_len = strlen(text);

    for (unsigned int i = 0; i < text_len; i++) {
        print_morse_char(text[i]);
    }
}
