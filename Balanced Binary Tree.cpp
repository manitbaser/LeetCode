/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool flag = true;
    int height(TreeNode* root, int n){
        if(!flag || root==NULL) return n;
        int left = height(root->left,n+1);
        int right = height(root->right,n+1);
        if(abs(left-right)>1) flag = false;
        return max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        height(root,1);
        return flag;
    }
};
