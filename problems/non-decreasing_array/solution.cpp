class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
        int x = 0;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                count++;
                if(count>=2){
                    cout<<"1";
                    return false; 
                }
                x = i;
            }
        }
        if(x==0||x==nums.size()-2){
            return true;
        }
        if(x+2<nums.size()&&nums[x-1]>nums[x+1]&&nums[x]>nums[x+2]){
            cout<<"2";
            return false;
        }
        return true;
    }
};