class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        int itr;
        vector<bool> ans(queries.size(), true);
        for(int i = 0;i<queries.size();i++){
            itr = 0;
            for(int j = 0;j<queries[i].length() && ans[i]==true;j++){
                if(itr==pattern.length()){
                    if(queries[i][j]>='A' && queries[i][j]<='Z') ans[i] = false;
                }
                else if(pattern[itr]==queries[i][j]) itr++;
                else if(queries[i][j]>='A' && queries[i][j]<='Z') ans[i] = false;
            }
            if(itr<pattern.length()) ans[i] = false;
        }
        return ans;
    }
};