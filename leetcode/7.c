int reverse(int x){
    int res = 0;

    while (x) {
        // Verifica limite
        if ((res > (INT_MAX / 10)) || (res < (-INT_MAX / 10)))
            return 0;

        res *= 10;
        res += (x % 10);
        x /= 10;
    }

    return res;
}
