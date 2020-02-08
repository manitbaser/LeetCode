class Solution {
public:
    bool judgeCircle(string moves) {
        int L = 0;
        int U = 0;
        for(int i = 0;i<moves.length();i++){
            if(moves[i]=='R'){
                L--;
            }
            else if(moves[i]=='L'){
                L++;
            }
            else if(moves[i]=='D'){
                U--;
            }
            else{
                U++;
            }
        }
        if(L==0 && U==0){
            return true;
        }
        return false;
    }
};