int smallestEvenMultiple(int n) {
    if (n & 1) return n << 1;
    return n;
}
