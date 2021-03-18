class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<int> wins(n+1,0);
        for(int i = 1;i<=n;i++){
            for(int j = sqrt(i);j>0;j--){
                if(wins[i-j*j]==0){
                    wins[i] = 1;
                    break;
                }
            }
        }
        return wins[n];
    }
};