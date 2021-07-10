class Solution {
public:
    bool check(vector<int>& nums) {
        int bump = 0;
        for(int i = 0;i<nums.size()-1 && bump<=1;i++) if(nums[i]>nums[i+1]) bump++;
        if(bump>1 || (bump==1 && nums[nums.size()-1]>nums[0])) return false;
        return true;
    }
};