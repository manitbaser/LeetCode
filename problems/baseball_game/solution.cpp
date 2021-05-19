class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> ans(ops.size());
        int j = 0;
        for(int i = 0;i<ops.size();i++){
            if(ops[i]=="C") ans[--j] = 0;
            else if(ops[i]=="D") ans[j++] = ans[j-1]*2;
            else if(ops[i]=="+") ans[j++] = ans[j-1] + ans[j-2];
            else ans[j++] = stoi(ops[i]);
        }
        return accumulate(ans.begin(),ans.end(),0);
    }
};