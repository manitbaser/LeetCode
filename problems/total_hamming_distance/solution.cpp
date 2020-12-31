class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> x;
        for(int i = 0;i<nums.size();i++){
            int j = 1;
            while(nums[i]>=j){
                if(nums[i] & j) x[j]++;
                j*=2;
            }
        }
        for(auto itr = x.begin();itr!=x.end();itr++)
            ans+=(nums.size()-itr->second)*itr->second;
        return ans;
    }
};