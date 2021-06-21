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
    int ans = 0;
    
    void check(TreeNode* root, vector<int>& num){
        num[root->val]++;
        if(!root->left && !root->right){
            int temp = 0;
            for(int i = 1;i<10 && temp<2;i++) if(num[i]%2) temp++;
            if(temp<2) ans++;
        }
        else{
            if(root->left) check(root->left, num);
            if(root->right) check(root->right, num);
        }
        num[root->val]--;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> num(10);
        check(root, num);
        return ans;
    }
};