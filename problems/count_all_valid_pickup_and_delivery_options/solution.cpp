class Solution {
public:
    long long int fact(int n){
        if(n==1) return 1;
        if(n%2==0) return ((n/2)*fact(n-1))%1000000007;
        return n*fact(n-1)%1000000007;
    }
    int countOrders(int n) {
         return fact(2*n)%1000000007;
    }
};