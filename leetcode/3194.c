double minimumAverage(int* nums, int numsSize) {
  if (numsSize < 2) { return 0; }

  int temp;
  double minAve = -1, tempSum;

  // Insertion sort
  for (int i = 0; i < numsSize; i++) { 
    for (int j = i; j > 0; j--) {
      if (nums[j] < nums[(j - 1)]) {
        temp = nums[j];
        nums[j] = nums[(j - 1)];
        nums[(j - 1)] = temp;
      }
    }
  }

  for (int l = 0, r = (numsSize - 1); l < r; l++, r--) {
    tempSum = (((double)(nums[l] + nums[r])) / 2);
    if ((minAve == -1) || (tempSum < minAve)) {
      minAve = tempSum;
    }
  }

  return minAve;
}
