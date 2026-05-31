// word1 = ["ab", "c"], word2 = ["a", "bc"]

// Seek divergence
bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int index1 = 0, index2 = 0,
        innerIndex1 = 0, innerIndex2 = 0;

    while ((index1 < word1Size) && (index2 < word2Size)) {
        if (word1[index1][innerIndex1] != word2[index2][innerIndex2]) return false;

        // Update indexs
        innerIndex1++;
        innerIndex2++;

        if (word1[index1][innerIndex1] == '\0') {
            index1++;
            innerIndex1 = 0;
        }
        if (word2[index2][innerIndex2] == '\0') {
            index2++;
            innerIndex2 = 0;
        }
    }

    // Characters or words left over
    if ((innerIndex1 != 0)    || (innerIndex2 != 0) ||
        (index1 != word1Size) || (index2 != word2Size)) return false;

    return true;
}
