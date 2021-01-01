class Solution {
public:
    int minFlips(string target) {
        int ans = target[0]-'0';
        for(int i=1;i<target.length();i++)ans+=((target[i]-'0')xor(target[i-1]-'0'));
        return ans;
    }
};