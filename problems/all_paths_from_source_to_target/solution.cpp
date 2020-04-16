class Solution {
public:
    vector<vector<int>> ans;
    void fn(vector<vector<int>>& graph, vector<int> x,int i){
        if(i==graph.size()-1){
            ans.push_back(x);
            return;
        }
        for(int j = 0;j<graph[i].size();j++){
            x.push_back(graph[i][j]);
            fn(graph,x,graph[i][j]);
            x.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        ans.clear();
        vector<int> x;
        x.push_back(0);
        fn(graph,x,0);
        return ans;
    }
};