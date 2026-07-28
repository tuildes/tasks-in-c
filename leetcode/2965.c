int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int* cache = calloc((gridSize * gridSize), sizeof(int));
    int* res = malloc(sizeof(int) * 2);
    if ((cache == NULL) || (res == NULL)) { return NULL; }

    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridColSize[i]; j++) {
            cache[(grid[i][j] - 1)]++;
        }
    }

    for (int i = 0; i < (gridSize * gridSize); i++) {
        if (cache[i] == 1) { continue; }
        if (cache[i] == 0) { // Missing
            res[1] = (i + 1);
        } else { // Duplicate
            res[0] = (i + 1);
        }
    }

    free(cache);
    *returnSize = 2;
    return res;
}
