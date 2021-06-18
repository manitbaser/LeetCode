class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string val = to_string(n);
        int i = 0;
        while(i<val.length()-1){
            i = max(i,0);
            if(val[i]<=val[i+1]) i++;
            else{
                for(int j = i+1;j<val.length();j++) val[j] = '9';
                val[i--]--; 
            }
        }
        while(val.length() && val[0]=='0') val.erase(0,1);
        if(!val.length()) return 0;
        return stoi(val);
    }
};