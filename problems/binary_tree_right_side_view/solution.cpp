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
    vector<int> rightSideView(TreeNode* root, vector<int> ans=vector<int>(0), int depth=0) {
        if(root==NULL) return ans;
        if(ans.size()<=depth) ans.push_back(root->val);
        ans = rightSideView(root->right, ans, depth+1);
        ans = rightSideView(root->left, ans, depth+1);
        return ans;
    }
};