class Solution {
public:
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        vector<vector<int>> dir(n+1);
        for(int i = 0;i<edges.size();i++){
            dir[edges[i][0]].push_back(edges[i][1]);
            dir[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> prob(n+1);
        prob[1] = 1;
        queue<int> q, temp;
        q.push(1);
        while(--t>=0 && q.size()){
            temp = queue<int>();
            while(q.size()){
                int flag = 0;
                for(int i = 0; i<dir[q.front()].size();i++){
                    if(prob[dir[q.front()][i]]==0){
                        temp.push(dir[q.front()][i]);
                        flag++;
                    }
                }
                for(int i = 0; i<dir[q.front()].size();i++){
                    if(prob[dir[q.front()][i]]==0){
                        prob[dir[q.front()][i]] = flag*prob[q.front()];
                        // cout<<dir[q.front()][i]<<" "<<prob[dir[q.front()][i]]<<endl;
                    }
                }
                if(flag) prob[q.front()] = -1;
                // cout<<q.front()<<" "<<prob[q.front()]<<endl;
                q.pop();
            }
            q = temp;
        }
        if(prob[target]<=0) return 0;
        return (double)1/prob[target];
    }
};