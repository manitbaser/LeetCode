class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> x(256);
        for(char i : s) x[i]++;
        for(int j=0;j<s.length();j++) if(x[s[j]]==1) return j;
        return -1;
    }
};