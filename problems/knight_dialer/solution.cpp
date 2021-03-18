class Solution {
public:
    int knightDialer(int n) {
        if(n<2) return 10*n;
        vector<long> num(10,1);
        vector<long> temp(10,0);
        for(int i = 2;i<=n;i++){
            temp[0] = (2*num[4])%1000000007;
            temp[1] = (num[4] + num[8])%1000000007;
            temp[2] = (2*num[7])%1000000007;
            temp[4] = (num[1] + num[7] + num[0])%1000000007;
            temp[7] = (num[2] + num[4])%1000000007;
            temp[8] = (2*num[1])%1000000007;
            num = temp;
        }
        num[3] = num[1];
        num[6] = num[4];
        num[9] = num[7];
        num[5] = 0;
        long ans = accumulate(num.begin(),num.end(),0l)%1000000007;
        return ans;
    }
};