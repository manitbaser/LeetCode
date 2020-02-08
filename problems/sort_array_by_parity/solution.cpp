class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int j = A.size()-1;
        for(int i = 0;i<j;i++){
            if(A[i]%2==1){
                while(A[j]%2==1 && j>i){
                    j--;
                }
                if(j!=i){
                    swap(A[j],A[i]);
                }
                else{
                    int x = A[i];
                    A.erase(A.begin()+i);
                    A.push_back(x);
                }
            }
        }
        return A;
    }
};