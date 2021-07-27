class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = INT_MAX/2, second, third;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-2 && target!=ans;i++){
            second = i+1, third = nums.size()-1;
            while(second<third && target!=ans){
                if(abs(target-ans)>abs(target-nums[i]-nums[second]-nums[third]))
                    ans = nums[i]+nums[second]+nums[third];
                if(nums[i]+nums[second]+nums[third]>target) third--;
                else second++;
            }
        }
        return ans;
    }
};