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
    int findDepth(TreeNode* root){
        if(!root) return 0;
        else return max(findDepth(root->left),findDepth(root->right))+1;
    }
    
    void fillAns(TreeNode* root, vector<vector<string>>& ans, int i, int j, int n){
        ans[i][j] = to_string(root->val);
        if(root->left) fillAns(root->left, ans, i+1, j-n+n/2, (n-1)/2);
        if(root->right) fillAns(root->right, ans, i+1, j+n-n/2, (n-1)/2);
    }
    
    vector<vector<string>> printTree(TreeNode* root) {
        TreeNode* ptr = root;
        int depth = findDepth(root), width = 0;
        for(int i = 0;i<depth;i++) width+=pow(2,i);
        vector<vector<string>> ans(depth, vector<string>(width,""));
        fillAns(root, ans, 0, ans[0].size()/2, ans[0].size()/2);
        return ans;
    }
};