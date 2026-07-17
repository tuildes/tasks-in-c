char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) {
    if ((weightsSize != 26) || (wordsSize < 1)) { return NULL; }

    unsigned int tempIndex;
    char* result = malloc(sizeof(char) * (wordsSize + 1));
    if (result == NULL) { return NULL; }

    for (int i = 0; i < wordsSize; i++) {
        tempIndex = 0;
        for (int j = 0; words[i][j] != '\0'; j++) {
            tempIndex += weights[(words[i][j] - 'a')];
            tempIndex = tempIndex % 26;
        }

        result[i] = ('z' - tempIndex);
    }

    result[wordsSize] = '\0';
    return result;
}
