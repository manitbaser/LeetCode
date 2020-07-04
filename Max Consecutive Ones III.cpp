class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int i = 0, ans = 0;
        for(int j = 0;j<A.size();j++)
            if(A[j]==0 && K--<=0) while(A[i++]!=0);
            else ans = max(j-i+1,ans);
        return ans;
    }
};
