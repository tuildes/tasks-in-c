#include <logger.h>
#include <stdbool.h>

int maximum69Number (int num) {
    int potenceNum = 1;
    for (int temp = num;temp;temp/=10) { potenceNum *= 10; }
    for (potenceNum /= 10; potenceNum; potenceNum /= 10) {
        if (((num / potenceNum) % 10) == 6) {
            return (num + (3 * potenceNum));
        }
    }

    return num;
}

bool verifyResult(int a, int b) {
    logging_console(LOG_INFO, "a = %d, b = %d", a, b);
    return maximum69Number(a) == b;
}

int main(void) {
    logging_testing("9669 == 9969", verifyResult(9669, 9969));
    logging_testing("9996 == 9999", verifyResult(9996, 9999));
    logging_testing("9999 == 9999", verifyResult(9999, 9999));
    return 0;
}
