bool areNumbersAscending(char* s) {
    int previousNumber = -1;
    int actualNumber;
    bool inNumber = false;

    for (int i = 0; s[i] != '\0'; i++) {
        if (inNumber || (s[i] < '0') || (s[i] > '9')) {
            inNumber = false;
            continue;
        }

        inNumber = true;
        actualNumber = atoi(s + i);

        if (previousNumber >= actualNumber) { return false; }
        previousNumber = actualNumber;
    }

    return true;
}
