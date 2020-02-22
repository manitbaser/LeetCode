class Solution {
public:
    int numberOfSteps (int num) {
        long ans= 0;
        while(num){
            if(num%2){
                num--;
                ans++;
            }
            if(num){
                num/=2;
                ans++;
            }
        }
        return ans;
    }
};