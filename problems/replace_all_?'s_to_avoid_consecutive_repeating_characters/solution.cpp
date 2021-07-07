class Solution {
public:
    string modifyString(string s) {
        s[0] = (s[0]!='?')?s[0]:(s[1]=='a')?'b':'a';
        for(int i = 1;i<s.length()-1;i++) if(s[i]=='?'){    
            s[i] = (s[i-1]-'a'+1)%26 + 'a';
            if(s[i]==s[i+1]) s[i] = (s[i+1]-'a'+1)%26 + 'a';
        }
        s[s.length()-1] = (s[s.length()-1]!='?')?s[s.length()-1]:(s[s.length()-2]-'a'+1)%26 + 'a';
        return s;
    }
};