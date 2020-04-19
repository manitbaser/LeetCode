class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0];
        int count = 1;
        for(int j = 1;j<nums.size()&& count<=nums.size()/2;j++){
            if(ans==nums[j]){
                count++;
            }
            else{
                count--;
                if(count==0){
                    ans = nums[j];
                    count++;
                }
            }
        }
        return ans;
    }
};