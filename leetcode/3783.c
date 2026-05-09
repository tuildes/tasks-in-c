#include <math.h>

int mirrorDistance(int n) {
    int reverse = 0;
    int copy = n;

    while (copy != 0) {
        reverse *= 10;
        reverse += (copy % 10);

        copy /= 10;
    }

    return abs(n - reverse);
}

