class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> x;
        for(int i = 0;i<nums.size();i++){
            x[nums[i]]++;
        }
        int count = 0;
        for(auto itr = x.begin();itr!=x.end();itr++){
            int temp = count;
            count+=itr->second;
            itr->second = temp;
        }
        for(int i = 0;i<nums.size();i++){
            nums[i] = x[nums[i]];
        }
        return nums;
    }
};
