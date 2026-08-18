#include <logger.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

char *nth_char(size_t length, const char *const strings[length], char str_out[length + 1]){
    size_t i = 0;
    for (; i < length; i++) {
        str_out[i] = strings[i][i];
    }
    str_out[i] = '\0';

    return str_out;
}
