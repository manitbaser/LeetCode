// class Solution {
// public:
//     int projectionArea(vector<vector<int>>& grid) {
//         long ground = 0;
//         long row = 0;
//         map<int,long> shadow_col;
//         for(int i = 0;i<grid.size();i++){
//             long shadow_row = 0;
//             for(int j = 0;j<grid[i].size();j++){
//                 if(grid[i][j])
//                 ground++;
//                 shadow_row = (shadow_row>=grid[i][j])?shadow_row:grid[i][j];
//                 shadow_col[j] = (shadow_col[j]>=grid[i][j])?shadow_col[j]:grid[i][j];
//             }
//             row+=shadow_row;
//         }
//         long col = 0;
//         for(auto itr = shadow_col.begin();itr!=shadow_col.end();itr++){
//             col+=itr->second;
//         }
//         return(ground+row+col);
//     }
// };

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int area = 0;
        // top
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j])
                    ++area;   
            }
        }
        // front
        for (int i = 0; i < grid.size(); ++i) {
            int maxY = 0;
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] > maxY)
                    maxY = grid[i][j];
            }
            area += maxY;
        }
        //side
        for (int j = 0; j < grid[0].size(); ++j) {
            int maxY = 0;
            for (int i = 0; i < grid.size(); ++i) {
                if (grid[i][j] > maxY)
                    maxY = grid[i][j];
            }
            area += maxY;
        }
        return area;
    }
};