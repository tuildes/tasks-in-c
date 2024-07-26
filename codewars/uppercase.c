char *makeUpperCase (char *string) {
  
  for (unsigned int i = 0; string[i] != '\0'; i++) {
    if ((string[i] > 96) && (string[i] < 123))
      string[i] -= 32;
  }
  
  return string;
}

