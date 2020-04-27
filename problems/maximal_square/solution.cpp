class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()==0 || matrix[0].size()==0){
            return 0;
        }
        int diagonal = 0;
        for(int i = 0;i<matrix.size() && diagonal==0;i++){
            if(matrix[i][0]=='1'){
                diagonal++;
            }
        }
        for(int j = 0;j<matrix[0].size() && diagonal==0;j++){
            if(matrix[0][j]=='1'){
                diagonal++;
            }
        }
        for(int i = 1;i<matrix.size();i++){
            for(int j = 1;j<matrix[0].size();j++){
                if(matrix[i][j]=='1'){
                    matrix[i][j] = min(matrix[i][j-1]-'0',min(matrix[i-1][j]-'0',matrix[i-1][j-1]-'0'))+'1';
                    diagonal = (diagonal>matrix[i][j]-'0')?diagonal:matrix[i][j]-'0';
                }
            }
        }
        return diagonal * diagonal;
    }
};