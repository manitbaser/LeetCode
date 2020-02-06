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
    int s = 0;
    void a(TreeNode* x,int L,int R){
        if(x->val>=L && x->val<=R){
            s+=x->val;
        }
        if(x->left!=NULL && x->val>L){
            a(x->left,L,R);
        }
        if(x->right!=NULL && x->val<R){
            a(x->right,L,R);
        }
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (root==NULL){
            return 0;
        }
        s = 0;
        a(root,L,R);
        return s;
    }
};