class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        while(n>0)
            if(n%26==0) ans+='Z', n = (n-26)/26;
            else ans+='A'+ n%26-1, n/=26;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
