class Solution {
public:
    int balancedStringSplit(string s) {
        int sum = 0;
        int R = 0;
        int i = 0;
        while(i<s.length()){
            if(s[i]=='R'){
                R++;
            }
            else{
                R--;
            }
            if(!R){
                sum++;
            }
            i++;
        }
        return sum;
    }
};