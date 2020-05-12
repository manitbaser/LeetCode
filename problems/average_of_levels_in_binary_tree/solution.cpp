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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> ans;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        while(!q.empty()){
            int num = q.size();
            queue<TreeNode*> temp;
            ans.push_back(0);
            while(!q.empty()){
                if(q.front()->left){
                    temp.push(q.front()->left);
                }
                if(q.front()->right){
                    temp.push(q.front()->right);
                }
                ans[ans.size()-1]+=q.front()->val;
                q.pop();
            }
            if(num==0){
                ans.pop_back();
            }
            else{
                ans[ans.size()-1]/=num;
            }
            q = temp;
        }
        return ans;
    }
};