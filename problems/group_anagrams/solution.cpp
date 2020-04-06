class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>> x;
        for(int i = 0;i<strs.size();i++){
            string str = strs[i];
            sort(str.begin(),str.end());
            x[str].push_back(i);
        }
        vector<vector<string>> ans;
        int j = 0;
        for(auto itr = x.begin();itr!=x.end();itr++){
            vector<string> y;
            ans.push_back(y);
            for(int i = 0;i<itr->second.size();i++){
                ans[j].push_back(strs[itr->second[i]]);
            }
            j++;
        }
        return ans;
    }
};