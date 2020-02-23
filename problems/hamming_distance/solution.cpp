class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        while(x||y){
            if(((x%2)xor(y%2))){
                ans+=1;
            }
            x/=2;
            y/=2;
        }
        return ans;
    }
};