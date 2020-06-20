class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> x(26);
        for(int i = 0;i<s.length();i++) x[s[i]-'a']--,x[t[i]-'a']++;
        x[t[s.length()]-'a']++;
        for(int i = 0;i<26;i++) if(x[i]) return ('a'+i);
        return 'a';
    }
};
