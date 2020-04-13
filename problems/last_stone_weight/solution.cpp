class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i =0;i<stones.size();i++){
            q.push(stones[i]);
        }
        while(q.size()>1){
            if(q.top()==0){
                q.pop();
                continue;
            }
            int x = q.top();
            q.pop();
            int y = abs(x-q.top());
            q.pop();
                if(y>0){
                    q.push(y);
                }
        }
        if(!q.empty()){
        return q.top();
        }
        return 0;
    }
};