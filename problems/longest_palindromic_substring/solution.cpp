class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int j;
        for(int i = 0;i<s.length();i++){
            j = 1;
            while(i-j>=0 && i+j<s.length() && s[i-j]==s[i+j]) j++;
            if(ans.length()<(2*j-1)) ans = s.substr(i-j+1, 2*j-1);
            j = 1;
            while(i-j+1>=0 && i+j<s.length() && s[i-j+1]==s[i+j]) j++;
            if(ans.length()<(2*j-2)) ans = s.substr(i-j+2, 2*j-2);
        }
        return ans;
    }
};