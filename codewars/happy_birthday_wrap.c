#include <logger.h>
#include <stdbool.h>

void swap(int *a, int *b) {
    int temp = *a;
    (*a) = *b;
    (*b) = temp;
}

int wrap(int height, int width, int length) {
    if (height > length) { swap(&height, &length); }
    if (height > width) { swap(&height, &width); }

    return ((4 * height + (2 * (width + length))) + 20);
}

bool tester(int h, int w, int l, int r) { return (wrap(h,w,l) == r); }

int main(void) {
    logging_testing("Test 1", tester( 17, 32, 11, 162 ));
    logging_testing("Test 2", tester( 13, 13, 13, 124 ));
    logging_testing("Test 3", tester(  1,  3,  1,  32 ));
    return 0;
}
