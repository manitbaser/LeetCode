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
    int j;
    int ans;
    void fn(TreeNode* root,int i){
        if(root->left==NULL && root->right==NULL){
            if(i<j){
                return;
            }
            if(i>j){
                ans = 0;
            }
            j = i;
            ans+=root->val;
            return;
        }
        if(root->left){
            fn(root->left,i+1);
        }
        if(root->right){
            fn(root->right,i+1);
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        j = 0;
        ans = 0;
        fn(root,0);
        return ans;
    }
};