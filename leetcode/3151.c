bool isArraySpecial(int* nums, int numsSize) {
    int last = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (!((last + nums[i]) & 1)) { return false; }
        last = nums[i];
    }
 
    return true;
}
