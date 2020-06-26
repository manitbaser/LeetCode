class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length()-1;
        while(i<j){
            cout<<s[i]<<" "<<s[j]<<endl;
            if(((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))&&((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z'))){
                if(tolower(s[i])!=tolower(s[j])) return false;
                else{
                    i++;
                    j--;
                }
            }
            else if(s[i]>='0' && s[i]<='9' && s[j]>='0' && s[j]<='9'){
                if(s[i]!=s[j]) return false;
                else{
                    i++;
                    j--;
                }
            }
            else if((s[i]>='0' && s[i]<='9') && ((s[j]>='a' && s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))){
                return false;
            }
            else if((s[j]>='0' && s[j]<='9') && ((s[i]>='a' && s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))){
                return false;
            }
            else if(((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))||(s[i]>='0'&&s[i]<='9')){
                j--;
            }
            else i++;
        }
        return true;
    }
};