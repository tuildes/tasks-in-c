int testRoman(int *actual, int target, char* roman, int *actualIndex, const char* romanSymbol) {
    if (*actual < target) { return 0; }

    for (int i = 0; romanSymbol[i] != '\0'; i++) {
        roman[*actualIndex] = romanSymbol[i];
        (*actualIndex)++;
    }

    (*actual) -= target;
    return 1;
}

char* intToRoman(int num) {
    char* roman = malloc(sizeof(char) * 100);
    int actualIndex = 0;

    while (num) {
        if (testRoman(&num, 1000, roman, &actualIndex, "M")) { continue; }
        else if (testRoman(&num, 900, roman, &actualIndex, "CM")) { continue; }
        else if (testRoman(&num, 500, roman, &actualIndex, "D")) { continue; }
        else if (testRoman(&num, 400, roman, &actualIndex, "CD")) { continue; }
        else if (testRoman(&num, 100, roman, &actualIndex, "C")) { continue; }
        else if (testRoman(&num, 90, roman, &actualIndex, "XC")) { continue; }
        else if (testRoman(&num, 50, roman, &actualIndex, "L")) { continue; }
        else if (testRoman(&num, 40, roman, &actualIndex, "XL")) { continue; }
        else if (testRoman(&num, 10, roman, &actualIndex, "X")) { continue; }
        else if (testRoman(&num, 9, roman, &actualIndex, "IX")) { continue; }
        else if (testRoman(&num, 5, roman, &actualIndex, "V")) { continue; }
        else if (testRoman(&num, 4, roman, &actualIndex, "IV")) { continue; }
        else if (testRoman(&num, 1, roman, &actualIndex, "I")) { continue; }
    }

    roman[actualIndex] = '\0';
    return roman;
}
