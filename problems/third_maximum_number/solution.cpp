class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()<3){
            return *max_element(nums.begin(),nums.end());
        }
        bool flag = false;
        int a = INT_MIN, b = INT_MIN, c = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            if(c<nums[i]){
                a = b;
                b = c;
                c = nums[i];
            }
            else if(b<nums[i] && c!=nums[i]){
                a = b;
                b = nums[i];
            }
            else if(a<nums[i] && b!=nums[i] && c!=nums[i]){
                a = nums[i];
            }
            if(nums[i]==INT_MIN){
                flag = true;
            }
        }
        cout<<a<<" "<<b<<" "<<c;
        if(a==INT_MIN && flag ==true && b!=INT_MIN && c!=INT_MIN){
            return a;
        }
        else if(a==INT_MIN){
            return c;
        }
        return a;
    }
};