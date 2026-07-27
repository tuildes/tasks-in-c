int earliestTime(int** tasks, int tasksSize, int* tasksColSize) {
    int temp, res = 0;

    for (int i = 0; i < tasksSize; i++) {
        temp = 0;
        for (int j = 0; j < tasksColSize[i]; j++) {
            temp += tasks[i][j];
        }
        if (!res || (temp < res)) {
            res = temp;
        }
    }

    return res;
}
