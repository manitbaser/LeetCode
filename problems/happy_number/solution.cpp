class Solution {
public:
    bool isHappy(int n) {
        map<int,int> x;
        if(n<=1){
            return (n==1);
        }
        int num = n;
        while(num!=1){
            int check = 0;
            while(num){
                check+=(num%10)*(num%10);
                num/=10;
            }
            if(x[check]){
                return false;
            }
            x[check]++;
            num = check;
        }
        return (num==1);
    }
};