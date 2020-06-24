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
    int ans = INT_MAX;
    int flag = 1;
    int findSecondMinimumValue(TreeNode* root) {
        if(!root||!root->left) return -1;
        if(root->val!=root->left->val){
            if(root->left->val==INT_MAX) flag = 0;
            ans = min(ans,root->left->val);
            findSecondMinimumValue(root->right);
        }
        else if(root->val!=root->right->val){
            if(root->right->val==INT_MAX) flag = 0;
            ans = min(ans,root->right->val);
            findSecondMinimumValue(root->left);
        }
        else{
            findSecondMinimumValue(root->right);
            findSecondMinimumValue(root->left);
        }
        if(ans==INT_MAX && flag) return -1;
        return ans;
    }
};