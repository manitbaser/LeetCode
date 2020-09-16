class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> points(n,1), ans;
        for(int i = 0;i<edges.size();i++) points[edges[i][1]] = 0;
        for(int i= 0;i<n;i++) if(points[i]) ans.push_back(i);
        return ans;
    }
};