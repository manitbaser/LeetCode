class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> x(3,0);
        for(int i = 0;i<nums.size();i++){
            x[nums[i]]++;
        }
        for(int i = 0;i<x[0];i++){
            nums[i] = 0;
        }
        for(int i = x[0];i<x[0]+x[1];i++){
            nums[i] = 1;
        }
        for(int i = x[0]+x[1];i<nums.size();i++){
            nums[i] = 2;
        }
    }
};