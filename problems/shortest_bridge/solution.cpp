class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid) {
        queue<int> q;
        for(int i = 0;i<grid.size() && q.empty();i++)
            for(int j = 0;j<grid[0].size() && q.empty();j++)
                if(grid[i][j]==1) grid[i][j] = -1, q.push(i*grid[0].size()+j);
        int i,j, ans = INT_MAX;
        while(q.size()){
            i = q.front()/grid[0].size();
            j = q.front()%grid[0].size();
            if(i>0 && grid[i-1][j]==1) grid[i-1][j] = -1, q.push((i-1)*grid[0].size()+j);
            if(j>0 && grid[i][j-1]==1) grid[i][j-1] = -1, q.push(i*grid[0].size()+j-1);
            if(i<grid.size()-1 && grid[i+1][j]==1) grid[i+1][j] = -1, q.push((i+1)*grid[0].size()+j);
            if(j<grid[0].size()-1 && grid[i][j+1]==1) grid[i][j+1] = -1, q.push(i*grid[0].size()+j+1);
            q.pop();
        }
        for(int i = 0;i<grid.size() && q.empty();i++)
            for(int j = 0;j<grid[0].size() && q.empty();j++)
                if(grid[i][j]==1) q.push(i*grid[0].size()+j);
        while(q.size() && ans>1){
            x:
            i = q.front()/grid[0].size();
            j = q.front()%grid[0].size();
            if(i>0){
                if(grid[i-1][j]==-1) ans = min(ans, grid[i][j]-1);
                else if(grid[i-1][j]==0 || grid[i-1][j]>grid[i][j]+1) grid[i-1][j] = grid[i][j]+1, q.push((i-1)*grid[0].size()+j);
                else if(grid[i-1][j]+1<grid[i][j]){ grid[i][j] = grid[i-1][j]+1; goto x;}
            }
            if(j>0){
                if(grid[i][j-1]==-1) ans = min(ans, grid[i][j]-1);
                else if(grid[i][j-1]==0 || grid[i][j-1]>grid[i][j]+1) grid[i][j-1] = grid[i][j]+1, q.push(i*grid[0].size()+j-1);
                else if(grid[i][j-1]+1<grid[i][j]){ grid[i][j] = grid[i][j-1]+1; goto x;}
            }
            if(i<grid.size()-1){
                if(grid[i+1][j]==-1) ans = min(ans, grid[i][j]-1);
                else if(grid[i+1][j]==0 || grid[i+1][j]>grid[i][j]+1) grid[i+1][j] = grid[i][j]+1, q.push((i+1)*grid[0].size()+j);
                else if(grid[i+1][j]+1<grid[i][j]){ grid[i][j] = grid[i+1][j]+1; goto x;}
            }
            if(j<grid[0].size()-1){
                if(grid[i][j+1]==-1) ans = min(ans, grid[i][j]-1);
                else if(grid[i][j+1]==0 || grid[i][j+1]>grid[i][j]+1) grid[i][j+1] = grid[i][j]+1, q.push(i*grid[0].size()+j+1);
                else if(grid[i][j+1]+1<grid[i][j]){ grid[i][j] = grid[i][j+1]+1; goto x;}
            }
            q.pop();
        }
        return ans;
    }
};
