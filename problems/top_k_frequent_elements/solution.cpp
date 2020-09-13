class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> x;
        for(int i = 0;i<nums.size();i++){
            x[nums[i]]++;
        }
        map<int,vector<int>> y;
        for(auto itr = x.begin();itr!=x.end();itr++){
            y[itr->second].push_back(itr->first);
        }
        vector<int> ans(k,0);
        int ptr = 0;
        for(auto itr = y.begin();itr!=y.end();itr++){
            for(int i = 0;i<itr->second.size();i++){
                ans[(ptr++)%k] = itr->second[i];
            }
        }
        return ans;
    }
};