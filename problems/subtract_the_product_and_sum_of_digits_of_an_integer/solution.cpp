class Solution {
public:
    int subtractProductAndSum(int n) {
        long long prod = n%10;
        long long sum = n%10;
        n/=10;
        while(n){
            prod*=n%10;
            sum+=n%10;
            n/=10;
        }
        return prod - sum;
    }
};