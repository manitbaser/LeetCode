class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans(seq.length(),0);
        int count = 0;
        for(int i = 0;i<seq.length();i++)
            if(seq[i]=='(') ans[i] = (count++)%2;
            else ans[i] = (1+count--)%2;
        return ans;
    }
};