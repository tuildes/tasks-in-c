int xorOperation(int n, int start) {
    int result = 0;

    for (int i = 0; i < n; i++)
        result = result ^ (start + (i * 2));

    return result;
}
