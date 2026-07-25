int numberOfMatches(int n){
    int res = 0;

    while (n) {
        res += (n / 2);
        if (n & 1) {
            if (n == 1) { break; }
            n /= 2;
            n++;
        } else {
            n /= 2;
        }
    }

    return res;
}
