class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int a = 1;
        int b = 1;
        for(int i = 2;i<n+1;i++){
            int ans = a+b;
            b = a;
            a = ans;
        }
        return a;
    }
};