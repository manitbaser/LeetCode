class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> glasses(query_row+1);
        glasses[0] = {(double)poured};
        for(int i = 1;i<=query_row;i++){
            glasses[i] = vector<double>(i+1);
            glasses[i][0] = glasses[i][i] = max((glasses[i-1][0]-1)/2,0.0);
            for(int j = 1;j<glasses[i].size()-1;j++) glasses[i][j] = max((glasses[i-1][j-1]-1.0)/2, 0.0)+max((glasses[i-1][j]-1.0)/2, 0.0);
        }
        return min(1.0, glasses[query_row][query_glass]);
    }
};