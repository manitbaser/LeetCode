class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<int>> costs(n,vector<int>(n,-1));
        vector<int> prev(n, INT_MAX/2), cur(n, INT_MAX/2);
        prev[src] = 0;
        queue<int> q, temp, empty;
        for(int i = 0;i<flights.size();i++)
            costs[flights[i][0]][flights[i][1]] = flights[i][2];
        q.push(src);
        for(int i = 0;i<=k && !q.empty();i++){
            while(!q.empty()){
            for(int j = 0;j<n;j++)
                if(costs[q.front()][j]!=-1 && costs[q.front()][j] + prev[q.front()]<cur[j]) cur[j] = costs[q.front()][j] + prev[q.front()], temp.push(j);
            q.pop();
            }
            q = temp, temp = empty, prev = cur;
        }
        return (prev[dst]>=INT_MAX/2)?-1:prev[dst];
    }
};