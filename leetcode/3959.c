bool checkGoodInteger(int n) {
    int total = 0;
    int actualDigit = 0;

    for (; n ; n /= 10) {
        actualDigit = (n % 10);
        total += ((actualDigit * actualDigit) - actualDigit);
    }

    return (total >= 50);
}
