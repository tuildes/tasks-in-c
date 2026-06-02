int digitFrequencyScore(int n) {
    int total = 0;

    for(;n;n/=10)
        total += (n % 10);

    return total;
}
