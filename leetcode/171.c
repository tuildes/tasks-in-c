int titleToNumber(char* columnTitle) {
    int res = 0;

    for (int i = 0; columnTitle[i] != '\0'; i++) {
        res *= 26;
        res += (columnTitle[i] - 64);
    }

    return res;
}
