class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> ans(rowSum.size(), vector<int>(colSum.size(),0));
        // This is O(M+N) Time Complexity Solution
        int i = 0, j = 0;
        while(i<rowSum.size() && j<colSum.size()){
            ans[i][j] = min(rowSum[i],colSum[j]);
            rowSum[i]-=ans[i][j];
            colSum[j]-=ans[i][j];
            if(rowSum[i]==0) i++;
            else j++;
        }
        // This is O(M*N) Time Complexity Solution
        // for(int i = 0;i<rowSum.size();i++){
        //     for(int j = 0;j<colSum.size() && rowSum.size()>0;j++){
        //         if(colSum[j]==0) continue;
        //         ans[i][j] = min(colSum[j], rowSum[i]);
        //         colSum[j]-=ans[i][j];
        //         rowSum[i]-=ans[i][j];
        //     }
        // }
        return ans;
    }
};