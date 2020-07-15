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
    vector<string> ans;
    void fn(TreeNode* root, string &s){
        string temp = "->" + to_string(root->val);
        s+= temp;
        if(!root->left && !root->right) ans.push_back(s);
        else{
            if(root->left) fn(root->left,s);
            if(root->right) fn(root->right,s);
        }
        s.erase(s.length()-temp.length());
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        ans.clear();
        if(!root) return ans;
        string s = to_string(root->val);
        if(!root->left && !root->right) ans.push_back(s);
        else{
            if(root->left) fn(root->left,s);
            if(root->right) fn(root->right,s);
        }
        return ans;
    }
};