class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int i = 0;i<mat[0].size();i++){
            vector<int> y(min(mat.size(),mat[0].size()-i));
            int k = 0;
            int j = i;
            while(k<mat.size() && j<mat[0].size()){
                y[k] = mat[k][j];
                k++;
                j++;
            }
            sort(y.begin(),y.end());
            k = 0;
            j = i;
            while(k<mat.size() && j<mat[0].size()){
                mat[k][j] = y[k];
                k++;
                j++;
            }
            
        }
        for(int i = 1;i<mat.size();i++){
            vector<int> y(min(mat[0].size(),mat.size()-i),0);
            int k = 0;
            int j = i;
            while(k<mat[0].size() && j<mat.size()){
                y[k] = mat[j][k];
                j++;
                k++;
            }
            sort(y.begin(),y.end());
            k = 0;
            j = i;
            while(k<mat[0].size() && j<mat.size()){
                mat[j][k] = y[k];
                j++;
                k++;
            }
        }
        return mat;
    }
};