int charToIntIgnoringUppercase(char c) {
    if (c >= 'a') { return (int)(c - 'a'); }
    return (int)(c - 'A');
}

int countKeyChanges(char* s) {
    int totalChanges = 0, lastKey = 0, actualKey;

    lastKey = charToIntIgnoringUppercase(s[0]);
    for (int i = 1; s[i] != '\0'; i++) {
        actualKey = charToIntIgnoringUppercase(s[i]);
        if (actualKey != lastKey) { totalChanges++; }
        lastKey = actualKey;
    }

    return totalChanges;
}
