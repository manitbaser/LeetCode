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
    int maxLevelSum(TreeNode* root) {
        int val = INT_MIN, ans = 0, lvl = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            lvl++;
            queue<TreeNode*> temp;
            int sum = 0;
            while(!q.empty()){
                sum+= q.front()->val;
                if(q.front()->left) temp.push(q.front()->left);
                if(q.front()->right) temp.push(q.front()->right);
                q.pop();
            }
            q = temp;
            if(sum>val){
                val = sum;
                ans = lvl;
            }
        }
        return ans;
    }
};