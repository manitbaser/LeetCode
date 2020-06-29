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
    int x = INT_MIN/2;
    int ans = INT_MAX;
    void fn(TreeNode* root){
        if(!root) return;
        fn(root->left);
        ans = min(ans, root->val-x);
        x = root->val;
        fn(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        fn(root);
        return ans;
    }
};
