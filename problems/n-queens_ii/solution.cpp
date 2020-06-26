class Solution {
public:
    int ans = 0;
    void fn(vector<int>& row,vector<int>& d1,vector<int>& d2,int n, int i){
        if(i==n) ans++;
        else 
            for(int j = 0;j<n;j++)
            if(!row[j] && !d1[i+j] && !d2[n-1+i-j]){
                row[j] = d1[i+j] = d2[n-1+i-j] = true;
                fn(row,d1,d2,n,i+1);
                row[j] = d1[i+j] = d2[n-1+i-j] = false;
            }
    }
                
    int totalNQueens(int n) {
        if(n<4) return (n==1)?1:0;
        vector<int> row(n), d1(2*n-1), d2(2*n-1);
        fn(row,d1,d2,n,0);
        return ans;
    }
};
