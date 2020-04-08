class Solution {
public:
    bool canJump(vector<int>& nums) {
        int j = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(j-1<0){
                return false;
            }
            j = max(j-1,nums[i]);
            
        }
        return true;
    }
};