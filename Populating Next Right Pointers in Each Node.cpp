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
        int level = 0;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
//             for all the nodes except the last one whose next is NULL
            for(int i = 1;i<pow(2,level);i++){
                Node* temp = q.front();
                q.pop();
                temp->next = q.front();
                if(temp->left){
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }
//             for the last node
            Node* temp = q.front();
            q.pop();
            temp->next = NULL;
            if(temp->left){
                q.push(temp->left);
                q.push(temp->right);
            }
            level++;
        }
        return root;
    }
};
