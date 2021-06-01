class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> count;
        int ans = 0;
        for(int i = 0;i<nums.size();i++) count[nums[i]]++;
        for(auto itr=count.begin();itr!=count.end();itr++){
            // cout<<itr->first<<" "<<itr->second<<endl;
            if(itr->second==0) continue;
            // cout<<itr->first<<" "<<itr->second<<endl;
            if(count[itr->first+1]>0) ans = max(ans, itr->second+count[itr->first+1]);
        }
        return ans;
    }
};