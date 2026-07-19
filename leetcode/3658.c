#include <stdio.h>

int gcdOfOddEvenSums(int n) {
    int oddSum = 0, evenSum = 0;

    oddSum =  (((1 + (1 + ((n - 1) * 2))) * n) / 2);
    evenSum = (((2 + (2 + ((n - 1) * 2))) * n) / 2);

    printf("%d, %d\n", oddSum, evenSum);

    for (int i = ((oddSum & 1) ? (oddSum - 1) : oddSum); i > 1; i--) {
        if (!(oddSum % i) && !(evenSum % i)) {
            return i;
        }
    }

    return 1;
}

int gcdOfOddEvenSumsOptimized(int n) {
    return n;
}

int main() {
    int actual = 5;
    printf("%d - result: %d\n", actual, gcdOfOddEvenSums(actual));

    return 0;
}
