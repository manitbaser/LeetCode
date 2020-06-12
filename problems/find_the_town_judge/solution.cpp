class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<bool> people(N+1,true);
        for(int i = 0;i<trust.size();i++){
            people[trust[i][0]] = false;
        }
        int val = 0;
        int num = -1;
        for(int i = 1;i<=N;i++){
            if(people[i]){
                val++;
                num = i;
            }
        }
        if(val!=1 || trust.size()<N-1){
            return -1;
        }
        for(int i = 0;i<trust.size();i++){
            if(trust[i][1]==num){
                people[trust[i][0]] = true;
            }
        }
        for(int i = 1;i<=N;i++){
            if(people[i]==false){
                return -1;
            }
        }
        return num;
    }
};