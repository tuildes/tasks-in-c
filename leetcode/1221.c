bool isBalanced(char *s, int left, int right) {
    int r = 0;
    int l = 0;

    while (left <= right) {
        if (s[left] == 'R') {
            r++;
        } else {
            l++;
        }

        left++;
    }

    return (r == l);
}

int balancedStringSplit(char* s) {
    int total = 0;
    int left = 0;

    for (int i = 1; s[left] != '\0'; i += 2) {
        if (isBalanced(s, left, i)) {
            left = (i + 1);
            total++;
        }
    }

    return total;
}
