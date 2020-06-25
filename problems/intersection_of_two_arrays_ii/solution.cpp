class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> x;
        vector<int> ans;
        for(int i : nums1) x[i]++;
        for(int i : nums2) if(--x[i]>=0) ans.push_back(i);
        return ans;
    }
};