class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans = INT_MAX;
        for(int i = 0;i<nums.size() && abs(i-start)<ans;i++)
            if(nums[i]==target) ans = abs(i-start);
        return ans;
    }
};