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
    void fn(TreeNode* t1,TreeNode* t2){
        if(t1!=NULL&&t2!=NULL){
            t1->val+=t2->val;
        }
        if(t1->left==NULL){
            if(t2->left){
                t1->left = t2->left;
            }
        }
        else if(t2->left!=NULL){
            fn(t1->left,t2->left);
        }
        if(t1->right==NULL){
            if(t2->right){
                t1->right = t2->right;
            }
        }
        else if(t2->right!=NULL){
            fn(t1->right,t2->right);
        }
    }
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1!=NULL){
            if(t2!=NULL){
                fn(t1,t2);
            }
            return t1;
        }
        else{
            return t2;
        }
    }
};