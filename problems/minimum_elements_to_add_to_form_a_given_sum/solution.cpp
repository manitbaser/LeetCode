class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum = accumulate(nums.begin(),nums.end(),0l);
        sum = goal-sum;
        if(abs(sum)%((long long)limit)) return abs(sum)/((long long)limit) + 1;
        return abs(sum)/((long long)limit);
    }
};