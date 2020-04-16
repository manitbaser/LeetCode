class Solution {
public:
    bool checkValidString(string s) {
        int buffer_left = 0;
        int cur_left = 0;
        int buffer_right = 0;
        int cur_right = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i]=='('){
                cur_left++;
            }
            else if(s[i]==')'){
                cur_left--;
            }
            else{
                buffer_left++;
            }
            if(cur_left<0){
                if(buffer_left>0){
                    buffer_left--;
                    cur_left++;
                }
                else{
                    return false;
                }
            }
            if(s[s.length()-i-1]==')'){
                cur_right++;
            }
            else if(s[s.length()-i-1]=='('){
                cur_right--;
            }
            else{
                buffer_right++;
            }
            if(cur_right<0){
                if(buffer_right>0){
                    buffer_right--;
                    cur_right++;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};