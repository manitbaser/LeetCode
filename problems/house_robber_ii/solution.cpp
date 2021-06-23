class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<4) return *max_element(nums.begin(), nums.end());
        vector<int> a(nums.size()), b(nums.size());
        a[0] = nums[0], a[1] = max(nums[0], nums[1]), b[1] = nums[1];
        for(int i = 2;i<nums.size()-1;i++) a[i] = max(a[i-1], a[i-2] + nums[i]), b[i] = max(b[i-1], b[i-2] + nums[i]);
        return max(a[nums.size()-2], max(b[nums.size()-2], b[nums.size()-3] + nums[nums.size()-1]));
    }
};