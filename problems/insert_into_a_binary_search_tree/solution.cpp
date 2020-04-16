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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* x = new TreeNode(val);
        if(root==NULL){
            return x;
        }
        TreeNode* itr = root;
        while(1){
            if(val<itr->val){
                if(itr->left){
                    itr = itr->left;
                }
                else{
                    itr->left = x;
                    return root;
                }
            }
            else{
                if(itr->right){
                    itr = itr->right;
                }
                else{
                    itr->right = x;
                    return root;
                }
            }
        }
        return root;
    }
};