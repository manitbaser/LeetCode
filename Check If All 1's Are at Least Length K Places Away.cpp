class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        if(!k) return true;
        int gap = k;
        for(int i = 0;i<nums.size();i++)
            if(nums[i])
                if(gap<k) return false;
                else gap = 0;
            else gap++;
        return true;
    }
};
