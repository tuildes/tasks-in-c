int sumOfMultiples(int n) {
    int total = 0;
    for (; n ; n--) {
        if (!(n % 3)) {
            total += n;
            continue;
        }
        if (!(n % 5)) {
            total += n;
            continue;
        }
        if (!(n % 7)) {
            total += n;
            continue;
        }
    }
    return total;
}
