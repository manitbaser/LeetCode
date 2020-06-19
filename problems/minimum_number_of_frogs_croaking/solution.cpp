class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        vector<int> x(4);
        int ans = 0;
        for(int i = 0;i<croakOfFrogs.size();i++){
            if(croakOfFrogs[i]=='c') ans = max(ans,++x[0]);
            else if(croakOfFrogs[i]=='r')
                if(x[0]<x[1]+1) return -1;
                else x[1]++;
            else if(croakOfFrogs[i]=='o')
                if(x[1]<x[2]+1) return -1;
                else x[2]++;
            else if(croakOfFrogs[i]=='a')
                if(x[2]<x[3]+1) return -1;
                else x[3]++;
            else if(croakOfFrogs[i]=='k')
                if(x[3]==0) return -1;
                else{
                    x[0]--;x[1]--;x[2]--;x[3]--;
                }
            else return -1;
        }
        for(int i = 0;i<4;i++) if(x[i]) return -1;
        return ans;
    }
};