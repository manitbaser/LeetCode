class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        long sum = accumulate(nums.begin(),nums.end(),0);
        long cur = 0;
        int i = nums.size()-1;
        while(cur<=sum-cur){
            cur+=nums[i];
            ans.push_back(nums[i--]);
        }
        return ans;
    }
};