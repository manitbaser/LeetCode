class Solution {
public:
    int minCut(string s) {
        int ans[s.length()+1];
        for(int i = 0;i<=s.length();i++) ans[i] = i-1;
        for(int i = 0;i<s.length();i++){
            for(int j = 0;j<=i && j+i<s.length() && s[i-j]==s[i+j];j++)
                ans[i+j+1] = min(ans[i+j+1], ans[i-j]+1);
            for(int j = 1;j<=i+1 && i+j<s.length() && s[i-j+1]==s[i+j];j++)
                ans[i+j+1] = min(ans[i+j+1], ans[i-j+1]+1);
        }
        return ans[s.length()];
    }
};