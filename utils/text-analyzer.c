#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Return if a valid letter or digit
bool is_valid_char(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

bool is_space(char c) {
    return c == ' ' || c == '\n' || c == '\t';
}

// Returns the number of words in the given text
int count_words(const char *text) {
    int count = 0;
    bool in_word = false;

    while (*text) {
        if (is_space(*text)) {
            in_word = false;
        } else {
            if (!in_word) {
                count++;
                in_word = true;
            }
        }

        text++;
    }

    return count;
}

// Returns the number of characters in the given text
// (excluding spaces, newlines, and tabs)
int count_characters(const char *text) {
    int count = 0;

    while (*text) {
        if (!is_valid_char(*text)) {
            count++;
        }

        text++;
    }

    return count;
}

char* first_letters_of_words(const char *text) {
    static char letters[256];
    int index = 0;
    bool in_word = false;

    while (*text) {
        if (is_space(*text)) {
            in_word = false;
        } else {
            if (!in_word && is_valid_char(*text)) {
                letters[index++] = *text;
                in_word = true;
            }
        }

        text++;
    }

    letters[index] = '\0';
    return letters;
}

char *last_letters_of_words(const char *text) {
    static char letters[256];
    int index = 0;
    const char *word_start = NULL;

    while (*text) {
        if (is_space(*text) && is_valid_char(*(text - 1))) {
            if (word_start) {
                letters[index++] = *(text - 1);
                word_start = NULL;
            }
        } else {
            if (!word_start) {
                word_start = text;
            }
        }

        text++;
    }

    if (word_start) {
        letters[index++] = *(text - 1);
    }

    letters[index] = '\0';
    return letters;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <text>\n", argv[0]);
        return 1;
    }

    char *text = argv[1];
    int word_count = count_words(text);
    int char_count = count_characters(text);

    printf("Words: %d\n", word_count);
    printf("Characters: %d\n", char_count);
    printf("First letters of words: %s\n", first_letters_of_words(text));
    printf("Last letters of words: %s\n", last_letters_of_words(text));

    return 0;
}
