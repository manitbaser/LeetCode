class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> x;
        int ans = 0;
        for(int i:nums)
            if(!x[i]) ans = max(ans,x[i]=x[i-x[i-1]]=x[i+x[i+1]]=x[i+1]+x[i-1]+1);
        return ans;
    }
};