class Solution {
public:
    void fn(vector<vector<int>>& A, int i, int j){
        A[i][j] = 0;
        if(i<A.size()-1 && A[i+1][j]==1) fn(A, i+1, j);
        if(i>0 && A[i-1][j]==1) fn(A, i-1, j);
        if(j<A[0].size() && A[i][j+1]==1) fn(A, i, j+1);
        if(j>0 && A[i][j-1]==1) fn(A, i, j-1);
    }
    int numEnclaves(vector<vector<int>>& A) {
        for(int i = 0;i<A.size();i++){
            if(A[i][0]==1) fn(A, i, 0);
            if(A[i][A[0].size()-1]==1) fn(A, i, A[0].size()-1);
        }
        for(int j = 1;j<A[0].size()-1;j++){
            if(A[0][j]==1) fn(A, 0, j);
            if(A[A.size()-1][j]==1) fn(A, A.size()-1, j);
        }
        int ans = 0;
        for(int i=1;i<A.size()-1;i++)ans+=accumulate(A[i].begin()+1,A[i].end()-1,0);
        return ans;
    }
};