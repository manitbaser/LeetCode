class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0, ans = 0, i = 0;
        for(;i+ans<nums.size();i++){
            if(nums[i]==0){
                if(i!=l) ans = max(ans,i-l);
                l = i+1;
            }
        }
        while(i<nums.size() && nums[i]==1) i++;
        return max(i-l, ans);
    }
};