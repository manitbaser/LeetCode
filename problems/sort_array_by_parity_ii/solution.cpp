class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        // vector<int> odd;
        // vector<int> even;
        // int j = 0;
        // for(int i = 0;i<A.size();i++){
        //     if(A[i]%2==0 && i%2==1){
        //         even.push_back(i);
        //     }
        //     else if(A[i]%2==1 && i%2==0){
        //         odd.push_back(i);
        //     }
        //     while(j<odd.size() && j<even.size()){
        //         swap(A[odd[j]],A[even[j]]);
        //         j++;
        //     }
        // }
        // return A;
        int even = 0;
        int odd = 1;
        while(even<A.size() && odd<A.size()){
            while(even<A.size() &&A[even]%2==0){
                even+=2;
            }
            while(odd<A.size() && A[odd]%2==1){
                odd+=2;
            }
            if(odd<A.size() && even<A.size()){
                swap(A[even],A[odd]);
            }
        }
        return A;
    }
};