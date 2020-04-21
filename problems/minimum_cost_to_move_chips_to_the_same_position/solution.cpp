class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int odd = 0;
        int even = 0;
        for(int i = 0;i<chips.size();i++){
            if(chips[i]%2==0){
                odd++;
            }
            else{
                even++;
            }
        }
        return min(odd,even);
    }
};