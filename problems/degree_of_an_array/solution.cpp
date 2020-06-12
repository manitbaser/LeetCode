class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,vector<int>>x;
        int len = 0;
        int ans = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            x[nums[i]].push_back(i);
            if(x[nums[i]].size()>len){
                len = x[nums[i]].size();
                ans = i-x[nums[i]][0]+1;
            }
            else if(x[nums[i]].size()==len){
                ans = min(ans,i-x[nums[i]][0]+1);
            }
        }
        return ans;
    }
};