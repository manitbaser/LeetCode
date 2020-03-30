class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0,r = nums.size()-1;
        int m;
        while(l<=r){
            m = (l+r)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]<target){
                l = m+1;
            }
            else{
                r = m-1;
            }
        }
        while(m>=0 && m<nums.size()-1){
            if(nums[m]<target && nums[m+1]>target){
                return m+1;
            }
            else if(nums[m]>target){
                m--;
            }
            else{
                m++;
            }
            if(m==-1){
                return 0;
            }
        }
        if(nums[m]<target){
            return nums.size();
        }
        return nums.size()-1;
    }
};