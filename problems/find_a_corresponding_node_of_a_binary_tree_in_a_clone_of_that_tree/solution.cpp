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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==NULL){
            return NULL;
        }
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;
        q1.push(original);
        q2.push(cloned);
        while(!q1.empty()){
            if(q1.front()==target){
                return q2.front();
            }
            if(q1.front()->left){
                q1.push(q1.front()->left);
                q2.push(q2.front()->left);
            }
            if(q1.front()->right){
                q1.push(q1.front()->right);
                q2.push(q2.front()->right);
            }
            q1.pop();
            q2.pop();
            
        }
        return NULL;
    }
};