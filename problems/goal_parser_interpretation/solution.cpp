class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i = 0;i<command.length();i++){
            if(command[i]=='G') ans+="G";
            else if(command[i]=='a'){
                ans+="al";
                i+=2;
            }
            else if(command[i]==')') ans+="o";
        }
        return ans;
    }
};