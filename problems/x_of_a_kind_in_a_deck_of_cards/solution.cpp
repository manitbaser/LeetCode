class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> x;
        for(int i : deck) x[i]++;
        int hcf = 0;
        for(auto i : x) hcf = __gcd(hcf,i.second);
        return hcf>1;
    }
};