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
    void fn(TreeNode* root, int& lvl, int curlvl, int& val){
        if(!root) return;
        if(curlvl>lvl) lvl = curlvl, val = root->val;
        fn(root->left, lvl, curlvl+1, val);
        fn(root->right, lvl, curlvl+1, val);
    }
    int findBottomLeftValue(TreeNode* root) {
        int lvl = 0, val = root->val, curlvl = 0;
        fn(root->left, lvl, curlvl+1, val);
        fn(root->right, lvl, curlvl+1, val);
        return val;
    }
};