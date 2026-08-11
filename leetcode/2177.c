long long* sumOfThree(long long num, int* returnSize) {
    long long* result = (long long*)malloc(sizeof(long long) * 3);
    if (result == NULL) { return NULL; }
    if ((num < 0) || (num % 3)) {
        *returnSize = 0;
        return result;
    }

    for (int i = 0; i < 3; i++)
        result[i] = ((num / 3) + i - 1);

    *returnSize = 3;
    return result;
}

