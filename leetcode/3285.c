/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* height, int heightSize, int threshold, int* returnSize) {
    int* res = malloc(sizeof(int) * heightSize);
    int size = 0;

    for (int i = 0; i < (heightSize - 1); i++) {
        if (height[i] > threshold) {
            res[size] = (i + 1);
            size++;
        }
    }

    *returnSize = size;
    return res;
}
