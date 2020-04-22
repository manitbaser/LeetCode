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
    void fn(TreeNode* root, int val){
        if(!root->left && !root->right){
            ans+=val*2+root->val;
        }
        if(root->left){
            fn(root->left,val*2+root->val);
        }
        if(root->right){
            fn(root->right,val*2+root->val);
        }
    }
    int sumRootToLeaf(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        ans = 0;
        fn(root,0);
        return ans;
    }
};