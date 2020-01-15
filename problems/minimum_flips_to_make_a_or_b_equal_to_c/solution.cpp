class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        while(a||b||c){
            if(c%2){
                if((a%2)+(b%2)==0){
                    ans++;
                }
            }
            else{
                if((a%2)+(b%2)==2){
                    ans+=2;
                }
                else if((a%2)+(b%2)==1){
                    ans++;
                }
            }
            a/=2;
            b/=2;
            c/=2;
        }
        return ans;
    }
};