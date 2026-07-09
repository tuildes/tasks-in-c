int minimumBoxes(int* apple, int appleSize, int* capacity, int capacitySize) {
    int totalApples = 0;
    int temp;
    int res = 0;

    for (int i = 0; i < appleSize; i++)
        totalApples += apple[i];

    // Insertion Sort
    for (int i = 1; i < capacitySize; i++) {
        for (int j = i; j > 0; j--) {
            if (capacity[j] > capacity[(j - 1)]) {
                temp = capacity[j];
                capacity[j] = capacity[(j - 1)];
                capacity[(j - 1)] = temp;
            }
        }
    }

    for (int i = 0; (totalApples > 0) && (i < capacitySize); i++) {
        totalApples -= capacity[i];
        res += 1;
    }

    return res;
}
