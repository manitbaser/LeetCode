class Solution {
public:
    int totalMoney(int n) {
        return (n/7)*28 + 7*(((n/7-1)*(n/7))/2) + (n/7)*(n%7) + ((n%7)*(n%7+1)/2);
    }
};