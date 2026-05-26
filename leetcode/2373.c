int maxLargestLocal(int** grid, int l, int c) {
    int maxValue = 0;

    for (int i = 1; i >= -1; i--) {
        for (int j = 1; j >= -1; j--) {
            if (grid[(l - i)][(c - j)] > maxValue)
                maxValue = grid[(l - i)][(c - j)];
        }
    }

    return maxValue;
}

int** largestLocal(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {
    *returnSize = (gridSize - 2);
    int **matrixResult = malloc(sizeof(int*) * (*returnSize));
    *returnColumnSizes = malloc(sizeof(int) * (*returnSize));

    for (int i = 0; i < (*returnSize); i++) {
        (*returnColumnSizes)[i] = *returnSize;
        matrixResult[i] = malloc(sizeof(int) * (*returnSize));
    }

    for (int i = 1; i < (gridSize - 1); i++)
        for (int j = 1; j < (gridSize - 1); j++)
            matrixResult[(i - 1)][(j - 1)] = maxLargestLocal(grid, i, j);

    return matrixResult;
}
