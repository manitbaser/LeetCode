class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int ans = 0, n = citations.size();
        for(int i = n-1;i>=0;i--) if(n-i<=citations[i]) ans = max(ans, n-i);
        return ans;
    }
};