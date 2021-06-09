class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int t = 0;
        while(t<=memory1 || t<=memory2)
            if(memory1>=memory2) memory1-=t++;
            else memory2-=t++;
        vector<int> ans = {t,memory1,memory2};
        return ans;
    }
};