class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> ans(5,1);
        for(int i = 0;i<n;i++) for(int j = 1;j<5;j++) ans[j]+=ans[j-1];
        return ans[4];
    }
};
