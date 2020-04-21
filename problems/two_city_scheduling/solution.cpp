class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int N = costs.size()/2;
        vector<int> x(2*N,0);
        int ans = 0;
        for(int i = 0;i<2*N;i++){
            x[i] = costs[i][1] - costs[i][0];
            ans+=costs[i][1]+costs[i][0];
        }
        sort(x.begin(),x.end());
        for(int i = 0;i<N;i++){
            ans+=x[i];
            ans-=x[N+i];
        }
        return ans/2;
    }
};