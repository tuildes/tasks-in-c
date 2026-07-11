char* maximumOddBinaryNumber(char* s) {
    char *res = malloc(sizeof(char) * (strlen(s) + 1));
    int totalOnes = 0;
    int resIndex = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '1') { totalOnes++; }
    }

    for (; resIndex < (strlen(s) - 1); resIndex++) {
        if (totalOnes > 1) {
            res[resIndex] = '1';
            totalOnes--;
        } else {
            res[resIndex] = '0';
        }
    }

    res[resIndex++] = '1';
    res[resIndex++] = '\0';

    return res;
}
