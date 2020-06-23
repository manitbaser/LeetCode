class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0) return 0;
        unordered_map<int,int> x;
        for(int i : nums) x[i]++;
        int ans = 0;
        if(k==0){for(auto itr : x) if(itr.second >1) ans++;}
        else for(auto itr : x) if(x.count(itr.first +k)) ans++;
        return ans;
    }
};