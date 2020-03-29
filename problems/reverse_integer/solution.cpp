class Solution {
public:
    int reverse(int x) {
        if(x<0){
            int ans = 0;
            while(x){
                if(ans<(INT_MIN-x%10)/10){
                    return 0;
                }
                ans = ans*10+x%10;
                x/=10;
            }
            return ans;
        }
        else{
            int ans = 0;
            while(x){
                if(ans>(INT_MAX-x%10)/10){
                    return 0;
                }
                ans = 10*ans+x%10;
                // cout<<ans<<endl;
                x/=10;
            }
            return ans;
        }
    }
};