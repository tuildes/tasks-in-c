// Entry: char* s = "00:00:00PM"
char* timeConversion(char* s) {
    char* time_converted = ((char *) malloc(9 * sizeof(char)));
    
    for(unsigned int i = 2; i <= 7; i++)
        time_converted[i] = s[i];
        
    s[2] = '\0';
    int temp = atoi(s);
    
    // Caso 12AM E 12PM
    if (temp == 12) {
        if (s[8] == 'A')
            temp = 0;

        time_converted[0] = ((temp / 10) + '0');
        time_converted[1] = ((temp % 10) + '0');
        
    // CASO PM
    } else if (s[8] == 'P') {
        temp = (temp + 12) % 24;
        time_converted[0] = ((temp / 10) + '0');
        time_converted[1] = ((temp % 10) + '0');
    
    // CASO GERAL
    } else {
        time_converted[0] = s[0];
        time_converted[1] = s[1];
    }
    
    time_converted[8] = '\0';
        
    return time_converted;
}
