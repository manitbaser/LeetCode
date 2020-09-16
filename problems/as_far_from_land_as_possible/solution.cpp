class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<int> q;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid.size();j++){
                if(grid[i][j]) q.push(i*grid.size()+j);
            }
        }
        if(q.size()==grid.size()*grid.size() || q.empty()) return -1;
        while(!q.empty()){
            int i = q.front()/grid.size(), j = q.front()%grid.size();
            if(i>0 &&( grid[i-1][j]==0 || grid[i-1][j]-1>grid[i][j])){
                grid[i-1][j] = grid[i][j]+1;
                q.push((i-1)*grid.size()+j);
            }
            if(j>0 &&( grid[i][j-1]==0 || grid[i][j-1]-1>grid[i][j])){
                grid[i][j-1] = grid[i][j]+1;
                q.push(i*grid.size()+j-1);
            }
            if(i<grid.size()-1 &&( grid[i+1][j]==0 || grid[i+1][j]-1>grid[i][j])){
                grid[i+1][j] = grid[i][j]+1;
                q.push((i+1)*grid.size()+j);
            }
            if(j<grid[0].size()-1 &&( grid[i][j+1]==0 ||grid[i][j+1]-1>grid[i][j])){
                grid[i][j+1] = grid[i][j]+1;
                q.push(i*grid.size()+j+1);
            }
            q.pop();
        }
        int ans = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid.size();j++){
                ans = max(ans,grid[i][j]-1);
            }
        }
        return ans;
    }
};