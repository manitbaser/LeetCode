class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int a = nums[0];
        for(int i = 1;i<nums.size() && a!=1;i++) a = gcd(a,nums[i]);
        return (a==1);
    }
};