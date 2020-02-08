class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i = 0;i<A.size();i++){
            for(int j = 0;2*j<A[i].size();j++){
                int temp = A[i][A[i].size()-j-1];
                A[i][A[i].size()-j-1] = 1 xor A [i][j];
                A[i][j] = 1 xor temp;
            }
        }
        return A;
    }
};