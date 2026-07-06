void reverseString(char* s, int index) {
    char temp;
    for (int i = 0; i <= (index / 2); i++) {
        temp = s[(index - i)];
        s[(index - i)] = s[i];
        s[i] = temp;
    }
}

void shiftString(char* s, int index) {
    char temp;
    do {
        index++;
        s[(index - 1)] = s[index];
    } while (s[index] != '\0');
}

char* finalString(char* s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'i') {
            shiftString(s, i);
            i--;
            reverseString(s, i);
        }
    }

    return s;
}
