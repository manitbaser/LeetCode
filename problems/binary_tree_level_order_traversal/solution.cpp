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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            vector<int> x;
            queue<TreeNode*> v;
            while(!q.empty()){
                if(q.front()){
                    v.push(q.front()->left);
                    v.push(q.front()->right);
                    x.push_back(q.front()->val);
                }
                q.pop();
            }
            q = v;
            if(!x.empty())
            ans.push_back(x);
        }
        return ans;
    }
};