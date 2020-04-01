class Solution {
public:
    vector<vector<int>> ans;
    void fn(vector<int> nums, vector<int> x){
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==INT_MIN){
                continue;
            }
            x.push_back(nums[i]);
            nums[i] = INT_MIN;
            fn(nums,x);
            nums[i] = x[x.size()-1];
            x.pop_back();
        }
        if(x.size()==nums.size()){
            ans.push_back(x);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        ans.clear();
        vector<int> x;
        fn(nums,x);
        return ans;
    }
};