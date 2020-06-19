class Solution {
public:
    int maxScore(string s) {
        vector<int> num(2);
        for(int i = 0;i<s.length();i++) num[s[i]-'0']++;
        int ans = 0;
        num[0] = 0;
        for(int i = 0;i<s.length()-1;i++){
            if(s[i]=='0') num[0]++;
            else num[1]--;
            ans = max(ans,num[1]+num[0]);
        }
        return ans;
    }
};
