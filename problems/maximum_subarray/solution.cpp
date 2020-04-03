class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long cur = 0;
        long ans = nums[0];
        bool flag = false;
        int i = 0;
        while(i<nums.size()&&nums[i]<0){
            ans = (ans<nums[i])?nums[i]:ans;
            i++;
        }
        for(;i<nums.size();i++){
            cur+=nums[i];
            cur = (cur>0)?cur:0;
            ans = (ans>cur)?ans:cur;
        }
        return ans;
    }
};