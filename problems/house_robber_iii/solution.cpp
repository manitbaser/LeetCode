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
    vector<int> fn(TreeNode* root){
        vector<int> ans(2,0);
        if(root==NULL){
            return ans;
        }
        vector<int> left = fn(root->left);
        vector<int> right = fn(root->right);
        ans[0] = root->val+left[1]+right[1];
        ans[1] = max(left[0],left[1])+max(right[0],right[1]);
        return ans;
    }
    int rob(TreeNode* root) {
        vector<int> ans = fn(root);
        return max(ans[0],ans[1]);
    }
};