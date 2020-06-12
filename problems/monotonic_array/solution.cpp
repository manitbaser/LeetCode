class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int i = 1;
        while(i<A.size() && A[i]==A[i-1]){
            i++;
        }
        if(i<A.size()){
            if(A[i]<A[i-1]){
                while(i<A.size() && A[i]<=A[i-1]){
                    i++;
                }
            }
            else{
                while(i<A.size() && A[i]>=A[i-1]){
                    i++;
                }
            }
            return i==A.size();
        }
        return true;
    }
};