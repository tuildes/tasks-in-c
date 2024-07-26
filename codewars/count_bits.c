#include <stddef.h>

size_t countBits(unsigned int value) {
  size_t result = 0;
  while (value != 0) {
    result += (value % 2);
    value >>= 1;
  }
	return result;
}
