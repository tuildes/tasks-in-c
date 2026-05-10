int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize * 2;
    int* res = malloc(sizeof(int) * (*returnSize));

    if (res == NULL) return NULL;

    for(int i = 0; i < numsSize; i++) {
        res[i] = nums[i];
        res[(*returnSize - i - 1)] = nums[i];
    }

    return res;
}
