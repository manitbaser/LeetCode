class Solution {
public:
    int countOdds(int low, int high) {
        // if(high%2==1) high++;
        // if(low%2==1) low--;
        return (((high%2==1)?high+1:high)-((low%2==1)?low-1:low))/2;
    }
};