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
    vector<int> fn(TreeNode* root){
        vector<int> a;
        a.clear(); 
        if(!root) return a;
        else if(!root->left && !root->right) a.push_back(root->val);
        else{
            a = fn(root->left);
            vector<int> b = fn(root->right);
            if(b.size()) a.insert(a.end(), b.begin(),b.end());
        }
        return a;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a = fn(root1);
        vector<int> b = fn(root2);
        if(a.size()!=b.size()) return false;
        for(int i = 0;i<a.size();i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
};