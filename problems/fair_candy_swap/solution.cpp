class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        int a = accumulate(A.begin(),A.end(),0);
        int b = accumulate(B.begin(),B.end(),0);
        vector<int> ans(2,0);
        int i = 0,j = 0;
        int diff = (b-a)/2;
        while(i<A.size() && j<B.size()){
            if(B[j]-A[i]==diff){
                ans[0] = A[i];
                ans[1] = B[j];
                return ans;
            }
            else if(B[j]-A[i]<diff){
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};