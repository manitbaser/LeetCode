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
    long ans = 0;
    int fn(TreeNode* root){
        if(!root) return 0;
        int left = fn(root->left);
        int right = fn(root->right);
        int sum = left + right + root->val;
        root->val = abs(left-right);
        ans+=root->val;
        return sum;
    }
    
    int findTilt(TreeNode* root) {
        fn(root);
        return ans;
    }
};