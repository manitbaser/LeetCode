class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.empty()) return 0;
        int ans = heights[0];
        for(int i = 1;i<heights.size();i++){
            int j = i-1;
            while(j>=0 && heights[j]>heights[i]){
                ans = max((i-j)*heights[j],ans);
                heights[j] = heights[i];
                j--;
            }
        }
        ans = (heights[0]*heights.size()>ans)?heights[0]*heights.size():ans;
        for(int i = 1;i<heights.size();i++){
            ans = (heights[i]*(heights.size()-i)>ans)?heights[i]*(heights.size()-i):ans;
            while(i+1<heights.size() &&  heights[i+1]==heights[i]){
                i++;
            }
        }
        return ans;
    }
};
