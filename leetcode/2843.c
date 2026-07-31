bool isSymmetric(int n) {
    int totalDigits = 0, sum = 0;
    for (int temp = n; temp; temp/=10)
        totalDigits++;

    if (totalDigits & 1) { return false; }

    totalDigits /= 2;

    while (n) {
        if (totalDigits > 0) { sum += (n % 10); }
        else { sum -= (n % 10); }
        totalDigits--;
        n/=10;
    }

    return (sum == 0);
}

int countSymmetricIntegers(int low, int high) {
    int total = 0;
    for (;low <= high;low++) {
        if (isSymmetric(low))
            total++;
    } 
    return total;
}
