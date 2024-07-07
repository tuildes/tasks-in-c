#include <stddef.h>

unsigned int positive_sum(const int values[/* count */], size_t count) {
  
  unsigned int result = 0;
  
  for (unsigned int i = 0; i < count; i++)
    if (values[i] > 0) 
      result += values[i]; 
  
  return result;
}
