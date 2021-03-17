class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = -1, val=INT_MAX;
        for(int i = 0;i<points.size();i++){
            if(x==points[i][0] || y==points[i][1]){
                if(val>abs(x-points[i][0])+abs(y-points[i][1])){
                    val = abs(x-points[i][0])+abs(y-points[i][1]);
                    ans = i;
                }
            }
        }
        return ans;
    }
};