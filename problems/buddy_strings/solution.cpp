class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.length()!=B.length()||A.length()<2) return false;
        vector<int> x(26);
        int dif = 0, val = 0;
        for(int i = 0;i<A.length();i++)
            if(A[i]!=B[i]) dif++, val+=A[i]-B[i];
            else x[A[i]-'a']++;
        if(dif!=0) return val==0 && dif==2;
        for(int i = 0;i<26;i++) if(x[i]>=2) return true;
        return false;
    }
};