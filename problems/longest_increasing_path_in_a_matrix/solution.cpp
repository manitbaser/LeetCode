class Solution {
public:
    void fn(vector<vector<int>>&matrix, vector<vector<int>>&val, int i, int j){
        int temp = 0;
        if(i>0 && matrix[i][j]<matrix[i-1][j]){
            if(val[i-1][j]==-1) fn(matrix, val, i-1,j);
            temp = max(val[i-1][j],temp);
        }
        if(i<matrix.size()-1 && matrix[i][j]<matrix[i+1][j]){
            if(val[i+1][j]==-1) fn( matrix, val, i+1,j);
            temp = max(val[i+1][j],temp);
        }
        if(j>0 && matrix[i][j]<matrix[i][j-1]){
            if(val[i][j]==-1) fn(matrix, val, i,j-1);
            temp = max(val[i][j-1],temp);
        }
        if(j<matrix[0].size()-1 && matrix[i][j]<matrix[i][j+1]){
            if(val[i][j+1]==-1) fn(matrix, val, i,j+1);
            temp = max(val[i][j+1],temp);
        }
        val[i][j]=max(temp+1,val[i][j]);
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        vector<vector<int>> val(matrix.size(),vector<int>(matrix[0].size(),-1));
        int ans = 0;
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                if(val[i][j]==-1) fn(matrix, val, i, j);
                ans = max(ans,val[i][j]);
            }
        }
        return ans;
    }
};