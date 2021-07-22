class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<vector<int>> con(n);
        vector<int> dep(n);
        queue<int> q, empty, temp;
        for(int i = 0;i<edges.size();i++){
            con[edges[i][0]].push_back(edges[i][1]);
            con[edges[i][1]].push_back(edges[i][0]);
            dep[edges[i][0]]++;
            dep[edges[i][1]]++;
        }
        for(int i = 0;i<n;i++) if(dep[i]<=1) q.push(i);
        n-=q.size();
        while(n){
            while(q.size()){
                for(int i = 0;i<con[q.front()].size();i++)
                    if(--dep[con[q.front()][i]]==1) temp.push(con[q.front()][i]), n--;
                q.pop();
            }
            q = temp;
            temp = empty;
        }
        vector<int> ans(q.size());
        for(int i = 0;i<ans.size();i++){
            ans[i] = q.front();
            q.pop();
        }
        return ans;
    }
};