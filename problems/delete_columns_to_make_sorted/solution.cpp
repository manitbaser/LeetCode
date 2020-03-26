class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int count = 0;
        for(int i = 0;i<A[0].length();i++){
            char x = A[0][i];
            for(int j = 1;j<A.size();j++){
                if(x>A[j][i]){
                    count++;
                    break;
                }
                x = A[j][i];
            }
        }
        return count;
    }
};