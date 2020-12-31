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
    int fn(TreeNode* root){
        if(!root) return -1;
        int left = (fn(root->left)+1)%3, right = (fn(root->right)+1)%3;
        if(left==1 || right==1){
            ans++;
            return 1;
        }
        else if(left==2 || right==2) return 2;
        return 0;
    }
    int minCameraCover(TreeNode* root) {
        if(!root) return 0;
        if(fn(root)==0) ans++;
        return ans;
    }
};