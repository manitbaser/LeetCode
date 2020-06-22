class Solution {
public:
    bool isPalindrome(int x) {
        string a = to_string(x);
        for(int i = 0;i<a.length()/2;i++) if(a[i]!=a[a.length()-1-i]) return false;
        return true;
    }
};