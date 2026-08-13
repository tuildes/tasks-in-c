#include <logger.h>
#include <stdbool.h>

int sumOfTheDigitsOfHarshadNumber(int x) {
    int sumOfTheDigits = 0;
    for (int n = x;n;n/=10) { sumOfTheDigits += (n % 10); }
    if (!(x % sumOfTheDigits)) { return sumOfTheDigits; }
    return -1;
}

bool verifyResult(int a, int b) {
    return (sumOfTheDigitsOfHarshadNumber(a) == b);
}

int main(void) {
    logging_testing("18 result in 9 (9)", verifyResult(18, 9));
    logging_testing("23 result in 5 (-1)", verifyResult(23, -1));
    return 0;
}
