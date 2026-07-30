int countSeniors(char** details, int detailsSize) {
    int res = 0, temp;

    for (int i = 0; i < detailsSize; i++) {
        temp = atoi(details[i] + 11);
        temp /= 100;
        if (temp > 60) { res++; }
    }

    return res;
}
