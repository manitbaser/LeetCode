class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans(pow(2,n));
        for(int i = 1;i<=n;i++)
            for(int j = pow(2,i-1)-1;j>=0;j--)
                ans[pow(2,i-1)*2-j-1] = ans[j] | 1<<(i-1);
        return ans;
    }
};