class Solution {
public:
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        long sum1 = 0, sum2 = 0, ptr1 = 0, ptr2 = 0, lim = (long)1000000007;
        while(ptr1<nums1.size() && ptr2<nums2.size())
            if(nums1[ptr1]==nums2[ptr2])sum2=sum1=max(sum1,sum2)+nums1[ptr1++],ptr2++;
            else if(nums1[ptr1]<nums2[ptr2]) sum1+=nums1[ptr1++];
            else sum2+=nums2[ptr2++];
        while(ptr1<nums1.size()) sum1+=nums1[ptr1++];
        while(ptr2<nums2.size()) sum2+=nums2[ptr2++];
        return max(sum1,sum2)%lim;
    }
};