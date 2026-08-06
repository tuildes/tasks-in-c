int greatestDivisor(int a, int b) {
    for (int minor = (a < b) ? a : b;minor > 1; minor--) {
        if (!(a % minor) && !(b % minor)) {
            return minor;
        }
    }

    return 1;
}

int findGCD(int* nums, int numsSize) {
    int minor = nums[0], maximum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < minor) { minor = nums[i]; }
        if (nums[i] > maximum) { maximum = nums[i]; }
    }
    
    return greatestDivisor(minor, maximum);
}
