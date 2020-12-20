class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length()!=t.length()) return false;
        unordered_map<char, char> check_1, check_2;
        for(int i = 0;i<s.length();i++){
            if(!check_1[s[i]] && !check_2[t[i]]){
                check_1[s[i]] = t[i];
                check_2[t[i]] = s[i];
            }
            else if(!check_1[s[i]] || !check_2[t[i]]) return false;
            else if(check_1[s[i]]!=t[i] || check_2[t[i]]!=s[i]) return false;
        }
        return true;
    }
};