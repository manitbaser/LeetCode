class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> col(grid.size(),0);
        vector<int> row(grid[0].size(),0);
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                col[i] = max(col[i],grid[i][j]);
                row[j] = max(row[j],grid[i][j]);
            }
        }
        int ans = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                ans+=min(col[i],row[j])-grid[i][j];
            }
        }
        return ans;
    }
};