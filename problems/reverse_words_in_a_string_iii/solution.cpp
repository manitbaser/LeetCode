class Solution {
public:
    string reverseWords(string s) {
        int i,j = 0;
        while(j<s.length()){
            while(j<s.length() && s[j]!=' '){
                j++;
            }
            reverse(s.begin()+i, s.begin()+j);
            i = j+1;
            j++;
            
        }
        return s;
    }
};