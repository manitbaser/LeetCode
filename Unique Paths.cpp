class Solution {
public:
    int uniquePaths(int m, int n) {
        int a = m+n-2, b = min(m-1,n-1), ans = 1;
        for(int i = 1;i<=b;i++)
            if(ans%i==0) ans = (ans/i)*(a-i+1);
            else ans = (ans*(a-i+1))/i;
        return ans;
    }
};
