1. BFS Solution using Queue:-
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root) q.push(root);
        while(!q.empty()){
            ans.insert(ans.begin(),vector<int>(q.size(),0));
            int n = q.size();
            for(int i = 0;i<n;i++){
                ans[0][i] = q.front()->val;
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                q.pop();
            }
        }
        return ans;
    }
};

2. DFS Solution Using Recursion:-
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
    vector<vector<int>> ans;
    void fn(TreeNode* root,int n){
        if(!root) return;
        if(ans.size()<=n) ans.insert(ans.begin(),vector<int>(1,root->val));
        else ans[ans.size()-1-n].push_back(root->val);
        fn(root->left,n+1);
        fn(root->right,n+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        ans.clear();
        fn(root,0);
        return ans;
    }
};
