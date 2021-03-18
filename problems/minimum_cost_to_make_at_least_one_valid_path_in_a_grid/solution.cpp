class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        vector<vector<int>> cost(grid.size(),vector<int>(grid[0].size(),INT_MAX));
        cost[0][0] = 0;
        queue<int> q;
        q.push(0);
        int i,j;
        while(!q.empty()){
            i = q.front()/grid[0].size();
            j = q.front()%grid[0].size();
            // cout<<cost[i][j]<<" "<<i<<" "<<j<<endl;
//             1
            if(grid[i][j]==1){
                if(j<grid[0].size()-1 && cost[i][j+1]>cost[i][j]){
                    cost[i][j+1] = cost[i][j];
                    q.push(q.front()+1);
                    // cout<<q.front()+1<<endl;
                }
                if(i>0 && cost[i-1][j]>cost[i][j]+1){
                    cost[i-1][j] = cost[i][j]+1;
                    q.push(q.front() - grid[0].size());
                    // cout<<q.front() - grid[0].size()<<endl;
                }
                if(i<grid.size()-1 && cost[i+1][j]>cost[i][j]+1){
                    cost[i+1][j] = cost[i][j]+1;
                    q.push(q.front() + grid[0].size());
                    // cout<<q.front() + grid[0].size()<<endl;
                }
                if(j>0 && cost[i][j-1]>cost[i][j]+1){
                    cost[i][j-1] = cost[i][j]+1;
                    q.push(q.front()-1);
                    // cout<<q.front()-1<<endl;
                }
            }
//             2
            else if(grid[i][j]==2){
                if(j>0 && cost[i][j-1]>cost[i][j]){
                    cost[i][j-1] = cost[i][j];
                    q.push(q.front()-1);
                }
                if(i>0 && cost[i-1][j]>cost[i][j]+1){
                    cost[i-1][j] = cost[i][j]+1;
                    q.push(q.front() - grid[0].size());
                }
                if(i<grid.size()-1 && cost[i+1][j]>cost[i][j]+1){
                    cost[i+1][j] = cost[i][j]+1;
                    q.push(q.front() + grid[0].size());
                }
                if(j<grid[0].size()-1 && cost[i][j+1]>cost[i][j]+1){
                    cost[i][j+1] = cost[i][j]+1;
                    q.push(q.front()+1);
                }
            }
//             3
            else if(grid[i][j]==3){
                if(i<grid.size()-1 && cost[i+1][j]>cost[i][j]){
                    cost[i+1][j] = cost[i][j];
                    q.push(q.front()+grid[0].size());
                }
                if(i>0 && cost[i-1][j]>cost[i][j]+1){
                    cost[i-1][j] = cost[i][j]+1;
                    q.push(q.front() - grid[0].size());
                }
                if(j<grid[0].size()-1 && cost[i][j+1]>cost[i][j]+1){
                    cost[i][j+1] = cost[i][j]+1;
                    q.push(q.front() + 1);
                }
                if(j>0 && cost[i][j-1]>cost[i][j]+1){
                    cost[i][j-1] = cost[i][j]+1;
                    q.push(q.front()-1);
                }
            }
//             4
            else{
                if(i>0 && cost[i-1][j]>cost[i][j]){
                    cost[i-1][j] = cost[i][j];
                    q.push(q.front()-grid[0].size());
                }
                if(j<grid[0].size()-1 && cost[i][j+1]>cost[i][j]+1){
                    cost[i][j+1] = cost[i][j]+1;
                    q.push(q.front() + 1);
                }
                if(i<grid.size()-1 && cost[i+1][j]>cost[i][j]+1){
                    cost[i+1][j] = cost[i][j]+1;
                    q.push(q.front() + grid[0].size());
                }
                if(j>0 && cost[i][j-1]>cost[i][j]+1){
                    cost[i][j-1] = cost[i][j]+1;
                    q.push(q.front()-1);
                }
            }
            q.pop();
        }
        return cost[grid.size()-1][grid[0].size()-1];
    }
};