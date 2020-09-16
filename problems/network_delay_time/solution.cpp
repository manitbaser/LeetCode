class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        vector<int> time(N+1, INT_MAX);
        vector<vector<int>> x(N+1,vector<int>(N+1,INT_MAX));
        for(int i = 0;i<times.size();i++) x[times[i][0]][times[i][1]] = times[i][2];
        queue<int> q;
        q.push(K);
        time[K] = 0;
        time[0] = 0;
        while(!q.empty()){
            for(int i = 1;i<=N;i++){
                if(x[q.front()][i]!=INT_MAX && x[q.front()][i]+time[q.front()]<time[i]){
                    time[i] = time[q.front()]+x[q.front()][i];
                    q.push(i);
                }
            }
            q.pop();
        }
        int ans = 0;
        for(int i = 1;i<=N;i++){
            if(time[i]==INT_MAX) return -1;
            ans= max(ans,time[i]);
        }
        return ans;
    }
};