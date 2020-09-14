class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        vector<int> row(A.size(),0);
        int ans = A.size()*pow(2,A[0].size()-1);
        for(int i = 0;i<A.size();i++){
            if(A[i][0]==0){
                row[i] = 1;
            }
        }
        for(int i = 1;i<A[0].size();i++){
            int count = 0;
            for(int j = 0;j<A.size();j++){
                count+=(row[j] xor A[j][i]);
            }
            count = (count>A.size()-count)?count:A.size()-count;
            ans+=count*pow(2,A[0].size()-1-i);
        }
        return ans;
    }
};