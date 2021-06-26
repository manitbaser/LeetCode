class Solution {
public:
    int maxPower(string s) {
        int ans = 1, j = 0;
        for(int i = j, j = i;i<s.length();i++) while(j<s.length() && s[i]==s[j]) j++, ans = max(ans,j-i);
        return ans;
    }
};