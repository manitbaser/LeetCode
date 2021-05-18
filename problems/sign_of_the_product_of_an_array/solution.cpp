class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        for(int i = 0;i<nums.size();i++)
            if(nums[i]==0) return 0;
            else ans = ans*(nums[i]/abs(nums[i]));
        return ans;
    }
};