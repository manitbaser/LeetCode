class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int i = 0;
        while(n && i<2){
            i+=(n & 1);
            n/=2;
        }
        return i==1;
    }
};