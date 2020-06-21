class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1||numRows>=s.length()) return s;
        string ans = s;
        int n = 0;
//         Row 1
        for(int i = 0;i<s.length();i+=numRows*2-2) ans[n++] = s[i];
//         Mid Rows
        for(int i = 1;i<numRows-1;i++){
            for(int j = i;j<s.length();){
                ans[n++] = s[j];
                if(j%(2*numRows-2)==i) j+=2*numRows-2*i-2;
                else j+=2*i;
            }
        }
//         Last Row
        for(int i = numRows-1;i<s.length();i+=numRows*2-2) ans[n++] = s[i];
        return ans;
    }
};