class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left;i<=right;i++){
            int j = i;
            bool flag = true;
            while(j!=0){
                if(j%10==0){
                    flag = false;
                    break;
                }
                int x = j%10;
                if(i%x==0){
                    j/=10;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans.push_back(i);
            }
        }
        return ans;
    }
};