class Solution {
public:
    string removeOuterParentheses(string S) {
        int l = 1;
        S.erase(S.begin());
        for(int i = 0;i<S.length();i++){
            if(S[i]==')'){
                l--;
            }
            else{
                l++;
            }
            if(l==1  && S[i]=='('){
                S.erase(S.begin()+i);
                i--;
            }
            if(l==0){
                S.erase(S.begin()+i);
                i--;
            }
        }
        return S;
    }
};