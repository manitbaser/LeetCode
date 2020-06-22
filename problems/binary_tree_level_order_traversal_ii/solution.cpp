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
    vector<vector<int>> ans;
    void fn(TreeNode* root,int n){
        if(!root) return;
        if(ans.size()<=n) ans.insert(ans.begin(),vector<int>(1,root->val));
        else ans[ans.size()-1-n].push_back(root->val);
        fn(root->left,n+1);
        fn(root->right,n+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        ans.clear();
        fn(root,0);
        return ans;
    }
};