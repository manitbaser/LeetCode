class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        vector<vector<int>> val(grid.size(),vector<int>(grid[0].size(),INT_MAX));
        val[0][0] = grid[0][0];
        queue<int> q;
        q.push(0);
        int i,j;
        while(!q.empty()){
            i = q.front()/grid[0].size();
            j = q.front()%grid[0].size();
            q.pop();
            if(i>0 && val[i][j]<val[i-1][j]){
                val[i-1][j] = max(val[i][j], grid[i-1][j]);
                q.push((i-1)*grid[0].size()+j);
            }
            if(i<grid.size()-1 && val[i][j]<val[i+1][j]){
                val[i+1][j] = max(val[i][j], grid[i+1][j]);
                q.push((i+1)*grid[0].size()+j);
            }
            if(j>0 && val[i][j]<val[i][j-1]){
                val[i][j-1] = max(val[i][j], grid[i][j-1]);
                q.push(i*grid[0].size()+j-1);
            }
            if(j<grid[0].size()-1 && val[i][j]<val[i][j+1]){
                val[i][j+1] = max(val[i][j], grid[i][j+1]);
                q.push(i*grid[0].size()+j+1);
            }
        }
        return val[grid.size()-1][grid[0].size()-1];
    }
};