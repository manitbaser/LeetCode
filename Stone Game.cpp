class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int val = 0;
        int i = 0, j = piles.size()-1, flag = 1;
        while(i<=j){
            if(piles[i]>piles[j]) val+=flag*piles[i++];
            else val+=flag*piles[j--];
            flag*=-1;
        }
        return val!=0;
    }
};
