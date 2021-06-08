class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int temp = 0;
        for(int i = 0;i<box.size();temp = 0,i++) for(int j = box[0].size()-1;j>=0;j--)
                if(box[i][j]=='.') temp++;
                else if(box[i][j]=='*') temp = 0;
                else box[i][j] = '.', box[i][j+temp] = '#';
        vector<vector<char>> ans(box[0].size(),vector<char>(box.size(),'.'));
        for(int i = 0;i<box.size();i++) for(int j = 0;j<box[0].size();j++)
            ans[j][box.size()-i-1] = box[i][j];
        return ans;
    }
};