class Solution {
public:
    bool fn(vector<int> a, vector<int> b){
        return a[1]<=b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()<=1) return points.size();
        sort(points.begin(),points.end());
        int ptr = points[points.size()-1][0], ans = 1;
        for(int i = points.size()-2;i>=0;i--){
            if(ptr>=points[i][0] && ptr<=points[i][1]) continue;
            ans++;
            ptr = points[i][0];
        }
        return ans;
    }
};