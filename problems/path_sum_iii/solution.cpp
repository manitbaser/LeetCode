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
    int ans;
    vector<int> fn(TreeNode* root,int sum){
        vector<int> x;
        int i = 0;
        if(root->left){
            x = fn(root->left,sum);
            
            
            for(;i<x.size();i++){
                x[i]+=root->val;
                if(x[i]==sum){
                    ans++;
                }
            }
        }
        if(root->right){
            vector<int> y = fn(root->right,sum);
            x.insert(x.end(),y.begin(),y.end());
            for(;i<x.size();i++){
                x[i]+=root->val;
                if(x[i]==sum){
                    ans++;
                }
            }
        }
        x.push_back(root->val);
        if(root->val==sum){
            ans++;
        }
        return x;
    }
    int pathSum(TreeNode* root, int sum) {
        ans = 0;
        if(root==NULL){
            return 0;
        }
        fn(root,sum);
        return ans;
    }
};