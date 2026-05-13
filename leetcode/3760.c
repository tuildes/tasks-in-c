int maxDistinct(char* s) {
    int total[26] = { 0 };
    int res = 0;
    int position;

    for(int i = 0; s[i] != '\0'; i++) {
        position = (s[i] - 97);
        total[position] += 1;

        if (total[position] == 1)
            res += 1;
    }

    return res;
}
