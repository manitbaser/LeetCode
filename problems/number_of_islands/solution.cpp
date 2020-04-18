class Solution {
public:
    vector<int> x;
    void fn(vector<vector<char>>& grid, int i, int j, int val){
        x[i*grid[0].size()+j] = val;
        if(i>=1 && grid[i-1][j]=='1' && !x[(i-1)*grid[0].size()+j]){
            fn(grid,i-1,j,val);
        }
        if(i<grid.size()-1 && grid[i+1][j]=='1' && !x[(i+1)*grid[0].size()+j]){
            fn(grid,i+1,j,val);
        }
        if(j>=1 && grid[i][j-1]=='1' && !x[i*grid[0].size()+j-1]){
            fn(grid,i,j-1,val);
        }
        if(j<grid[0].size()-1 && grid[i][j+1]=='1' && !x[i*grid[0].size()+j+1]){
            fn(grid,i,j+1,val);
        }
        }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()<1 || grid[0].size()<1){
            return 0;
        }
        int val = 1;
        x.clear();
        x = vector<int>(grid.size()*grid[0].size(),0);
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j]=='1' && !x[i*grid[0].size()+j]){
                    x[i*grid[0].size()+j] = val;
                    
                    if(i>=1 && grid[i-1][j]=='1' && !x[(i-1)*grid[0].size()+j]){
                        fn(grid,i-1,j,val);
                    }
                    if(i<grid.size()-1 && grid[i+1][j]=='1' && !x[(i+1)*grid[0].size()+j]){
                        fn(grid,i+1,j,val);
                    }
                    if(j>=1 && grid[i][j-1]=='1' && !x[i*grid[0].size()+j-1]){
                        fn(grid,i,j-1,val);
                    }
                    if(j<grid[0].size()-1 && grid[i][j+1]=='1' && !x[i*grid[0].size()+j+1]){
                        fn(grid,i,j+1,val);
                    }
                    val++;
                }
            }
        }
        val = 0;
        for(int i = 0;i<x.size();i++){
            val = (val>x[i])?val:x[i];
        }
        return val;
    }
};