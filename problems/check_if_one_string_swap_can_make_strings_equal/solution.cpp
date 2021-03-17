class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        // if(s1.length()!=s2.length()) return false;
        int j = -1;
        for(int i = 0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                if(j==-1) j = i;
                else if(j==s1.length()) return false;
                else if(s1[i]==s2[j] && s1[j]==s2[i]) j = s1.length();
                else return false;
            }
        }
        return j==s1.length() || j==-1;
    }
};