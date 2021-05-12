class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> s(logs.size()), e(logs.size());
        for(int i = 0;i<logs.size();i++) s[i] = logs[i][0], e[i] = logs[i][1];
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());
        int val = 1, year = s[0], cur = 1, i = 0, j = 0;
        while(i<logs.size())
            if(s[i]==e[j]) i++, j++;
            else if(s[i]<e[j]){
                cur++;
                if(cur>val){
                    val = cur;
                    year = s[i];
                }
                i++;
            }
            else cur--, j++;
        return year;
    }
};