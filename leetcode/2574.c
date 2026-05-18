/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int *leftSum, *rightSum, *result;
    leftSum = calloc(numsSize, sizeof(int));
    rightSum = calloc(numsSize, sizeof(int));
    result = malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        for (int j = (i + 1); j < numsSize; j++) {
            leftSum[j] += nums[i];
            rightSum[numsSize - j - 1] += nums[numsSize - i - 1];
        }
    }

    for (int i = 0; i < numsSize; i++) {
        result[i] = abs((leftSum[i] - rightSum[i]));
    }

    return result;
}
