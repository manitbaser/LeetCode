class Solution {
public:
    int ans = 0, walked = 0;
    
    void path(vector<vector<int>>& grid, int i, int j){
        grid[i][j] = -1;
        if(i>0){
            if(grid[i-1][j]==0){
                walked--;
                path(grid,i-1,j);
                walked++;
            }
            else if(grid[i-1][j]==2 && walked==0){
                ans++;
            }
        }
        if(i<grid.size()-1){
            if(grid[i+1][j]==0){
                walked--;
                path(grid,i+1,j);
                walked++;
            }
            else if(grid[i+1][j]==2 && walked==0){
                ans++;
            }
        }
        if(j>0){
            if(grid[i][j-1]==0){
                walked--;
                path(grid,i,j-1);
                walked++;
            }
            else if(grid[i][j-1]==2 && walked==0){
                ans++;
            }
        }
        if(j<grid[0].size()-1){
            if(grid[i][j+1]==0){
                walked--;
                path(grid,i,j+1);
                walked++;
            }
            else if(grid[i][j+1]==2 && walked==0){
                ans++;
            }
        }
        grid[i][j] = 0;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int i1 = 0, j1 = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j]==0) walked++;
                else if(grid[i][j]==1){
                    i1 = i;
                    j1 = j;
                }
            }
        }
        path(grid,i1,j1);
        return ans;
    }
};