class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i = 1, j = 0, ni = 1, nj = 0;
        if(nums[j]-1>nums[i]-1){
            i = 0;
            j = 1;
        }
        else{
            ni = 0;
            nj = 1;
        }
        for(int k = 2;k<nums.size();k++){
            if(nums[k]-1>=nums[i]-1){
                j = i;
                i = k;
            }
            else if(nums[k]-1>nums[j]-1){
                j = k;
            }
            else if(nums[k]-1<=nums[ni]-1){
                nj = ni;
                ni = k;
            }
            else if(nums[k]-1<nums[j]-1){
                nj = k;
            }
        }
        return max((nums[i]-1)*(nums[j]-1),(nums[ni]-1)*(nums[nj]-1));
    }
};
