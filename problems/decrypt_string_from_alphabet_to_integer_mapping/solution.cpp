class Solution {
public:
    string freqAlphabets(string s) {
        int i = s.length()-1;
        string ans = "";
        while(i>=0){
            if(s[i]=='#'){
                int num = stoi(s.substr(i-2,2))+'a'-1;
                ans.insert(0,1,char(num));
                i-=3;
            }
            else{
                int num = 'a'+stoi(s.substr(i,1))-1;
                ans.insert(0,1,char(num));
                i-=1;
            }
        }
        return ans;
    }
};