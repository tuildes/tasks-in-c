/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
  int* res = malloc(sizeof(int) * numsSize),
       acc = 0;


  for (int i = 0; i < numsSize; i++) {
    acc += nums[i];
    res[i] = acc;
  }

  *returnSize = numsSize;
  return res;
}
