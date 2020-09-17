class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> row(grid.size(),0), col(grid[0].size(),0);
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j]){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int ans = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                // cout<<i<<" "<<j<<" "<<row[i]<<" "<<col[j]<<endl;
                if(grid[i][j] && (row[i]>1||col[j]>1)) ans++;
            }
        }
        return ans;
    }
};