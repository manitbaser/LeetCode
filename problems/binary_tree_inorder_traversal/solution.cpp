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
    vector<int> ans;
    void fn(TreeNode* root){
        if(root->left){
            fn(root->left);
        }
        ans.push_back(root->val);
        if(root->right){
            fn(root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        ans.clear();
        if(!root){
            return ans;
        }
        fn(root);
        return ans;
    }
};