class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> ab(26);
        for(int i = 0;i<words.size();i++) for(int j = 0;j<words[i].length();j++) ab[words[i][j]-'a']++;
        for(int i = 0;i<26;i++) if(ab[i]%words.size()) return false;
        return true;
    }
};