class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty()) return 0;
        vector<int> val(nums.size(),1);
        int ans = 1;
        for(int i = 1;i<nums.size();i++){
            for(int j = i-1;j>=0;j--){
                if(nums[i]>nums[j]) val[i] = max(val[i],val[j]+1);
            }
            ans = max(val[i],ans);
        }
        return ans;
    }
};