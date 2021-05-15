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
    string path(TreeNode* root, int a){
        if(root==NULL) return "";
        if(root->val==a) return "F";
        string l = path(root->left, a);
        if(l!="") return "L"+l;
        string r = path(root->right, a);
        if(r!="") return "R"+r;
        return "";
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        string P = path(root, p->val), Q = path(root, q->val);
        for(int i = 0;i<P.length() && i<Q.length() && P[i]==Q[i];i++)
            if(P[i]=='L') root = root->left;
            else if(P[i]=='R') root = root->right;
        return root;
    }
};