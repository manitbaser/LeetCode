class Solution {
public:
    bool isMatch(string s, string p) {
        int i = 0,j = 0;
        int j2 = -1,i2 = -1;
        while(i<s.length()){
            if(p[j]=='?'||p[j]==s[i]){
                i++;
                j++;
            }
            else if(p[j]=='*'){
                j2 = j;
                j+=1;
                i2 = i;
            }
            else if(j2!=-1){
                j = j2+1;
                i = i2+1;
                i2 = i2+1;
            }
            else{
                return false;
            }
        }
        while(p[j]=='*'){
            j++;
        }
        return j==p.length();
    }
};