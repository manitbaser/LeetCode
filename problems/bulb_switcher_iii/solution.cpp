class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        vector<int> on(light.size()+1, 0);
        int mx = 0, ptr = 0, ans = 0;
        for(int i = 0;i<light.size();i++){
            on[light[i]]++;
            ptr = max(ptr, light[i]);
            for(int j = max(mx,1);j<=ptr;j++){
                if(on[j]) mx = j;
                else break;
            }
            if(mx==ptr) ans++;
        }
        return ans;
    }
};