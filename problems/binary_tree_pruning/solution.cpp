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
    int fn(TreeNode* root){
        if(root->left){
            if(!fn(root->left)){
                root->left = NULL;
            }
            
        }
        if(root->right){
            if(!fn(root->right)){
                root->right = NULL;
            }
        }
        if(!root->left && !root->right){
            return min(root->val,1);
        }
        return 1;
    }
    TreeNode* pruneTree(TreeNode* root) {
        if(root->left){
            if(!fn(root->left)){
                root->left = NULL;
            }
            
        }
        if(root->right){
            if(!fn(root->right)){
                root->right = NULL;
            }
            
        }
        return root;
    }
};