class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int s = S.length()-1;
        int t = T.length()-1;
        int hs = 0;
        int ht = 0;
        while(t>=0 || s>=0){
            while(s>=0 && (S[s]=='#'||hs)){
                if(S[s]=='#'){
                    hs++;
                }
                else{
                    hs--;
                }
                s--;
            }
            while(t>=0 && (T[t]=='#'||ht)){
                if(T[t]=='#'){
                    ht++;
                }
                else{
                    ht--;
                }
                t--;
            }
            if(s<0 && t<0){
                return true;
            }
            if(s<0||t<0){
                return false;
            }
            if(S[s]!=T[t]){
                return false;
            }
            s--;
            t--;
        }
        return true;
    }
};