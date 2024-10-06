void plusMinus(int arr_count, int* arr) {
    unsigned int zeros = 0, 
                neg = 0, 
                pos = 0;
    
    for (int i = 0; i < arr_count; i++) {
        if (arr[i] == 0) zeros++;
        else if (arr[i] < 0) neg++;
        else pos++;
    }
    
    printf("%.6f\n", (((float)pos) / arr_count));
    printf("%.6f\n", (((float)neg) / arr_count));
    printf("%.6f\n", (((float)zeros) / arr_count));
}
