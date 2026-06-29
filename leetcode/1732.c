int largestAltitude(int* gain, int gainSize) {
    int max = 0;
    int altitude = 0;

    for (int i = 0; i < gainSize; i++) {
        altitude += gain[i];
        if (max < altitude)
            max = altitude;
    }

    return max;
}
