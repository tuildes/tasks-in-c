void reverseString(char* s, int sSize) {
    char temp;
    int reverseIndex;

    for (int i = 0; i < (sSize / 2); i++) {
        reverseIndex = (sSize - i - 1);

        temp = s[reverseIndex];
        s[reverseIndex] = s[i];
        s[i] = temp;
    }
}
