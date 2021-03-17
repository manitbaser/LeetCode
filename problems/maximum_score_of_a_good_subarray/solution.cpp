class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int temp = nums[k];
        for(int i = k;i>=0;i--){
            temp = min(nums[i],temp);
            nums[i] = temp;
        }
        temp = nums[k];
        for(int i = k;i<nums.size();i++){
            temp = min(nums[i],temp);
            nums[i] = temp;
        }
        int l = 0, r = nums.size()-1, ans = 0;
        while(l<=k && r>=k){
            ans = max(ans, min(nums[l],nums[r])*(r-l+1));
            if(nums[l]<nums[r]){
                while(l+1<nums.size() && nums[l]==nums[l+1])l++;
                l++;
            }
            else{
                while(r-1>=0 && nums[r]==nums[r-1]) r--;
                r--;
            }
        }
        return ans;
    }
};