#include <stdlib.h>

int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {

    int *res = malloc(sizeof(int) * matrixSize);
    if (res == NULL) return NULL;

    for (int i = 0; i < matrixSize; i++) {
        res[i] = 0;

        for (int j = 0; j < matrixColSize[i]; j++)
            if (matrix[i][j])
                res[i]++;
    }

    *returnSize = matrixSize;
    return res;
}
