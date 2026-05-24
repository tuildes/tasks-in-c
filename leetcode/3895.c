int countDigitOccurrences(int* nums, int numsSize, int digit) {
    int total = 0;
    int copy;

    for (int i = 0; i < numsSize; i++) {
        copy = nums[i];
        while (copy) {
            if ((copy % 10) == digit)
                total++;

            copy /= 10;
        }
    }

    return total;
}
