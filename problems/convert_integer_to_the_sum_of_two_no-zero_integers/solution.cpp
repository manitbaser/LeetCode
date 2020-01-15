class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> answer;
        answer.push_back(0);
        answer.push_back(0);
        int i = 1;
        while(n){
            if(n%10==1){
                if(n!=1){
                    answer[0]+=i*2;
                    answer[1]+=i*9;
                    n= n-10;
                }
                else{
                    answer[1]+=i;
                }
            }
            else if(n%10==0){
                n=n-10;
                answer[0]+=i;
                answer[1]+=i*9;
            }
            else{
                answer[0]+=(n%10-1)*i;
                answer[1]+=i;
            }
            i*=10;
            n/=10;
        }
        return answer;
    }
};