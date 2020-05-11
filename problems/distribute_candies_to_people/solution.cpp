class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people,0);
        int val = 0;
        x:
        for(int i = 0;i<num_people && candies>0;i++){
            ans[i]+=min(val*num_people+i+1,candies);
            candies-=(val*num_people+i+1);
            if(candies<=0){
                return ans;
            }
        }
        if(candies>0){
            val++;
        }
        goto x;
        return ans;
    }
};