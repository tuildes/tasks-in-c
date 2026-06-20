int numberOfBeams(char** bank, int bankSize) {
    int previous = -1;
    int actual;
    int total = 0;

    for (int i = 0; i < bankSize; i++) {
        actual = 0;

        for (int j = 0; bank[i][j] != '\0'; j++) {
            if (bank[i][j] == '1') {
                actual++;
            }
        }

        if (actual) {
            // Primeiro caso
            if (previous == -1) {
                previous = actual;
                continue;
            }


            total += (previous * actual);
            previous = actual;
        }
    }

    return total;
}
