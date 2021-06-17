class Solution {
public:
    int minOperations(string s) {
        int ans = 0, len = s.length();
        for(int i = 0;i<len;i++) ans+= ((s[i]-'0') xor (i%2));
        return min(ans, len-ans);
    }
};