class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx = 0;
        for(int i = 0;i<nums.size();i++){
            mx = max(mx-1,nums[i]);
            if(mx==0 && i<nums.size()-1){
                return false;
            }
        }
        return true;
    }
};