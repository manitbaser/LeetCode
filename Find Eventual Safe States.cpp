class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
//         for store the degree of the nodes
        vector<int> degree(graph.size());
//         queue for storing vectors with degree 0
        queue<int> q;
//         inverting the graph
        vector<vector<int>> invert(graph.size());
        for(int i = 0;i<graph.size();i++){
            if(graph[i].size()==0) q.push(i);
            else for(int j : graph[i]) invert[j].push_back(i), degree[i]++;
        }
//         reducing the degree and breaking the paths, hence only cycles will remain
        while(!q.empty()){
            for(int i : invert[q.front()]) if(--degree[i]==0) q.push(i);
            q.pop();
        }
//         answer vector
        vector<int> ans;
        for(int i = 0;i<degree.size();i++) if(degree[i]==0) ans.push_back(i);
        return ans;
    }
};
