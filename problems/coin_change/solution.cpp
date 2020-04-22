class Solution {
public:
    int ans;
    void fn(vector<int>& coins, int i,int amount, int num){
        if(i<0){
            return;
        }
        if(amount%coins[i]==0){
                ans = min(num+amount/coins[i],ans);
                return;
        }
        for(int j = amount/coins[i];j>=0 && ans>num+j ;j--){
            fn(coins, i-1,amount-j*coins[i],num+j);
        }
    }
    int coinChange(vector<int>& coins, int amount) {
        ans = INT_MAX;
        if(amount==0){
            return 0;
        }
        sort(coins.begin(),coins.end());
        fn(coins,coins.size()-1,amount,0);
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};