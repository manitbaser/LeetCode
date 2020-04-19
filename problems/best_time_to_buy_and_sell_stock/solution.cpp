class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        for(int i = 0;i<prices.size();i++){
            int left = prices[i];
            while(i<prices.size() && prices[i]>=left){
                ans = max(prices[i]-left,ans);
                i++;

            }
            i--;
        }
        return ans;
    }
};