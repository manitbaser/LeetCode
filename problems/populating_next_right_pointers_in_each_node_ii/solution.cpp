/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*> q, temp, empty;
        q.push(root);
        Node* ptr = root;
        while(!q.empty()){
            while(!q.empty()){
                ptr = q.front();
                q.pop();
                if(ptr->left) temp.push(ptr->left);
                if(ptr->right) temp.push(ptr->right);
                if(q.size()) ptr->next = q.front();
            }
            q = temp;
            temp = empty;
        }
        return root;
    }
};