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
    int sumEvenGrandparent(TreeNode* root) {
        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            if(q.front()==NULL){
                q.pop();
                continue;
            }
            if(q.front()->val%2==0){
                if(q.front()->left){
                    if(q.front()->left->left){
                        ans+=q.front()->left->left->val;
                    }
                    if(q.front()->left->right){
                        ans+=q.front()->left->right->val;
                    }
                }
                if(q.front()->right){
                    if(q.front()->right->left){
                        ans+=q.front()->right->left->val;
                    }
                    if(q.front()->right->right){
                        ans+=q.front()->right->right->val;
                    }
                }
            }
            q.push(q.front()->left);
            q.push(q.front()->right);
            q.pop();
        }
        return ans;
    }
};