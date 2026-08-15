int prefixCount(char** words, int wordsSize, char* pref) {
    int total = 0, j;

    for (int i = 0; i < wordsSize; i++) {
        j = 0;
        while (pref[j] != '\0') {
            if ((words[i][j] == '\0') || (words[i][j] != pref[j])) {
                total -= 1;
                break;
            }

            j++;
        }
        
        total += 1;
    }

    return total;
}
