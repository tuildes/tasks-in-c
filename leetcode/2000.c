char* reversePrefix(char* word, char ch) {
    char temp;
    for (int i = 0; word[i] != '\0'; i++) {
        // Reverse prefix
        if (word[i] == ch) {
            for (int j = 0; j <= (i >> 1); j++) {
                temp = word[i - j];
                word[i - j] = word[j];
                word[j] = temp;
            }

            break;
        }
    }

    return word;
}
