/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *res = calloc(*returnSize, sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = (i + 1); j < numsSize; j++) {
            if (nums[j] < nums[i]) { // Caso atual maior
                res[i]++;
            } else if (nums[j] > nums[i]) { // Caso comparacao maior
                res[j]++;
            }
        }
    }

    return res;
}
