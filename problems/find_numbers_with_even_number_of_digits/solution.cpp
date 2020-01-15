class Solution {
public:
    int findNumbers(vector<int>& nums) {
        long long sum = 0;
        for(int i = 0;i<nums.size();i++){
            while(nums[i]){
                if(nums[i]/10==0){
                    break;
                }
                nums[i]/=100;
            }
            if(!nums[i]){
                sum++;
            }
        }
        return sum;
    }
};