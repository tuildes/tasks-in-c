#include <logger.h>
#include <stdio.h>

int countPoints(char* rings) {
    int rgbs[10] = { 0 }, actualIndex, total = 0;

    for (int i = 0; rings[i] != '\0'; i += 2) {
        actualIndex = (rings[(i + 1)] - '0');
        switch (rings[i]) {
            case 'R':
                rgbs[actualIndex] = (rgbs[actualIndex] | 4); 
                break;
            case 'G':
                rgbs[actualIndex] = (rgbs[actualIndex] | 2); 
                break;
            case 'B':
                rgbs[actualIndex] = (rgbs[actualIndex] | 1); 
                break;
        }
    }

    for (int i = 0; i < 10; i++) {
        logging_console(LOG_DEBUG, "rgbs[%d] = %d", i, rgbs[i]);
        if (rgbs[i] == 7) {
            total++;
        }
    }

    return total;
}

int main() {
    logging_testing("B0B6G0R6R0R6G9 equal 1", (countPoints("B0B6G0R6R0R6G9") == 1));
    logging_testing("B0R0G0R9R0B0G0 equal 1", (countPoints("B0R0G0R9R0B0G0") == 1));
    logging_testing("G4 equal 0", (countPoints("G4") == 0));
    logging_testing("R0G0B0R1G1B1R2G2B2R3G3B3 equal 4", (countPoints("R0G0B0R1G1B1R2G2B2R3G3B3") == 4));
    return 0;
}
