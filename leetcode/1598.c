int minOperations (char* logs[], int logSize) {
    int total = 0;

    for (int i = 0; i < logSize; i++) {
        if (!strcmp(logs[i], "./")) continue;
        if (!strcmp(logs[i], "../")) {
            if (total != 0) total--;
            continue;
        }

        total++;
    }

    return total;
}
