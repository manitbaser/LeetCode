class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int t[1440] = {0};
        int first = INT_MAX;
        for(int i = 0;i<timePoints.size();i++){
            if(t[(timePoints[i][0]-'0')*10*60 + (timePoints[i][1]-'0')*60 + (timePoints[i][3]-'0')*10 + (timePoints[i][4]-'0')]==1) return 0;
            
            t[(timePoints[i][0]-'0')*10*60 + (timePoints[i][1]-'0')*60 + (timePoints[i][3]-'0')*10 + (timePoints[i][4]-'0')] = 1;
            
            first = min(first, (timePoints[i][0]-'0')*10*60 + (timePoints[i][1]-'0')*60 + (timePoints[i][3]-'0')*10 + (timePoints[i][4]-'0'));
        }
        int ans = INT_MAX;
        int prev = -1;
        for(int i = 0;i<1440;i++){
            if(t[i]==1){
                if(prev==-1) prev = i;
                else{
                    ans = min(ans, min(i-prev, 1440-i+prev));
                    prev = i;
                }
            }
        }
        if(first!=prev){
            ans = min(ans, min(prev-first, 1440-prev+first));
        }
        return ans;
    }
};