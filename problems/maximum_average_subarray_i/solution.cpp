class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(),nums.begin()+k,0);
        int cur = sum;
        for(int i= 0;i+k<nums.size();i++) cur+=nums[k+i]-nums[i],sum = max(cur,sum);
        return sum/(double)k;
    }
};