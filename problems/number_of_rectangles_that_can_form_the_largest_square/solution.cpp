class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int mx = 0, cur = 0;
        for(int i = 0;i<rectangles.size();i++)
            if(min(rectangles[i][0],rectangles[i][1])==mx) cur++;
            else if(min(rectangles[i][0],rectangles[i][1])>mx) mx = min(rectangles[i][0],rectangles[i][1]), cur = 1;
        return cur;
    }
};