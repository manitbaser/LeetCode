class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                int val = 0;
                for(int k = max(i-1,0);k<i+2 && k<board.size();k++){
                    for(int l = max(j-1,0);l<j+2 && l<board[0].size();l++){
                        val+=board[k][l]%2;
                    }
                }
                if(board[i][j]==1 &&(val<3 || val>4)) board[i][j] = 3;
                else if(board[i][j]==0 && (val==3)) board[i][j] = 2;
            }
        }
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                board[i][j] = (board[i][j]%3+1)/2;
            }
        }
    }
};