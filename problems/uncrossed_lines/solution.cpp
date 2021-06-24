class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(nums1.size(), vector<int>(nums2.size()));
        int i = 0, j = 0;
        while(i<nums1.size() && nums1[i]!=nums2[0]) i++;
        while(i<nums1.size()) ans[i++][0] = 1;
        while(j<nums2.size() && nums2[j]!=nums1[0]) j++;
        while(j<nums2.size()) ans[0][j++] = 1;
        for(i = 1;i<nums1.size();i++) for(j = 1;j<nums2.size();j++)
            if(nums1[i]==nums2[j]) ans[i][j] = max(ans[i-1][j-1]+1, max(ans[i-1][j], ans[i][j-1]));
            else ans[i][j] = max(ans[i-1][j], ans[i][j-1]);
        return ans[i-1][j-1];
    }
};
