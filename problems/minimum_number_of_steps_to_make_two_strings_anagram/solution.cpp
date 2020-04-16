class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> x(26,0);
        for(int i = 0;i<s.length();i++){
            x[s[i]-'a']++;
            x[t[i]-'a']--;
        }
        int ans = 0;
        for(int i = 0;i<x.size();i++){
            ans+=abs(x[i]);
        }
        return ans/2;
    }
};