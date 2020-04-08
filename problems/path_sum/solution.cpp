/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        return (root==NULL)?false:(root->left ==NULL && root->right==NULL)? sum==root->val: hasPathSum(root->left,sum-root->val) || hasPathSum(root->right,sum-root->val);
    }
};