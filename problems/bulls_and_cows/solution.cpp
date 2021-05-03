class Solution {
public:
    string getHint(string secret, string guess) {
        int num_s[10]={0}, num_g[10]={0}, bulls = 0, cows = 0;
        for(int i = 0;i<guess.length();i++)
            if(guess[i]==secret[i]) bulls++;
            else num_s[secret[i]-'0']++, num_g[guess[i]-'0']++;
        for(int i = 0;i<10;i++) cows+=min(num_s[i], num_g[i]);
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};