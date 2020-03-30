class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<bool> x(nums.size(),false);
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]<=nums.size()){
                x[nums[i]-1] = true;
            }
        }
        for(int i = 0;i<x.size();i++){
            if(x[i]==false){
                return i+1;
            }
        }
        return nums.size()+1;
    }
};