class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, current = 0;
        for (int i : nums) {
            if(i == 1) current++;
            else{
                ans = max(ans,current);
                if (ans >= nums.size() / 2) return ans;
                current = 0;
            }
        }
        return max(ans, current);
    }
};