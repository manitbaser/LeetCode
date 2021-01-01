class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;
        queue<int> open;
        for(int i = 0;i<grid.size();i++){
            if(grid[i][0]==0)
                open.push(i*grid[0].size());
            if(grid[i][grid[0].size()-1]==0)
                open.push((i+1)*grid[0].size()-1);
            while(!open.empty()){
                int i=open.front()/grid[0].size(),j=open.front()%grid[0].size();
                grid[i][j] = -1;
                if(i<grid.size()-1 && grid[i+1][j]==0)
                    open.push((i+1)*grid[0].size()+j);
                if(i>0 && grid[i-1][j]==0)
                    open.push((i-1)*grid[0].size()+j);
                if(j<grid[0].size()-1 && grid[i][j+1]==0)
                    open.push(i*grid[0].size()+j+1);
                if(j>0 && grid[i][j-1]==0)
                    open.push(i*grid[0].size()+j-1);
                open.pop();
            }
        }
        for(int j = 1;j<grid[0].size()-1;j++){
            if(grid[0][j]==0)
                open.push(j);
            if(grid[grid.size()-1][j]==0)
                open.push((grid.size()-1)*grid[0].size()+j);
            while(!open.empty()){
                int i=open.front()/grid[0].size(),j=open.front()%grid[0].size();
                grid[i][j] = -1;
                if(i<grid.size()-1 && grid[i+1][j]==0)
                    open.push((i+1)*grid[0].size()+j);
                if(i>0 && grid[i-1][j]==0)
                    open.push((i-1)*grid[0].size()+j);
                if(j<grid[0].size()-1 && grid[i][j+1]==0)
                    open.push(i*grid[0].size()+j+1);
                if(j>0 && grid[i][j-1]==0)
                    open.push(i*grid[0].size()+j-1);
                open.pop();
            }
        }
        queue<int> close;
        for(int i = 1;i<grid.size()-1;i++){
            for(int j = 1;j<grid[0].size()-1;j++){
                if(grid[i][j]==0){
                    close.push(i*grid[0].size()+j);
                    ans++;
                    while(!close.empty()){
                        int i=close.front()/grid[0].size();
                        int j=close.front()%grid[0].size();
                        grid[i][j] = -1;
                        if(grid[i+1][j]==0)
                            close.push((i+1)*grid[0].size()+j);
                        if(grid[i-1][j]==0)
                            close.push((i-1)*grid[0].size()+j);
                        if(grid[i][j+1]==0)
                            close.push(i*grid[0].size()+j+1);
                        if(grid[i][j-1]==0)
                            close.push(i*grid[0].size()+j-1);
                        close.pop();
                    }
                }
            }
        }
        return ans;
    }
};