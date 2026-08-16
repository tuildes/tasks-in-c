#include <logger.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

static void switch_position(char *arr, unsigned int a, unsigned int b) {
    char temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

char *encrypt_this(const char *str) {
    unsigned int length = strlen(str), actualIndex = 0, firstChar = 0;
    bool newWord = true;
    char* result = (char*)malloc(sizeof(char) * (length + 64));
    if (result == NULL) { return NULL; }

    for (unsigned int i = 0; i <= length; i++) {
        if ((str[i] == ' ') || (str[i] == '\0')) {
            newWord = true;
            if (firstChar < actualIndex) {
                switch_position(result, firstChar, (actualIndex - 1));
                firstChar = actualIndex;
            }
            continue;
        }

        if (newWord) {
            if (actualIndex != 0) {
                result[actualIndex++] = ' ';
            }

            char temp = str[i];
            for (char mult = 100; mult; mult /= 10) {
                if (mult > temp) { continue; }
                result[actualIndex++] = (((temp / mult) % 10) + '0');
            }
            firstChar = actualIndex;
            newWord = false;
            continue;
        }

        result[actualIndex++] = str[i];
    }

    result[actualIndex] = '\0';
    return result;
}

static bool do_test(const char *str, const char *expected) {
    char *actual = encrypt_this(str);
    if (!actual) { 
        logging_console(LOG_DEBUG, "(%s) - expected: \"%s\", result: NULL", str, expected);
        return false;
    };

    int result = strcmp(actual, expected);
    logging_console(LOG_DEBUG, "(%s) - expected: \"%s\", result: \"%s\"", str, expected, actual);

    free(actual);
    return (result == 0);
}

int main(void) {
    logging_testing("Test 01", do_test("", ""));
    logging_testing("Test 02", do_test("A", "65"));
    logging_testing("Test 03", do_test("Ab", "65b"));
    logging_testing("Test 04", do_test("Abcd", "65dcb"));
    logging_testing("Test 05", do_test("  Abcd   Abcd", "65dcb 65dcb"));
    logging_testing("Test 06",  do_test("Abcd Aahhhhhhhhhhhhhhhhz", "65dcb 65zhhhhhhhhhhhhhhhha"));
    logging_testing("Test 07", do_test(" Hello world ", "72olle 119drlo"));
    return 0;
}
