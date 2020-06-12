class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int ans = 0;
        if(grid[0][0]) ans+=2+grid[0][0]*2;
        ans+=grid[grid.size()-1][0]+grid[0][grid.size()-1];
        for(int i = 1;i<grid.size();i++){
            if(grid[i][0]) ans+=2+grid[i][0];
            if(grid[0][i]) ans+=2+grid[0][i];
            ans+=abs(grid[i][0]-grid[i-1][0])+abs(grid[0][i]-grid[0][i-1]);
            ans+=grid[i][grid[0].size()-1]+grid[grid.size()-1][i];
            for(int j = 1;j<grid.size();j++){
                if(grid[i][j]) ans+=2;
                ans+=abs(grid[i][j]-grid[i][j-1])+abs(grid[i][j]-grid[i-1][j]);
            }
        }
        return ans;
    }
};