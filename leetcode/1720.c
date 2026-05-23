int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
    *returnSize = encodedSize + 1;
    int* res = malloc(sizeof(int) * (*returnSize));

    res[0] = first;
    for (int i = 0; i < encodedSize; i++)
        res[i + 1] = res[i] ^ encoded[i];

    return res;
}

