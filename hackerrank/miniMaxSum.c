void miniMaxSum(int arr_count, int* arr) {
    int min, max;
    long int temp = 0;
    
    // Caso de ERRO (impossivel iterar)
    if (arr_count <= 0) return;
     
    min = arr[0];
    max = min;
     
    // Calcula a soma do 
    for(int i = 0; i < arr_count; i++)
        temp += arr[i];
    
    // Define os maiores e menores numeros
    for(int i = 1; i < arr_count; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    
    // Print do menor e max
    printf("%ld %ld\n", (temp - max), (temp - min));
    return;
}
