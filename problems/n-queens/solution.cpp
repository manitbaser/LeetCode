class Solution {
public:
    vector<vector<string>> ans;
    void fn(vector<string> vec, vector<bool> col,vector<bool> diag1,vector<bool> diag2,int n,int i){
        if(i==n){
            ans.push_back(vec);
            return;
        }
        for(int j = 0;j<n;j++){
            if(col[j]||diag1[i+j]||diag2[i-j+n-1]){
                ;
            }
            else{
                col[j] = true;
                diag1[i+j] = true;
                diag2[i-j+n-1] = true;
                vec[i][j] = 'Q';
                fn(vec,col,diag1,diag2,n,i+1);
                col[j] = false;
                diag1[i+j] = false;
                diag2[i-j+n-1] = false;
                vec[i][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        ans.clear();
        string x(n,'.');
        vector<string> vec(n,x);
        vector<bool> col(n,false);
        vector<bool> diag1(2*n-1,false);
        vector<bool> diag2(2*n-1,false);
        fn(vec,col,diag1,diag2,n,0);
        return ans;
    }
};