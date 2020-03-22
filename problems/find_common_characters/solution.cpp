class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int cnt[26];
        for(int i = 0; i < 26; i++) cnt[i] = INT_MAX;
        vector<string> out;
        
        for(string s : A)
        {
            int t[26]={0};
            for(char c : s) t[c-'a']++;
            for(int i = 0; i < 26; i++) cnt[i] = std::min(cnt[i], t[i]);
        }
        for(int i = 0; i < 26; i++)
        {
            while(cnt[i]--) out.push_back({static_cast<char>(i+'a')});
        }
        return out;
    }
};