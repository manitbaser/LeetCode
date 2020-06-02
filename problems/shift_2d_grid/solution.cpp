class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> ans(grid.size(),vector<int>(grid[0].size(),0));
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                int val = i*grid[0].size()+j+k;
                ans[(val/grid[0].size())%grid.size()][val%grid[0].size()] = grid[i][j];
            }
        }
        return ans;
    }
};