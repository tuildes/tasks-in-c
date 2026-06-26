char* truncateSentence(char* s, int k) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            k--;
            if (!k) {
                s[i] = '\0';
            }
        }
    }

    return s;
}
