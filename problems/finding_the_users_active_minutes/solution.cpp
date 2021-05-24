class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k,0);
        unordered_map<int, unordered_set<int>> users;
        for(int i = 0;i<logs.size();i++)
            users[logs[i][0]].insert(logs[i][1]);
        for(auto itr : users)
            ans[itr.second.size()-1]++;
        return ans;
    }
};