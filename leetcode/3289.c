int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int *res = malloc(sizeof(int) * 2);
    int actual = 0;
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++)
            if (nums[i] == nums[j]) {
                res[actual] = nums[i];
                actual++;
            }
    }

    return res;
}
