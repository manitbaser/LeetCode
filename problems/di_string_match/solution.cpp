class Solution {
public:
    vector<int> diStringMatch(string S) {
        int l = 0, h = S.length();
        vector<int> ans(S.length()+1,0);
        for(int i = 0;i<S.length();i++){
            if(S[i]=='I'){
                ans[i] = l++;
            }
            else{
                ans[i] = h--;
            }
        }
        ans[S.length()] = h;
        return ans;
    }
};