class Solution {
public:
    // Formula: return pow(20,n/2) * pow(5,n%2);
    
    long long mod = 1000000007;
    
    int modpow(long long n){
        if(n<=2) return pow(20,n);
        long long temp = modpow(n/2)%mod;
        return ((long long)pow(20,n%2)*((temp*temp)%mod))%mod;
    }
    
    int countGoodNumbers(long long n) {
        return ((long long)(modpow(n/2) * pow(5,n%2)))%mod;
    }
};
