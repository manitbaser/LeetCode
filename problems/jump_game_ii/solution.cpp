class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int ans = 1;
        int cur = nums[0];
        int mx = nums[0];
        for(int i = 1;i+cur<nums.size();i++){
            cur--;
            mx = max(cur,mx-1);
            mx = max(mx,nums[i]);
            if(cur==0){
                cur = mx;
                ans++;
            }
        }
        return ans;
    }
};