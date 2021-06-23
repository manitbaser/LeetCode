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
    int ans = 0;
    int sumNumbers(TreeNode* root, int prev = 0) {
        if(!root->left && !root->right) ans+=prev*10+root->val;
        else{
            if(root->left) sumNumbers(root->left, root->val+prev*10);
            if(root->right) sumNumbers(root->right, root->val+prev*10);
        }
        return ans;
    }
};