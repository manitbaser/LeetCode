class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>x(256,-1);
        int j = -1, ans = 0, i = 0;
        for(;i<s.length();i++)
            if(x[s[i]]!=-1) ans = max(ans,i-j-1), j = max(j,x[s[i]]), x[s[i]] = i;
            else x[s[i]] = i;
        ans = max(ans,i-1-j);
        return ans;
    }
};