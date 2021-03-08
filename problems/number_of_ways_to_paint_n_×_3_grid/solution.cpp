class Solution {
public:
    int numOfWays(int n) {
        long patterns[2], mod = 1e9 + 7;
        patterns[0] = 6;
        patterns[1] = 6;
        for(int i = 2;i<=n;i++){
            long a = (((patterns[0]%mod)*3)%mod + ((patterns[1]%mod)*2)%mod)%mod;
            long b = (((patterns[0]%mod)*2)%mod + ((patterns[1]%mod)*2)%mod)%mod;
            patterns[0] = a;
            patterns[1] = b;
        }
        return (patterns[0]%mod + patterns[1]%mod)%mod;
    }
};