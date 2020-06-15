class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()||matrix[0].empty()){
            return 0;
        }
        vector<int> x(matrix[0].size(),0);
        int ans = 0;
        for(int i = 0;i<matrix.size();i++){
//             Preparing the vector for Histogram analysis
            for(int j = 0;j<matrix[0].size();j++){
                if(matrix[i][j]=='1'){
                    x[j]++;
                }
                else{
                    x[j] = 0;
                }
            }
//             Largest Area In Histogram solution below
            vector<int> heights = x;
            ans = max(heights[0],ans);
            for(int k = 1;k<heights.size();k++){
                int j = k-1;
                while(j>=0 && heights[j]>heights[k]){
                    ans = max((k-j)*heights[j],ans);
                    heights[j] = heights[k];
                    j--;
                }
            }
            ans = (heights[0]*heights.size()>ans)?heights[0]*heights.size():ans;
            for(int k = 1;k<heights.size();k++){
                ans = (heights[k]*(heights.size()-k)>ans)?heights[k]*(heights.size()-k):ans;
                while(k+1<heights.size() &&  heights[k+1]==heights[k]){
                    k++;
                }
            }
        }
        return ans;
    }
};