class Solution {
public:
    int addDigits(int num) {
        x:
        int temp = 0;
        while(num){
            temp+=(num%10);
            num/=10;
        }
        num = temp;
        if(num/10){
            goto x;
        }
        return num;
    }
};