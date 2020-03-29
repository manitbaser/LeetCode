// class Solution {
// public:
//     int islandPerimeter(vector<vector<int>>& grid) {
//         long long int count = 0;
//         vector<int> x(grid[0].size()+2,0);
//         grid.insert(grid.begin(),x);
//         grid.push_back(x);
//         for(int i = 1;i<grid.size();i++){
//             grid[i].push_back(0);
//             grid[i].insert(grid[i].begin(),0);
//             for(int j = 1;j<grid[0].size();j++){
//                 if(grid[i][j] xor grid[i-1][j]){
//                     count++;
//                 }
//                 if(grid[i][j] xor grid[i][j-1]){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = (row > 0) ? grid[0].size() : 0;
        int res = 0;
        for(int i=0; i<row; ++i)
        {
            for(int j=0; j<col; ++j)
            {
                if(grid[i][j] == 1)
                {
                    if(i==0     || grid[i-1][j]==0) res++;
                    if(j==0     || grid[i][j-1]==0) res++;
                    if(i+1==row || grid[i+1][j]==0) res++;
                    if(j+1==col || grid[i][j+1]==0) res++;
                }
            }
        }
        return res;
    }
};