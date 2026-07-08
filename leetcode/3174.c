char* clearDigits(char* s) {
    char* res = malloc(sizeof(char) * (strlen(s) + 1));
    unsigned int end = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= '0') && (s[i] <= '9') && (end)) {
            end--;
            continue;
        }

        res[end] = s[i];
        end++;
    }

    res[end] = '\0';
    return res;
}
