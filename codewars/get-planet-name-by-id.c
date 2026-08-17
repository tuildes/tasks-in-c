#include <logger.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const char *getPlanetName(int id) {
    char *name;

    switch (id) {
        case 1: name = "Mercury"; break;
        case 2: name = "Venus"; break;
        case 3: name = "Earth"; break;
        case 4: name = "Mars"; break;
        case 5: name = "Jupiter"; break;
        case 6: name = "Saturn"; break;
        case 7: name = "Uranus"; break;
        case 8: name = "Neptune"; break;
    }

    return name;
}

static bool doTest (int id, const char *expected) {
	const char *actual = getPlanetName(id);
    logging_console(LOG_DEBUG, "(%d) - expected: \"%s\", result: \"%s\"", id, expected, actual);
    return (actual == expected);
}

int main(void) {
    logging_testing("Test 1", doTest(1, "Mercury"));
    logging_testing("Test 2", doTest(6, "Saturn"));
    return 0;
}
