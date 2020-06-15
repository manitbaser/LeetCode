class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum%2) return false;
        sum/=2;
        vector<bool> v(sum+1,false);
        v[0] = true;
        for(int i = 0;i<nums.size();i++){
            for(int j = sum;j>0;j--){
                if(j>=nums[i]) v[j] = v[j]||v[j-nums[i]];
            }
        }
        return v[sum];
    }
};
