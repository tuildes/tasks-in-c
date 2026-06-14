/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int indexMax (int *nums, int left, int right) {
    int maxIndex = -1;

    for (int i = left; i <= right; i++) {
        if ((maxIndex == -1) || (nums[maxIndex] < nums[i]))
            maxIndex = i;
    }

    return maxIndex;
}

struct TreeNode* _aux(int *nums, int left, int right) {
    if (left > right) { return NULL; }

    int maxIndexTree = indexMax(nums, left, right);
    if (maxIndexTree == -1) { return NULL; } // Nao tem mais filhos

    struct TreeNode* new = malloc(sizeof(struct TreeNode));
    new->val = nums[maxIndexTree];
    new->left = _aux(nums, left, (maxIndexTree - 1));
    new->right = _aux(nums, (maxIndexTree + 1), right);

    return new;
}

struct TreeNode* constructMaximumBinaryTree(int* nums, int numsSize) {
    return _aux(nums, 0, (numsSize - 1));
}
