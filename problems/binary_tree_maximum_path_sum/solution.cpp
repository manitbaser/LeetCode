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
    int ans;
    int fn(TreeNode* root){
        if(root==NULL){
            return INT_MIN;
        }
        int left = max(fn(root->left),0);
        int right = max(fn(root->right),0);
        ans = max(ans, root->val+left+ right);
        return (root->val+max(left,right));
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        ans = INT_MIN;
        max(fn(root),ans);
        return ans;
    }
};