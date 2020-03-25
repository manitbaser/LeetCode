class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int,vector<int>> x;
        for(int i = 0;i<mat.size();i++){
            int count = 0;
            while(count<mat[i].size() && mat[i][count]){
                count++;
            }
            x[count].push_back(i);
        }
        vector<int> ans;
        for(auto itr = x.begin();itr!=x.end()&&ans.size()<k;itr++){
            ans.insert(ans.end(),itr->second.begin(),itr->second.end());
        }
        ans.erase(ans.begin()+k,ans.end());
        return ans;
    }
};