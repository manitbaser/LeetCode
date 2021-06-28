/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        int level = 0;
        queue<Node*> q, temp, empty;
        q.push(root);
        while(!q.empty()){
            ans.push_back(vector<int>{});
            while(!q.empty()){
                ans[level].push_back(q.front()->val);
                for(int i = 0;i<q.front()->children.size();i++)
                    temp.push(q.front()->children[i]);
                q.pop();
            }
            q = temp;
            temp = empty;
            level++;
        }
        return ans;
    }
};