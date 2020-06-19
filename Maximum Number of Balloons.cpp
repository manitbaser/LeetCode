class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> x(26,0);
        for(int i = 0;i<text.length();i++) x[text[i]-'a']++;
        return min(x[0],min(x[1],min(x[11]/2,min(x[14]/2,x[13]))));
    }
};
