class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> degree(graph.size());
        vector<int> ans;
        queue<int> q;
        vector<vector<int>> invert(graph.size());
        for(int i = 0;i<graph.size();i++){
            if(graph[i].size()==0) q.push(i);
            else for(int j : graph[i]) invert[j].push_back(i), degree[i]++;
        }
        while(!q.empty()){
            for(int i : invert[q.front()]) if(--degree[i]==0) q.push(i);
            q.pop();
        }
        for(int i = 0;i<degree.size();i++) if(degree[i]==0) ans.push_back(i);
        return ans;
    }
};