class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.size()==0 || matrix[0].size()==0) return;
        int c = 1,r = 1;
        for(int i = 0;i<matrix.size() && c!=0;i++) c = matrix[i][0];
        for(int j = 0;j<matrix[0].size() && r!=0;j++) r = matrix[0][j];
        
        for(int i = 1;i<matrix.size();i++)
            for(int j = 1;j<matrix[0].size();j++)
                if(matrix[i][j]==0) matrix[i][0] = 0, matrix[0][j] = 0;
        
        for(int i = 1;i<matrix.size();i++)
            if(matrix[i][0]==0)
                for(int j = 1;j<matrix[0].size();j++) matrix[i][j] = 0;
                
        for(int j = 1;j<matrix[0].size();j++)
            if(matrix[0][j]==0)
                for(int i = 1;i<matrix.size();i++) matrix[i][j] = 0;
        
        if(c==0) for(int i = 0;i<matrix.size();i++) matrix[i][0] = 0;
        if(r==0) for(int j = 0;j<matrix[0].size();j++) matrix[0][j] = 0;
    }
};