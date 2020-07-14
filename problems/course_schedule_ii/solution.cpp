class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> degree(numCourses), ans(numCourses,-1);
        vector<vector<int>> invert(numCourses);
        queue<int> q;
//         inverting the vector and counting the degree
        for(int i = 0;i<prerequisites.size();i++){
            degree[prerequisites[i][0]]++;
            invert[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
//         identifying the 0 degree courses and storing them in the queue
        int j = 0;
        for(int i = 0;i<numCourses;i++)
            if(degree[i]==0) ans[j++] = i,q.push(i);
        
        while(!q.empty()){
            for(int i = 0;i<invert[q.front()].size();i++)
                if(--degree[invert[q.front()][i]]==0)
                    ans[j++] = invert[q.front()][i],q.push(invert[q.front()][i]);
            q.pop();
        }
        if(j!=numCourses) ans.clear();
        return ans;
    }
};