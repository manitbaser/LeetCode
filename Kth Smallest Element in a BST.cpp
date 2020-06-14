/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0, v = 0;
    int kthSmallest(TreeNode* root, int k) {
        if(root->left) ans = kthSmallest(root->left, k);
        v++;
        if(k==v) return root->val;
        if(root->right && k>v) return kthSmallest(root->right, k);
        return ans;
    }
};
