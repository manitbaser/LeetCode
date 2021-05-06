class Solution {
public:
    void fn(int n, vector<int>& vals){
        for(int i = 1;i*i<=n;i++){
            if(vals[n%(i*i)]==INT_MAX/2) fn(n%(i*i), vals);
            vals[n] = min(vals[n], (n/(i*i)) + vals[n%(i*i)]);
        }
    }
    
    int numSquares(int n) {
        vector<int> vals(n+1, INT_MAX/2);
        vals[0] = 0;
        for(int i = 1;i*i<=n;i++) vals[i*i] = 1;
        fn(n, vals);
        return vals[n];
    }
};