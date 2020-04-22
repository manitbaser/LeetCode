class Solution {
public:
    string toGoatLatin(string S) {
        string a = "a";
        for(int i = 0;i<S.length();i++){
            while(i<S.length() && S[i]==' '){
                i++;
            }
            if(i>=S.length()){
                break;
            }
            if(S[i]=='a'||S[i]=='A'||S[i]=='e'||S[i]=='E'||S[i]=='i'||S[i]=='I'|| S[i]=='o'||S[i]=='O'||S[i]=='u'||S[i]=='U'){
                while(i<S.length() && S[i]!=' '){
                    i++;
                }
                S.insert(i,"ma");
                S.insert(i+2,a);
            }
            else{
                i++;
                while(i<S.length() && S[i]!=' '){
                    swap(S[i],S[i-1]);
                    i++;
                }
                S.insert(i,"ma");
                S.insert(i+2,a);
            }
            i = i+1+a.length();
            a+='a';
        }
        return S;
    }
};