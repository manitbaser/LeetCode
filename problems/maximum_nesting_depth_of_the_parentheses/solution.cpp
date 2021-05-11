class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, cur = 0;
        for(int i = 0;i<s.length();i++)
            if(s[i]=='(') cur++, ans = max(ans,cur);
            else if(s[i]==')') cur--;
        return ans;
    }
};