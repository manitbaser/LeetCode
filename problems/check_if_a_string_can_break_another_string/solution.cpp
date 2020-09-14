class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int i = 0;
        while(i<s1.length() && s1[i]==s2[i]) i++;
        if(i>=s1.length()-1) return true;
        int sign = (s1[i]>s2[i])?1:-1;
        for(;i<s1.length();i++) if((s1[i]-s2[i])/sign<0) return false;  
        return true;
    }
};