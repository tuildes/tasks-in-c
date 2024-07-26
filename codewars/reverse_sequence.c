#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num) {

  // Auxiliar variables
  unsigned short *reverse;

  // Fallback => lenght 0 in array
  if (num == 0) return NULL;
  
  // Fallback => malloc fail (null return)
  if ((reverse = malloc (num * sizeof(unsigned short))) == NULL)
    return NULL;
  
  // Reverse Sequence
  for (unsigned short i = num; i > 0; i--)
    reverse[num - i] = i;
  
  return reverse;
}
