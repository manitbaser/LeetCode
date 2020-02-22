class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        long ans = 0;
        int j = 0;
        for(int i = grid.size()-1;i>=0 &&j<grid[0].size();i--){
            while(j<grid[0].size()&&grid[i][j]>=0){
                j++;
            }
            ans+=grid[0].size()-j;
        }
        return ans;
    }
};