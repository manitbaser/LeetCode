class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> mapping;
        for(int i = 0;i<adjacentPairs.size();i++)
            mapping[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]), mapping[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        auto ptr = mapping.begin();
        while(ptr->second.size()==2) ptr++;
        int i = ptr->first;
        vector<int> ans(mapping.size());
        ans[0] = i;
        i = mapping[i][0];
        for(int j = 1;j<ans.size()-1;j++){
            ans[j] = i;
            if(mapping[i][0]==ans[j-1]) i = mapping[i][1];
            else i = mapping[i][0];
        }
        ans[ans.size()-1] = i;
        return ans;
    }
};