class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        for(int i = -(n-1)/2;i<=n/2;i++){
            ans.push_back(i);
        }
        if(n%2==0){
            ans[n/2-1] = -n/2;
        }
        return ans;
    }
};