class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, vector<int>> index;
        for(int i = 0;i<nums.size();i++)
            index[nums[i]].push_back(i);
        sort(nums.begin(), nums.end());
        vector<int> ans(nums.size(),INT_MAX);
        for(int i = 0;i<ans.size();i++){
            for(int j = 0;j<index[nums[i]].size();j++){
                ans[index[nums[i]][j]] = min(i,ans[index[nums[i]][j]]);
            }
        }
        return ans;
    }
};