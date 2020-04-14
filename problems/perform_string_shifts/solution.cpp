class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int sh = 0;
        for(int i = 0;i<shift.size();i++){
            if(shift[i][0]){
                sh+=shift[i][1];
            }
            else{
                sh-=shift[i][1];
            }
        }
        if(sh<0){
            sh = -sh;
            sh%=s.length();
            string a = s.substr(0,sh);
            string b = s.substr(sh,s.length());
            return b+a;
        }
        sh%=s.length();
        string a = s.substr(0,s.length()-sh);
        string b = s.substr(s.length()-sh,s.length());
        return b+a;

    }
};