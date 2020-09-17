class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> degree(n,0);
        for(int i = 0;i<n;i++){
            if(leftChild[i]!=-1) if(++degree[leftChild[i]]>1) return false;
            if(rightChild[i]!=-1) if(++degree[rightChild[i]]>1) return false;
        }
        int count = 0, pos = -1;
        for(int i= 0;i<n;i++){
            if(degree[i]==0){
                pos = i;
                count++;
            }
            degree[i] = 0;
        }
        if(count!=1) return false;
        queue<int> q;
        degree[pos] = 1;
        q.push(pos);
        while(!q.empty()){
            if(leftChild[q.front()]!=-1){
                q.push(leftChild[q.front()]);
                degree[leftChild[q.front()]]++;
            }
            if(rightChild[q.front()]!=-1){
                q.push(rightChild[q.front()]);
                degree[rightChild[q.front()]]++;
            }
            q.pop();
        }
        for(int i= 0;i<n;i++){
            if(degree[i]!=1) return false;
        }
        return true;
    }
};