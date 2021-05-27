class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ans(grid[0].size(), 0);
        if(ans.size()==1){
            ans[0] = -1;
            return ans;
        }
        for(int j = 0;j<ans.size();j++){
            ans[j] = j;
        }
        for(int i = 0;i<grid.size();i++){   
            for(int j = 0;j<ans.size();j++){
                if(ans[j]==-1) continue;
                if(ans[j]==0){
                    if(grid[i][0]==-1) ans[j] = -1;
                    else if(grid[i][1]==-1) ans[j] = -1;
                    else ans[j] = 1;
                }
                else if(ans[j]==ans.size()-1){
                    if(grid[i][ans.size()-1]==1) ans[j] = -1;
                    else if(grid[i][ans.size()-2]==1) ans[j] = -1;
                    else ans[j] = ans.size()-2;
                }
                else if(grid[i][ans[j]]==-1 && grid[i][ans[j]-1]==-1) ans[j]--;
                else if(grid[i][ans[j]]==1 && grid[i][ans[j]+1]==1) ans[j]++;
                else ans[j] = -1;
            }
        }
        return ans;
    }
};