//1. Using Unordered Map
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
//2. Using Sorting
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> ans;
        int i = 0, j = 0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]) ans.push_back(nums1[i]),i++,j++;
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        return ans;
    }
};
