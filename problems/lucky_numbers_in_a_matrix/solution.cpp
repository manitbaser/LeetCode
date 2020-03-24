class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> x = matrix[0];
        vector<bool> mn(matrix[0].size(),false);
        for(int i = 0;i<matrix.size();i++){
            int min = matrix[i][0];
            int p = 0;
            for(int j = 0;j<matrix[i].size();j++){
                if(x[j]<=matrix[i][j]){
                    x[j] = matrix[i][j];
                    mn[j] = false;
                }
                if(min>=matrix[i][j]){
                    min = matrix[i][j];
                    p = j;
                }
            }
            if(x[p] == min)
            mn[p] = true;
        }
        vector<int> ans;
        for(int i = 0;i<mn.size();i++){
            if(mn[i]){
                ans.push_back(x[i]);
            }
        }
        return ans;
    }
};