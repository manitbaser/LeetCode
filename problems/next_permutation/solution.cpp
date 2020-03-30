class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        for(int i = nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                int x = i;
                for(int j = i;j<nums.size();j++){
                    if(nums[j]>nums[i-1] && nums[j]<nums[x]){
                        x = j;
                    }
                }
                swap(nums[i-1],nums[x]);
                sort(nums.begin()+i,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};