bool isSelfDividing(int n) {
    int original = n;
    
    for (int temp = n; temp > 0; temp /= 10) {
        int digit = temp % 10;
        
        if (digit == 0 || original % digit != 0) {
            return false;
        }
    } 

    return true;
}

int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* res = NULL;

    *returnSize = 0;
    for (int i = left; i <= right; i++) {
        if (isSelfDividing(i)) {
            res = realloc(res, sizeof(int) * ((*returnSize) + 1));
            res[(*returnSize)] = i;
            (*returnSize)++;
        }
    }

    return res;
}

