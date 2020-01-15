class Solution {
public:
    int numJewelsInStones(string J, string S) {
        sort(S.begin(),S.end());
        sort(J.begin(),J.end());
        int sum = 0;
        int p1 = 0,p2 = 0;
        while(p1<S.length()&&p2<J.length()){
            if(S[p1]==J[p2]){
                sum++;
                p1++;
            }
            else if(S[p1]<J[p2]){
                p1++;
            }
            else{
                p2++;
            }
        }
        return sum;
    }
};