int digitSum(int n) {
    int r = 0;

    for (;n;n/=10) {
        r += (n % 10);
    }

    return r;
}

int minElement(int* nums, int numsSize) {
    if (numsSize < 1) { return 0; }

    int temp, min = digitSum(nums[0]);

    for (int i = 1; i < numsSize; i++) {
        temp = digitSum(nums[i]);
        if (temp < min)
            min = temp;
    }

    return min;
}
