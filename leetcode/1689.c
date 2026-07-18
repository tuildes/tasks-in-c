int minPartitions(char* n) {
    int res = 0;

    for (int i = 0; n[i] != '\0'; i++) {
        if (res < (n[i] - '0')) { res = (n[i] - '0'); }
    }

    return res;
}
