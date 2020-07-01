class Solution {
public:
    // int countBattleships(vector<vector<char>>& board) {
    //     if(board.empty() || board[0].empty()) return 0;
    //     int ans = 0;
    //     if(board[0][0]=='X') ans++;
    //     for(int i = 1;i<board.size();i++)
    //         if(board[i][0]=='X' && board[i-1][0]=='.') ans++;
    //     for(int j = 1;j<board[0].size();j++)
    //         if(board[0][j]=='X' && board[0][j-1]=='.') ans++;
    //     for(int i = 1;i<board.size();i++)
    //         for(int j = 1;j<board[0].size();j++)
    //             if(board[i][j]=='X'&& board[i-1][j]=='.' && board[i][j-1]=='.')
    //                 ans++;
    //     return ans;
    // }
    
    int countBattleships(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) { return 0; }
        int m = board.size(), n = board[0].size(), cnt = 0;
        
        for (int r = 0; r < m; r++)
            for (int c = 0; c < n; c++)
                cnt += board[r][c] == 'X' && (r == 0 || board[r - 1][c] != 'X') && (c == 0 || board[r][c - 1] != 'X');
        
        return cnt;
}
};


