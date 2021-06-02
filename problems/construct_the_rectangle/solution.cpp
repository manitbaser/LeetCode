class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans(2);
        ans[0] = sqrt(area);
        while(!ans[1]){
            if(area%ans[0]==0) ans[1] = area/ans[0];
            else ans[0]++;
        }
        if(ans[0]<ans[1]) swap(ans[0], ans[1]);
        return ans;
    }
};