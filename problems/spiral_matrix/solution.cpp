class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans(matrix.size()*matrix[0].size(),0);
        int i = 0;
        for(int r = 0; 2*r<=matrix.size() && 2*r<=matrix[0].size(); r++){
            for(int j = r;j<matrix[0].size()-r && i<ans.size();j++)
                ans[i++] = matrix[r][j];
            for(int j = r+1;j<matrix.size()-r && i<ans.size();j++)
                ans[i++] = matrix[j][matrix[0].size()-r-1];
            for(int j = matrix[0].size()-r-2;j>=r && i<ans.size();j--)
                ans[i++] = matrix[matrix.size()-r-1][j];
            for(int j = matrix.size()-r-2;j>r && i<ans.size();j--)
                ans[i++] = matrix[j][r];
            // r++;
        }
        return ans;
    }
};