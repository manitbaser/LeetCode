class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans(code.size(),0);
        if(k==0){
            return ans;
        }
        if(k>0){
            ans[0] = accumulate(code.begin()+1, code.begin()+k+1, 0);
            for(int i = 1;i<code.size();i++)
                ans[i] = ans[i-1] + code[(i+k+ans.size())%ans.size()] - code[i];
        }
        else{
            ans[ans.size()-1] = accumulate(code.begin()+ans.size()+k-1,code.end()-1,0);
            for(int i = ans.size()-2;i>=0;i--)
                ans[i] = ans[i+1] + code[(i+k+ans.size())%ans.size()] - code[i];
        }
        return ans;
    }
};