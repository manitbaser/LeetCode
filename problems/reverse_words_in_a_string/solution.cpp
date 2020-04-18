class Solution {
public:
    string reverseWords(string s) {
        int i = 0,j = 0;
        while(i<s.length() && s[i]==' '){
            i++;
            j++;
        }
        for(;j<s.length();j++){
            while(j<s.length() && s[j]!=' '){
                j++;
            }
            int k = j-1;
            while(i<k){
                swap(s[i],s[k]);
                i++;k--;
            }
            i = j;
            while(i<s.length() && s[i]==' '){
                i++;
                j++;
            }
        }
        i = 0;
        while(i<s.length() && s[i]==' '){
            i++;
        }
        s = s.substr(i,s.length());
        reverse(s.begin(),s.end());
        i = 0;
        while(i<s.length() && s[i]==' '){
            i++;
        }
        s = s.substr(i,s.length());
        for(int i = 0;i<s.length();i++){
            if(s.length()>i && s[i]==' '){
                int j = 0;
                while(j<s.length() && s[j+i]==' '){
                j++;
                }
                s.erase(i,j-1);
            }
        }
        return s;
    }
};