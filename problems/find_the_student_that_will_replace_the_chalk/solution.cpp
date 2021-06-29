class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int sum = 0, i = 0;
        for(;i<chalk.size();i++)if(k<chalk[i])return i;else k-=chalk[i],sum+=chalk[i];
        k = k%sum, i = 0;
        while(k>=chalk[i]) k-=chalk[i++];
        return i;
    }
};