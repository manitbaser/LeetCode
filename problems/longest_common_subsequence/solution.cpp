class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> x(text1.length()+1,vector<int>(text2.length()+1,0));
        for(int i = 1;i<=text1.length();i++){
            for(int j = 1;j<=text2.length();j++){
                if(text1[i-1]==text2[j-1]){
                    x[i][j] = x[i-1][j-1] +1;
                }
                else{
                    x[i][j] = max(x[i-1][j],x[i][j-1]);
                }
            }
        }
        return x[text1.length()][text2.length()];
    }
};