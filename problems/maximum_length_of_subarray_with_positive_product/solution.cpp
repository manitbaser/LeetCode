class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int ans = 0, poscur = 0, neg = 0, negcur = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0) poscur = i+1, neg = 0, negcur = i+1;
            else if(nums[i]<0) neg++, negcur = i+1;
            ans = max(ans, i-negcur+1);
            if(neg%2==0) ans = max(ans, i-poscur+1);
        }
        poscur = nums.size()-1, neg = 0, negcur = nums.size()-1;
        for(int i = nums.size()-1;i>=0;i--){
            if(nums[i]==0) poscur = i-1, neg = 0, negcur = i-1;
            else if(nums[i]<0) neg++, negcur = i-1;
            ans = max(ans, negcur-i+1);
            if(neg%2==0) ans = max(ans, poscur-i+1);
        }
        return ans;
    }
};