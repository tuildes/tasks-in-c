int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int* pivotedArray = malloc(sizeof(int) * numsSize);
    if (pivotedArray == NULL) return NULL;

    *returnSize = numsSize;
    int currentDigit = 0;

    // Less than
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < pivot) {
            pivotedArray[currentDigit] = nums[i];
            currentDigit += 1;
        }
    }

    // Equal than
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == pivot) {
            pivotedArray[currentDigit] = pivot;
            currentDigit += 1;
        }
    }

    // Higer than
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > pivot) {
            pivotedArray[currentDigit] = nums[i];
            currentDigit += 1;
        }
    }

    return pivotedArray;
}
