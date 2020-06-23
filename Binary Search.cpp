class Solution {
public:
    int search(vector<int>& nums, int target, int l = 0, int r = 10000) {
        r = (nums.size()-1<r)?nums.size()-1:r;
        if(nums[(l+r)/2]==target) return (l+r)/2;
        if(r<=l) return -1;
        if(nums[(l+r)/2]<target) return search(nums,target,(l+r)/2+1,r);
        return search(nums,target,l,(l+r)/2);
    }
};
