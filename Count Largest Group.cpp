class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> x(37,0);
        for(int i = 1;i<=n;i++){
            int j = i;
            int sum = 0;
            while(j){
                sum+=j%10;
                j/=10;
            }
            x[sum]++;
        }
        int mxval = x[0];
        int mx = 1;
        for(int i = 1;i<x.size();i++){
            if(x[i]==mxval){
                mx++;
            }
            else if(x[i]>mxval){
                mx = 1;
                mxval = x[i];
            }
        }
        return mx;
    }
};
