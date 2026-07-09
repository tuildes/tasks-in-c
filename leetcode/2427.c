int commonFactors(int a, int b) {
    int res = 0;
    int minor = (a < b) ? a : b;

    for (int i = 1; i <= minor; i++) {
        if (a % i) continue;
        if (b % i) continue;
        res += 1;
    }

    return res;
}
