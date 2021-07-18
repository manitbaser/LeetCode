class Solution {
public:
    string truncateSentence(string s, int k) {
        int i = 0;
        for(;i<s.length() && k;i++) if(s[i]==' ') k--;
        return s.substr(0,i+k-1);
    }
};