class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> vals(points.size());
        for(int i = 0;i<points.size();i++) vals[i] = points[i][0];
        sort(vals.begin(),vals.end());
        int ans = 0;
        for(int i = 1;i<vals.size();i++) ans = max(ans, vals[i]-vals[i-1]);
        return ans;
    }
};