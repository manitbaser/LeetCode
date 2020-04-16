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
    vector<int> ans1;
    vector<int> ans2;
    void fn1(TreeNode* root){
        if(root){
            fn1(root->left);
            ans1.push_back(root->val);
            fn1(root->right);
        }
    }
    void fn2(TreeNode* root){
        if(root){
            fn2(root->left);
            ans2.push_back(root->val);
            fn2(root->right);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        ans1.clear();
        ans2.clear();
        fn1(root1);
        fn2(root2);
        int i = 0,j = 0;
        
        vector<int> ans(ans1.size()+ans2.size(),0);
        while(i<ans1.size() && j<ans2.size()){
            if(ans1[i]<ans2[j]){
                ans[i+j] = ans1[i];
                
                i++;
            }
            else{
                ans[i+j] = ans2[j];
                j++;
            }
        }
        while(i<ans1.size()){
            ans[i+j] = ans1[i];
            i++;
        }
        while(j<ans2.size()){
            ans[i+j] = ans2[j];
            j++;
        }
        return ans;
    }
};