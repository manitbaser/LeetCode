class Solution {
public:
    int binaryGap(int N) {
        int ans = 0;
        int cur = -1;
        int i = 0;
        while(N){
            if(N%2==1){
                if(cur!=-1){
                    ans = max(i-cur, ans);
                }
                cur = i;
            }
            i++;
            N/=2;
        }
        return ans;
    }
};