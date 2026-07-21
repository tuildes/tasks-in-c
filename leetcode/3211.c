#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool verifyIfExitsInArray(char* strings[], int length, char* target) {
    if (length < 1) { return false; }

    for (int i = 0; i < length; i++)
        if (!(strcmp(strings[i], target))) { return true; }

    return false;
}

void createString(char** strings, int *actualIndex, char* tempString, char actualChar, int pos, int max, bool hasOne) {
    if (pos > max) {
        if (!hasOne) { return; }
        if (verifyIfExitsInArray(strings, (*actualIndex), tempString)) { return; }

        strings[(*actualIndex)] = malloc(sizeof(char) * (pos + 1));
        strcpy(strings[(*actualIndex)], tempString);
        (*actualIndex) += 1;

        return;
    }

    tempString[pos] = actualChar;

    if (actualChar != '0') { createString(strings, actualIndex, tempString, '0', (pos + 1), max, hasOne); }
    createString(strings, actualIndex, tempString, '1', (pos + 1), max, true);
}

char** validStrings(int n, int* returnSize) {
    char **res = malloc(sizeof(char*) * (1 << n)),
         *tempString = malloc(sizeof(char) * (n + 1));
    if ((res == NULL) || (tempString == NULL)) { return NULL; }
    *returnSize = 0;

    tempString[n] = '\0';
    createString(res, returnSize, tempString, '0', 0, (n - 1), false);
    createString(res, returnSize, tempString, '1', 0, (n - 1), true);

    free(tempString);
    return res;
}

int main() {
    int resLength = 0, n = 5;
    char **res = validStrings(n, &resLength);

    for (int i = 0; i < resLength; i++) {
        printf("%s ", res[i]);
        free(res[i]);
    }

    printf("\n");
    free(res);

    return 0;
}
