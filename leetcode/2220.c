int minBitFlips(int start, int goal) {
    int obj = (start ^ goal);
    int flips = 0;

    while (obj) {
        flips += (obj & 1);
        obj = obj >> 1;
    }

    return flips;
}
