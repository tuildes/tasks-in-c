int minOperations(int* nums, int numsSize, int k) {
    int res = 0;

    for (int i = 0; i < numsSize; i++)
        res += nums[i];

    return res % k;
}
