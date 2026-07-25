int comp(const void *a, const void *b) {
    return (*(int*)b - *(int *)a);
}

int matchPlayersAndTrainers(int* players, int playersSize, int* trainers, int trainersSize) {
    qsort(players, playersSize, sizeof(int), comp);
    qsort(trainers, trainersSize, sizeof(int), comp);
    int res = 0, pIndex = 0, tIndex = 0;

    for (tIndex = 0; tIndex < trainersSize; tIndex++) {
        while (1) { 
            if (pIndex >= playersSize) { return res; }
            if (players[pIndex] <= trainers[tIndex]) { break; }
            pIndex++; 
        }

        res += 1;
        pIndex++;
    }

    return res;
}
