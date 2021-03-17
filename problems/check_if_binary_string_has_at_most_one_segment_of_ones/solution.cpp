class Solution {
public:
    bool checkOnesSegment(string s) {
        int i = 1;
        while(i<s.length() && s[i]=='1') i++;
        while(i<s.length() && s[i]!='1') i++;
        return i==s.length();
    }
};