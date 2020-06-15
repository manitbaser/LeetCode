class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> degree(numCourses,0);
        vector<vector<int>> x(numCourses);
        vector<int> bfs;
        for(int i = 0;i<prerequisites.size();i++){
            x[prerequisites[i][1]].push_back(prerequisites[i][0]);
            degree[prerequisites[i][0]]++;
        }
        for(int i = 0;i<numCourses;i++){
            if(degree[i]==0) bfs.push_back(i);
        }
        for(int i = 0;i<bfs.size();i++){
            for(int j = 0;j<x[bfs[i]].size();j++){
                if(--degree[x[bfs[i]][j]]==0) bfs.push_back(x[bfs[i]][j]);
            }
        }
        return bfs.size()==numCourses;
    }
};