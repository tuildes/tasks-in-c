bool checkTree(struct TreeNode* root) {
    return (root->val == (root->left->val + root->right->val));
}
