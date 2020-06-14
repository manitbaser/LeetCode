class Solution {
public:
    vector<vector<int>> ans;
    void fn(vector<int>x, vector<int> nums, int i){
        if(i==nums.size()){
            ans.push_back(x);
        }
        else{
            fn(x,nums,i+1);
            x.push_back(nums[i]);
            fn(x,nums,i+1);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        vector<int> x;
        fn(x,nums,0);
        return ans;
    }
};