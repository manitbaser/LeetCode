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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        stack<TreeNode*> s;
        s.push(root);
        bool flag = false;
        while(!s.empty()){
            vector<int> x;
            stack<TreeNode*> t;
            while(!s.empty()){
                if(s.top()){
                    x.push_back(s.top()->val);
                    if(flag){
                        t.push(s.top()->right);
                        t.push(s.top()->left);
                    }
                    else{
                        t.push(s.top()->left);
                        t.push(s.top()->right);
                    }
                }
                s.pop();
            }
            s = t;
            if(!x.empty())
            ans.push_back(x);
            flag = !flag;
        }
        return ans;
    }
};