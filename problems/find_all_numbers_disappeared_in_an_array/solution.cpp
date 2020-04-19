class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> x(nums.size(),false);
        for(int i = 0;i<nums.size();i++){
            x[nums[i]-1] = true;
        }
        vector<int> ans;
        for(int i = 0;i<x.size();i++){
            if(!x[i]){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};