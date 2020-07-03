class Solution {
public:
    bool hasAlternatingBits(int n) {
        int x = n & 1;
        n/=2;
        while(n){
            if( x != n%2) x = n%2; 
            else return false;
            n/=2;
        }
        return true;
    }
};
