class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        vector<vector<int>> dom(10,vector<int>(10,0));
        for(int i = 0;i<dominoes.size();i++) dom[dominoes[i][0]][dominoes[i][1]]++, dom[dominoes[i][1]][dominoes[i][0]]++;
        long ans = 0;
        for(int i = 1;i<10;i++) ans+=(((dom[i][i]/2)*((dom[i][i])/2-1))/2);
        for(int i = 1;i<10;i++) for(int j = i+1;j<10;j++) ans+=(((dom[i][j])*(dom[i][j]-1))/2);
        return ans;
        
    }
};