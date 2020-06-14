class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int j = 0;
        while(j<s.length() && s[j]=='0'){
            j++;
        }
        if(j>=s.length()){
            return 1;
        }
        int c = 0;
        for(int i =s.length()-1;i>j;i--){
            if((s[i]-'0') xor c){
                c = 1;
                steps++;
            }
            steps++;
        }
        if(c){
            steps++;
        }
        return steps;
    }
};
