class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> x = nums;
        if(x.empty()){
            return 0;
        }
        if(x.size()<=2){
            return *max_element(x.begin(),x.end());
        }
        for(int i = 2;i<x.size();i++){
            x[i]+=max(x[i-2],x[i-1]-nums[i-1]);
            
        }
        return max(x[x.size()-1],x[x.size()-2]);
    }
};