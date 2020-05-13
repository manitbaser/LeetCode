class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool> x(nums.size()+1,false);
        for(int i = 0;i<nums.size();i++){
            x[nums[i]] = true;
        }
        for(int i = 0;i<x.size();i++){
            if(x[i]==false){
                return i;
            }
        }
        return nums.size();
    }
};