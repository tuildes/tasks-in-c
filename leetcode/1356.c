void swapValues(int *a, int *b) {
    int temp = (*a);
    (*a) = (*b);
    (*b) = temp;
}

int totalOneBits(int n) {
    int total = 0;
    for(;n;n = n >> 1) { total += (n & 1); }
    return total;
}

int* sortByBits(int* arr, int arrSize, int* returnSize) {
    int *result = (int*)malloc(sizeof(int) * arrSize),
        *bits = (int*)malloc(sizeof(int) * arrSize);
    
    if ((result == NULL) || (bits == NULL)) { return NULL; }

    for (int i = 0; i < arrSize; i++) {
        bits[i] = totalOneBits(arr[i]);
    }

    for (int i = 0; i < arrSize; i++) {
        result[i] = arr[i];
        for (int j = i; j > 0; j--) {
            if ((bits[j] < bits[(j - 1)]) ||
                ((bits[j] == bits[(j - 1)]) && (result[j] < result[(j - 1)]))) {
                swapValues(&bits[j], &bits[(j - 1)]);
                swapValues(&result[j], &result[(j - 1)]);
            }
        }
    }

    free(bits);
    (*returnSize) = arrSize;
    return result;
}
