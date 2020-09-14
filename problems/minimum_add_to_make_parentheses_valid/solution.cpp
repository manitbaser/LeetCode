class Solution {
public:
    int minAddToMakeValid(string S) {
        int cur = 0, ans = 0;
        for(int i = 0;i<S.length();i++)
            if(S[i]=='(') cur++;
            else if(--cur<0){
                cur++;
                ans++;
            }
        return ans+cur;
    }
};