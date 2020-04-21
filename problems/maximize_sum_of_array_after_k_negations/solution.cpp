class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(),A.end());
        if(A.size() && A[0]>=0){
            if(K%2==0){
                return accumulate(A.begin(),A.end(),0);
            }
            else{
                return accumulate(A.begin()+1,A.end(),0)-A[0];
            }
        }
        for(int i = 0;i<A.size() && A[i]<0 && K;i++,K--){
			A[i] = -A[i];
        }
        if(K%2==0){
            return accumulate(A.begin(),A.end(),0);
        }
        return accumulate(A.begin(),A.end(),0)-2* *min_element(A.begin(),A.end());
    }
};
