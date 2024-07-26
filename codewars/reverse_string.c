#include <string.h>
char *strrev (char *string) {
  char temp;
  const unsigned int lenght = strlen(string);
  
  for (unsigned int i = 0; i < (lenght/2); i++) {
    temp = string[lenght - i - 1];
    string[lenght - i - 1] = string[i];
    string[i] = temp;
  }
  
  return string; // reverse the string in place and return it
}
