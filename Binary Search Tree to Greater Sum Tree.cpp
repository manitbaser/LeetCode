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
    int val;
    void fn(TreeNode* root){
        if(root==NULL){
            return;
        }
        fn(root->right);
        root->val+=val;
        val = root->val;
        fn(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        val = 0;
        fn(root);
        return root;
    }
};
