/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* _bstToGst(struct TreeNode* root, int *accumulated) {
  if (root == NULL) { return NULL; }

  struct TreeNode* new = malloc(sizeof(struct TreeNode));
  
  new->right = _bstToGst(root->right, accumulated);
  (*accumulated) += root->val;
  new->val = (*accumulated); 

  new->left = _bstToGst(root->left, accumulated);

  return new;
}

struct TreeNode* bstToGst(struct TreeNode* root) {
  int acc = 0;
  struct TreeNode* new = _bstToGst(root, &acc);
  return new;
}
