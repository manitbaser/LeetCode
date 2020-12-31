class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        unordered_map<int,vector<int>> juniors;
        unordered_map<int, int> time;
        for(int i = 0;i<manager.size();i++) juniors[manager[i]].push_back(i);
        queue<int> inform;
        inform.push(headID);
        int ans = 0;
        time[headID] = 0;
        while(inform.size()){
            int top = inform.front();
            inform.pop();
            for(int i = 0;i<juniors[top].size();i++){
                time[juniors[top][i]]= time[top]+informTime[top];
                inform.push(juniors[top][i]);
                ans = max(ans,time[juniors[top][i]]);
            }
        }
        return ans;
    }
};