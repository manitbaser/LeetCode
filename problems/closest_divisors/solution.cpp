class Solution {
public:
    vector<int> closestDivisors(int num) {
        int x = sqrt(num)+1;
        vector<int> ans(2,0);
        while(x>1){
            int temp = num/x;
            if(x*(temp+1)==num+1|| x*(temp+1)==num+2){
                ans[0] = x;
                ans[1] = temp+1;
                break;
            }
            x--;
        }
        return ans;
    }
};