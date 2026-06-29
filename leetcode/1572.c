int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum = 0;
    int temp;

    for (int i = 0; i < matSize; i++) {
        temp = (matSize - i - 1);
        sum += mat[i][i];
        sum += mat[i][temp];
        printf("+ %d + %d", mat[i][i], mat[i][temp]);
    }

    // Caso especial (impar)
    if (matSize & 1) {
        int mid = (matSize / 2);
        sum -= mat[mid][mid];
    }

    return sum;
}
