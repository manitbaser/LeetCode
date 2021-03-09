class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<4) return (n>0)?n:-1;
        int a = 0,b = 0,c = 0;
        vector<int> vals(n,1);
        for(int i = 1;i<n;i++){
            vals[i] = min(vals[a]*2,min(vals[b]*3,vals[c]*5));
            if(vals[i]==vals[a]*2) a++;
            if(vals[i]==vals[b]*3) b++;
            if(vals[i]==vals[c]*5) c++;
        }
        return vals[n-1];
    }
};