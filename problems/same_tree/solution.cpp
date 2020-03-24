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
    bool fn(TreeNode* p, TreeNode* q){
        if(p==NULL){
            if(q==NULL){
                return true;
            }
            return false;
        }
        if(q==NULL){
            return false;
        }
        if(p->val != q->val){
            return false;
        }
        return fn(p->left,q->left) &&fn(p->right,q->right);

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return fn(p,q);
    }
};