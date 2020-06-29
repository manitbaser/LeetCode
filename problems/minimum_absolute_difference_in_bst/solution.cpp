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
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX/2;
        if(root->left){
            ans=min(getMinimumDifference(root->left),root->val-root->left->val);
        }
        ans = min(ans,root->val-x);
        x = root->val;
        if(root->right){
            return min(ans,getMinimumDifference(root->right));
        }
        return ans;
    }
};