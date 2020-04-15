class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        int left = 1, right = 1;
        for(int i = 0;i<nums.size();i++){
            ans[i]*= left;
            ans[nums.size()-1-i]*=right;
            left*= nums[i];
            right*= nums[nums.size()-1-i];
        }
        return ans;
    }
};