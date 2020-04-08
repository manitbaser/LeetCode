/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* i = root;
        vector<TreeNode*> s;
        if(i){
            if(i->right){
                s.push_back(i->right);
            }
            if(i->left){
                s.push_back(i->left);
            }
        }
        while(!s.empty()){
            if(s[s.size()-1]!=NULL){
                i->right = s[s.size()-1];
                s.pop_back();
                i->left = NULL;
                i = i->right;
                s.push_back(i->right);
                s.push_back(i->left);

            }
            else{
                s.pop_back();
            }
        }
    }
};