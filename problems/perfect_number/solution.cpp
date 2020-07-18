class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<6) return false;
        int sum = 1;
        int sq = sqrt(num);
        for(int i = 2;i<=sq;i++) if(num%i==0) sum+=i+num/i;
        if(sq*sq==num) sum-=sq;
        return sum==num;
    }
};