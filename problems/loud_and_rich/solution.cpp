class Solution {
public:
    int fn(vector<vector<int>>&rich, vector<int>&ans, vector<int>&quiet, int&i){
        if(ans[i]==-1){
            if(rich[i].size()==0) ans[i] = i;
            else{
                int temp = ans[i] = i;
                for(int j = 0;j<rich[i].size();j++){
                    temp = fn(rich, ans, quiet, rich[i][j]);
                    if(quiet[ans[i]]>quiet[temp]) ans[i] = temp;
                }
            }
        }
        return ans[i];
    }
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        vector<vector<int>> rich(quiet.size());
        vector<int> ans(quiet.size(),-1);
        for(int i = 0;i<richer.size();i++){
            rich[richer[i][1]].push_back(richer[i][0]);
        }
        for(int i = 0;i<quiet.size();i++){
            if(ans[i]==-1){
                if(rich[i].size()==0) ans[i] = i;
                else{
                    int temp = ans[i] = i;
                    for(int j = 0;j<rich[i].size();j++){
                        temp = fn(rich, ans, quiet, rich[i][j]);
                        if(quiet[ans[i]]>quiet[temp]) ans[i] = temp;
                    }
                }
            }
        }
        return ans;
    }
};