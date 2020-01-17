class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<int> rows(n,0);
        vector<int> cols(m,0);
        for(int i = 0;i<indices.size();i++){
            rows[indices[i][0]]++;
            cols[indices[i][1]]++;
        }
        long sum = 0;
        for(int i = 0;i<cols.size();i++){
            for(int j = 0;j<rows.size();j++){
                sum+=(cols[i]+rows[j])%2;
            }
        }
        return sum;
    }
};