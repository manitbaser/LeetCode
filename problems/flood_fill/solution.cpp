class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        queue<int> x;
        if(image[sr][sc]==newColor) return image;
        int n = image.size(), m = image[0].size();
        x.push(sr*m+sc);
        int old = image[sr][sc];
        while(!x.empty()){
            int i = x.front()/m, j = x.front()%m;
            if(i>0 && image[i-1][j]==old)   x.push((i-1)*m+j);
            if(i<n-1 && image[i+1][j]==old) x.push((i+1)*m+j);
            if(j>0 && image[i][j-1]==old)   x.push(i*m+j-1);
            if(j<m-1 && image[i][j+1]==old) x.push(i*m+j+1);
            image[i][j]= newColor;
            x.pop();
        }
        return image;
    }
};