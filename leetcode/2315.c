int countAsterisks(char* s) {
    bool isOutsidePairs = true;
    int total = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '|') { isOutsidePairs = !isOutsidePairs; }
        else if (s[i] == '*') {
            if (isOutsidePairs) { total++; }
        }
    }

    return total;
}
