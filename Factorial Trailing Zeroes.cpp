//1. 1 Line Recursion Solution
class Solution {
public:
    int trailingZeroes(int n) {
        return (n<5)?0:n/5+trailingZeroes(n/5);
    }
};
//2. 3 Line Iteration Solution
class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        while(n>=5) ans+=n/5, n/=5;
        return ans;
    }
};
