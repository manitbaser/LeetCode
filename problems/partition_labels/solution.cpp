class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<vector<int>> x(26,vector<int>(2,-1));
        for(int i = 0;i<S.length();i++){
            if(x[S[i]-'a'][0]==-1){
                x[S[i]-'a'][0] = i;
            }
            x[S[i]-'a'][1] = i;
        }
        sort(x.begin(),x.end());
        int i = 0;
        while(i<x.size() && x[i][0]==-1){
            i++;
        }
        vector<int> ans;
        for(;i<x.size();i++){
            int val1 = x[i][0];
            int val2 = x[i][1];
            while(i<x.size() && x[i][0]<=val2){
                val2 = max(x[i][1],val2);
                i++;
            }
            ans.push_back(val2-val1+1);
            i--;
        }
        return ans;
    }
};