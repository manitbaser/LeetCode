class Solution {
public:
    bool judgeSquareSum(int c) {
        int temp = c;
        for(int i = 0;i<=temp;i++){
            temp = sqrt(c-i*i);
            if(temp*temp==c-i*i) return true;
        }
        return false;
    }
};