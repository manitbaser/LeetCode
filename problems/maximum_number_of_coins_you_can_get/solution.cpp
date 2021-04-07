class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int ans = 0;
        for(int i = 0;i<piles.size()/3;i++) ans+=piles[piles.size()-i*2-2];
        return ans;
    }
};