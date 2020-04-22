class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long sum = 0;
        map<int,int> x;
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            if(x[sum-k]){
                ans+=x[sum-k];
            }
            x[sum]++;
        }
        ans+=x[k];
        return ans;
    }
};