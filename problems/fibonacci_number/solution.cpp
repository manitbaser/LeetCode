class Solution {
public:
    int fib(int N) {
        if(N<2){
            return N;
        }
        int z = 0;
        int o = 1;
        for(int i = 2;i<=N;i++){
            int ans = o+z;
            z = o;
            o = ans;
        }
        return o;
    }
};