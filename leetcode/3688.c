int evenNumberBitwiseORs(int* nums, int numsSize) {
    int res = 0;

    for (int i = 0; i < numsSize; i++) {
        if (!(nums[i] & 1))
            res = res | nums[i];
    }

    return res;
}
