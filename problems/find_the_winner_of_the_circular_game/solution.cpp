class Solution {
public:
    int findTheWinner(int n, int k) {
        int cur = 0;
        vector<int> N(n,0);
        for(int i = 0;i<n;i++) N[i] = i+1;
        while(N.size()>1) cur = (cur + k-1)%N.size(), N.erase(N.begin()+cur);
        return N[0];
        
        
    }
};