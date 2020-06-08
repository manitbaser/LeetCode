class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int x = 0;
        while(K){
            int temp = K%10;
            if(A.size()-1<x){
                A.insert(A.begin(),temp);
            }
            else{
                A[A.size()-x-1]+=temp;
            }
            x++;
            K/=10;
            
        }
        int carry = 0;
        for(int i = A.size()-1;i>=0;i--){
            A[i]+=carry;
            carry = A[i]/10;
            A[i]%=10;
            
        }
        if(carry){
            A.insert(A.begin(),carry);
        }
        while(A.size() && A[0]==0){
            A.erase(A.begin());
        }
        if(A.empty()){
            A.push_back(0);
        }
        return A;
    }
};