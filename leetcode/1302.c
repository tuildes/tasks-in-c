int checkDeepLevel(struct TreeNode* root) {
    if (root == NULL) { return 0; }

    int l = checkDeepLevel(root->left);
    int r = checkDeepLevel(root->right);

    if (l > r) { return (l + 1); };
    return (r + 1);
}

// root == 1
int sumDeepestLeaves(struct TreeNode* root, int target, int actual) {
    if (root == NULL) { return 0; }
    if (actual == target) { return root->val; }
    return sumDeepestLeaves(root->left, target, (actual + 1)) +
        sumDeepestLeaves(root->right, target, (actual + 1));
}

int deepestLeavesSum(struct TreeNode* root) {
    if (root == NULL) { return 0; }

    int deepLevel = checkDeepLevel(root);
    return sumDeepestLeaves(root, deepLevel, 1);
}
