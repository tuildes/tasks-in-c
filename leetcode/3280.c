void convertAndReverse(int n, char* buf, int* pos) {
    int start = *pos;

    while (n > 0) {
        buf[(*pos)++] = (n % 2) ? '1' : '0';
        n /= 2;
    }

    int end = *pos - 1;
    while (start < end) {
        char temp = buf[start];
        buf[start++] = buf[end];
        buf[end--] = temp;
    }
}

char* convertDateToBinary(char* date) {
    char* binary = malloc(sizeof(char) * 32);
    if (!binary) return NULL;
    int i = 0;

    int year = atoi(date);
    int month = atoi(date + 5);
    int day = atoi(date + 8);

    convertAndReverse(year, binary, &i);
    binary[i++] = '-';
    convertAndReverse(month, binary, &i);
    binary[i++] = '-';
    convertAndReverse(day, binary, &i);

    binary[i] = '\0';
    return binary;
}
