class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> x;
        int ans = 0;
        for(int i = 0;i<nums.size();i++) ans+=x[nums[i]]++;
        return ans;
    }
};