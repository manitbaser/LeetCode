class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int pt = INT_MAX, sum = 0;
        for(int i : nums) sum+=i, pt = min(pt,sum);
        return max(1,-pt+1);
    }
};