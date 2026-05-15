int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int higher = 0;
    int temp = 0;

    for (int i = 0; i < accountsSize; i++) {
        temp = 0;
        for (int j = 0; j < *accountsColSize; j++) {
            temp += accounts[i][j];
        }

        if (temp > higher) higher = temp;
    }

    return higher;
}
