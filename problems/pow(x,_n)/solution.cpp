class Solution {
public:
    double myPow(double x, int n) {
        if(n==-1) return ((double)1)/x;
        if(n==0) return 1;
        if(n==1) return x;
        if(n%2) return x*myPow(x,n-1);
        else{
            double temp = myPow(x,n/2);
            return temp*temp;
        }
    }
};