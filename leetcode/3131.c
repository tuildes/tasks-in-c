#include <logger.h>
#include <stdbool.h>

int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int res = 0;

    for (int i = 0; i < nums1Size; i++)
        res -= nums1[i]; 
    
    for (int i = 0; i < nums2Size; i++)
        res += nums2[i];
    
    return (res / nums1Size);
}

bool verifyResult(int a, int b) {
    return (a == b);
}

int main(void) {

    int arr1[3] = { 2,6,4 }, arr2[3] = {9,7,5};
    logging_testing("[2,6,4] - [9,7,5]", verifyResult(addedInteger(arr1, 3, arr2, 3), 3));

    int arr3[1] = { 10 }, arr4[1] = { 5 };
    logging_testing("[10] - [5]", verifyResult(addedInteger(arr3, 1, arr4, 1), -5));

    int arr5[3] = { 1,1,1 }, arr6[3] = { 1,1,1 };
    logging_testing("[1,1,1,1] - [1,1,1,1]", verifyResult(addedInteger(arr5, 3, arr5, 3), 0));
    
    return 0;
}
