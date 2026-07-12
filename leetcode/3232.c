bool canAliceWin(int* nums, int numsSize) {
    int sumSingleDigit = 0, sumDoubleDigit = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < 10) {
            sumSingleDigit += nums[i];
        } else {
            sumDoubleDigit += nums[i];
        }
    }

    return (sumSingleDigit != sumDoubleDigit);
}
