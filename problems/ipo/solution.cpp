class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> q1;
        priority_queue<int> q2;
        for(int i = 0;i<profits.size();i++) q1.push({capital[i],profits[i]});
        while(k>0){
            while(!q1.empty() && q1.top()[0]<=w){
                q2.push(q1.top()[1]);
                q1.pop();
            }
            if(q2.empty()) break;
            w+=q2.top();
            q2.pop();
            k--;
        }
        return w;
    }
};