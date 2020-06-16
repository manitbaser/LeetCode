class Solution {
public:
    int numTrees(int n) {
        if(n<=2){
            return n;
        }
        vector<int> x(n+1,0);
        x[0] = 1;
        x[1] = 1;
        x[2] = 2;
        for(int i = 3;i<=n;i++){
            for(int j = 1;j<=i/2;j++){
                x[i]+=2*x[j-1]*x[i-j];
            }
            if(i%2==1){
                x[i]+=x[i/2]*x[i/2];
            }
        }
        return x[n];
    }
};