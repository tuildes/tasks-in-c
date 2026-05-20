int maxFreqSum(char* s) {
    int maxVowel = 0;
    int maxConsoants = 0;
    int actual;

    for (char target = 'a'; target <= 'z'; target++) {
        actual = 0;

        for (int i = 0; s[i] != '\0'; i++)
            if (s[i] == target)
                actual++;

        if ((target == 'a') || (target == 'e') || (target == 'i') ||
            (target == 'o') || (target == 'u')) {

            if (maxVowel < actual) { maxVowel = actual; }
        }
        else {
            if (maxConsoants < actual) { maxConsoants = actual; }
        }
    }

    return (maxVowel + maxConsoants);
}
