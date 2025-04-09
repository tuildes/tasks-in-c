#include <stddef.h>

int find_smallest_int(const int array[/* len */], size_t len) {
    
    int smaller = array[0];
  
    for (unsigned int i = 1; i < len; i++)
      if (array[i] < smaller)
        smaller = array[i];
  
    return smaller;
}
