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
    vector<int> check(TreeNode* root){
        vector<int> ret(2);
        if(root->left) ret[0] = check(root->left)[1]+1;
        if(root->right) ret[1] = check(root->right)[0]+1;
        ans = max(ans, max(ret[0],ret[1]));
        return ret;
    }
    
    int longestZigZag(TreeNode* root) {
        check(root);
        return ans;
    }
};