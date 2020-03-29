class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0,j = 1;
        x:
        while(j<nums.size() && nums[j]==nums[i]){
            j++;
        }
        nums.erase(nums.begin()+i+1,nums.begin()+j);
        i++;
        j = i+1;
        if(i<nums.size() && j<nums.size()){
            goto x;
        }
        return nums.size();
    }
};